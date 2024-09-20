#ifndef PARSER_H
#define PARSER_H

#include "lexer.h"
#include "ast.h"

class Parser {
public:
    Parser(Lexer &lexer) : lexer(lexer), currentToken(lexer.getNextToken()) {}

    std::unique_ptr<FunctionDef> parseFunction();

private:
    Lexer &lexer;
    Token currentToken;

    std::unique_ptr<Expr> parseExpression();
};

#endif // PARSER_H
