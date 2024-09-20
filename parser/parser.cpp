#include "parser.h"

std::unique_ptr<Expr> Parser::parseExpression() {
    if (currentToken.kind == TokenKind::Number) {
        double value = std::get<double>(currentToken.value);
        currentToken = lexer.getNextToken();
        return std::make_unique<NumberExpr>(value);
    }

    if (currentToken.kind == TokenKind::Identifier) {
        std::string name = std::get<std::string>(currentToken.value);
        currentToken = lexer.getNextToken();
        return std::make_unique<VariableExpr>(name);
    }

    // Handle binary expressions
    auto lhs = parseExpression();
    if (currentToken.kind == TokenKind::Operator) {
        std::string op = std::get<std::string>(currentToken.value);
        currentToken = lexer.getNextToken();
        auto rhs = parseExpression();
        return std::make_unique<BinaryExpr>(std::move(lhs), op, std::move(rhs));
    }

    return nullptr;
}

std::unique_ptr<FunctionDef> Parser::parseFunction() {
    if (currentToken.kind == TokenKind::Identifier) {
        std::string name = std::get<std::string>(currentToken.value);
        currentToken = lexer.getNextToken();
        auto body = parseExpression();
        return std::make_unique<FunctionDef>(name, std::move(body));
    }

    return nullptr;
}
