#include "ast.h"
#include <memory>
#include <string>
#include <vector>

/// base class for all expression nodes in the AST
class ExprAST {
public:
    virtual ~ExprAST() = default;
};

/// expression class for numeric literals like "1.0"
class NumberExprAST : public ExprAST {
    double Val;

public:
    NumberExprAST(double Val) : Val(Val) {}
    double getValue() const { return Val; }
};

/// expression class for referencing a variable like "a"
class VariableExprAST : public ExprAST {
    std::string Name;

public:
    VariableExprAST(const std::string &Name) : Name(Name) {}
    const std::string &getName() const { return Name; }
};

/// expression class for a binary operator (e.g., '+', '-')
class BinaryExprAST : public ExprAST {
    char Op;
    std::unique_ptr<ExprAST> LHS, RHS;

public:
    BinaryExprAST(char Op, std::unique_ptr<ExprAST> LHS, std::unique_ptr<ExprAST> RHS)
        : Op(Op), LHS(std::move(LHS)), RHS(std::move(RHS)) {}

    char getOperator() const { return Op; }
    const ExprAST *getLHS() const { return LHS.get(); }
    const ExprAST *getRHS() const { return RHS.get(); }
};

/// expression class for function calls (e.g., foo(1, 2))
class CallExprAST : public ExprAST {
    std::string Callee;
    std::vector<std::unique_ptr<ExprAST>> Args;

public:
    CallExprAST(const std::string &Callee, std::vector<std::unique_ptr<ExprAST>> Args)
        : Callee(Callee), Args(std::move(Args)) {}

    const std::string &getCallee() const { return Callee; }
    const std::vector<std::unique_ptr<ExprAST>> &getArgs() const { return Args; }
};
