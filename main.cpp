#include <iostream>
#include <memory>
#include "lexer/lexer.h"
#include "parser/parser.h"
#include "parser/ast.h"

int CurTok;

static int getNextToken() {
    return gettok();
}

static void HandleDefinition() {
    std::cout << "Handling a function definition." << std::endl;
}

static void HandleExtern() {
    std::cout << "Handling an extern declaration." << std::endl;
}

void HandleTopLevelExpression() {
    Token token = lexer.getNextToken(); // Get the next token

    while (token.kind != TokenKind::TokEOF) {
        switch (token.kind) {
            case TokenKind::Number:
                std::cout << "Parsed number: " << token.value << std::endl;
                break;

            case TokenKind::Identifier:
                std::cout << "Parsed identifier: " << token.value << std::endl;
                break;

            case TokenKind::Operator:
                std::cout << "Parsed operator: " << token.value << std::endl;
                break;

            default:
                std::cerr << "Unknown token: " << token.value << std::endl;
                break;
        }

        token = lexer.getNextToken(); // Get the next token
    }
}

static void MainLoop() {
    while (true) {
        fprintf(stderr, "ready> ");
        CurTok = getNextToken();

        switch (CurTok) {
            case tok_eof:
                return;
            case ';':
                getNextToken();
                break;
            case tok_def:
                HandleDefinition();
                break;
            case tok_extern:
                HandleExtern();
                break;
            default:
                HandleTopLevelExpression();
                break;
        }
    }
}

int main() {
    lexer.setInput("your input string here"); // Set the input for the lexer
    std::cout << "Welcome to the Zas interpreter!" << std::endl;

    MainLoop();

    return 0;
}
