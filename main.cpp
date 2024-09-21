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

void HandleTopLevelExpression();

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
    Lexer lexer;

    std::cout << "Welcome to the Zas interpreter!" << std::endl;

    MainLoop();

    return 0;
}
