#include <iostream>
#include <memory>
#include "lexer/lexer.h"
#include "parser/parser.h"
#include "parser/ast.h"

static int CurTok;

static int getNextToken();
static void HandleDefinition();
static void HandleExtern();
static void HandleTopLevelExpression();

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
