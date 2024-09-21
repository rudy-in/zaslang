#include <iostream>
#include <memory>
#include "lexer/lexer.h" // Ensure this includes Token and TokenKind
#include "parser/parser.h"
#include "parser/ast.h"
#include "globals.h"

int CurTok;
Token token = lexer.getNextToken();

static int getNextToken() {
    return gettok();
}

static void HandleDefinition() {
    std::cout << "Handling a function definition." << std::endl;

   
    Token token = lexer.getNextToken(); 
    if (token.kind != TokenKind::Identifier) {
        std::cerr << "Expected function name, got: " << token.value << std::endl;
        return;
    }
    
    std::string functionName = token.value;

 
    token = lexer.getNextToken();
    if (token.kind != TokenKind::Operator || token.value != "(") {
        std::cerr << "Expected '(', got: " << token.value << std::endl;
        return;
    }

    
    while (true) {
        token = lexer.getNextToken();
        if (token.kind == TokenKind::Operator && token.value == ")") {
            break; // End of parameters
        } else if (token.kind == TokenKind::Identifier) {
            std::cout << "Parameter: " << token.value << std::endl;
        } else {
            std::cerr << "Expected parameter or ')', got: " << token.value << std::endl;
            return;
        }
    }


    token = lexer.getNextToken();
    if (token.kind != TokenKind::Operator || token.value != "{") {
        std::cerr << "Expected '{', got: " << token.value << std::endl;
        return;
    }

    
    std::cout << "Function " << functionName << " definition parsed." << std::endl;

    
    token = lexer.getNextToken();
    if (token.kind != TokenKind::Operator || token.value != "}") {
        std::cerr << "Expected '}', got: " << token.value << std::endl;
        return;
    }
}

static void HandleExtern() {
    std::cout << "Handling an extern declaration." << std::endl;

    
    Token token = lexer.getNextToken(); 
    if (token.kind != TokenKind::Identifier) {
        std::cerr << "Expected extern function name, got: " << token.value << std::endl;
        return;
    }

    std::string externFunctionName = token.value;

    
    token = lexer.getNextToken();
    if (token.kind != TokenKind::Operator || token.value != "(") {
        std::cerr << "Expected '(', got: " << token.value << std::endl;
        return;
    }

    
    while (true) {
        token = lexer.getNextToken();
        if (token.kind == TokenKind::Operator && token.value == ")") {
            break; 
        }
        
    }


    token = lexer.getNextToken();
    if (token.kind != TokenKind::Operator || token.value != ";") {
        std::cerr << "Expected ';', got: " << token.value << std::endl;
        return;
    }

    std::cout << "Extern function " << externFunctionName << " declaration parsed." << std::endl;
}


void HandleTopLevelExpression() {
    Token token = lexer.getNextToken(); // Get the first token

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
                break; // Skip semicolons
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
    std::string input = "def foo(x, y) { return x + y; }; extern bar(x);"; // Set the input for the lexer
    std::cout << "Welcome to the Zas interpreter!" << std::endl;

    MainLoop();

    return 0;
}
