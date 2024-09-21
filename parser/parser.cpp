#include "parser.h"
#include "../lexer/lexer.h"
#include "ast.h"
#include <map>
#include <memory>
#include <string>
#include <vector>
#include <cstdio>

//static int CurTok;
static int getNextToken() {
    return static_cast<int>(CurTok = gettok());
}

std::unique_ptr<Expr> LogError(const char *Str) {
    fprintf(stderr, "Error: %s\n", Str);
    return nullptr;
}

std::unique_ptr<PrototypeAST> LogErrorP(const char *Str) {
    LogError(Str);
    return nullptr;
}

static std::map<char, int> BinopPrecedence = {
    {'<', 10}, {'+', 20}, {'-', 20}, {'*', 40}
};

static int GetTokPrecedence() {
    if (!isascii(CurTok))
        return -1;
    int TokPrec = BinopPrecedence[CurTok];
    if (TokPrec <= 0) return -1;
    return TokPrec;
}

std::unique_ptr<Expr> ParseExpression();
std::unique_ptr<Expr> ParsePrimary();
std::unique_ptr<Expr> ParseBinaryOpRHS(int ExprPrec, std::unique_ptr<Expr> LHS);
std::unique_ptr<PrototypeAST> ParsePrototype();
std::unique_ptr<FunctionAST> ParseDefinition();
std::unique_ptr<PrototypeAST> ParseExtern();
std::unique_ptr<FunctionAST> ParseTopLevelExpr();

std::unique_ptr<Expr> ParseNumberExpr() {
    auto Result = std::make_unique<NumberExpr>(NumVal);
    getNextToken();
    return std::move(Result);
}

std::unique_ptr<Expr> ParseParenExpr() {
    getNextToken();
    auto V = ParseExpression();
    if (!V) return nullptr;

    if (CurTok != ')')
        return LogError("expected ')'");
    getNextToken();
    return V;
}

std::unique_ptr<Expr> ParseIdentifierExpr() {
    std::string IdName = IdentifierStr;
    getNextToken();
    return std::make_unique<VariableExpr>(IdName);
}

std::unique_ptr<Expr> ParseBinaryOpRHS(int ExprPrec, std::unique_ptr<Expr> LHS) {
    while (true) {
        int TokPrec = GetTokPrecedence();
        if (TokPrec < ExprPrec) return LHS;

        int BinOp = CurTok;
        getNextToken();

        auto RHS = ParsePrimary();
        if (!RHS) return nullptr;

        int NextPrec = GetTokPrecedence();
        if (TokPrec < NextPrec) {
            RHS = ParseBinaryOpRHS(TokPrec + 1, std::move(RHS));
            if (!RHS) return nullptr;
        }

        LHS = std::make_unique<BinaryExpr>(std::move(LHS), std::string(1, BinOp), std::move(RHS));
    }
}

std::unique_ptr<Expr> ParseExpression() {
    auto LHS = ParsePrimary();
    if (!LHS) return nullptr;
    return ParseBinaryOpRHS(0, std::move(LHS));
}

std::unique_ptr<Expr> ParsePrimary() {
    switch (CurTok) {
    case tok_identifier:
        return ParseIdentifierExpr();
    case tok_number:
        return ParseNumberExpr();
    case '(':
        return ParseParenExpr();
    default:
        return LogError("unknown token when expecting an expression");
    }
}

std::unique_ptr<PrototypeAST> ParsePrototype() {
    if (CurTok != tok_identifier)
        return LogErrorP("Expected function name in prototype");

    std::string FnName = IdentifierStr;
    getNextToken();

    if (CurTok != '(')
        return LogErrorP("Expected '(' in prototype");

    std::vector<std::string> ArgNames;
    while (getNextToken() == tok_identifier)
        ArgNames.push_back(IdentifierStr);

    if (CurTok != ')')
        return LogErrorP("Expected ')' in prototype");

    getNextToken();  // eat ')'.
    return std::make_unique<PrototypeAST>(FnName, std::move(ArgNames));
}

std::unique_ptr<FunctionAST> ParseDefinition() {
    getNextToken();  // eat def.
    auto Proto = ParsePrototype();
    if (!Proto) return nullptr;

    if (auto E = ParseExpression())
        return std::make_unique<FunctionAST>(std::move(Proto), std::move(E));
    return nullptr;
}

std::unique_ptr<PrototypeAST> ParseExtern() {
    getNextToken();  // eat extern.
    return ParsePrototype();
}

std::unique_ptr<FunctionAST> ParseTopLevelExpr() {
    if (auto E = ParseExpression()) {
        auto Proto = std::make_unique<PrototypeAST>("", std::vector<std::string>());
        return std::make_unique<FunctionAST>(std::move(Proto), std::move(E));
    }
    return nullptr;
}
