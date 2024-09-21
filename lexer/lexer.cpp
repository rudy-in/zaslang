#include "lexer.h"
#include <cctype>
#include <stdexcept>

std::string IdentifierStr;
double NumVal;
Lexer lexer; // Global lexer instance

void Lexer::setInput(const std::string &inputStr) {
    input = inputStr;
    index = 0; // Reset the index to the start
}

char Lexer::currentChar() {
    if (index < input.size()) {
        return input[index];
    }
    return '\0'; // End of input
}

void Lexer::advance() {
    if (index < input.size()) {
        index++;
    }
}

TokenKind Lexer::getNextToken() {
    while (isspace(currentChar())) advance();

    if (isdigit(currentChar())) {
        std::string numStr;
        while (isdigit(currentChar())) {
            numStr += currentChar();
            advance();
        }
        NumVal = std::stod(numStr);
        return TokenKind::Number;
    }

    if (isalpha(currentChar())) {
        IdentifierStr.clear();
        while (isalnum(currentChar())) {
            IdentifierStr += currentChar();
            advance();
        }
        return TokenKind::Identifier;
    }

    if (currentChar() == '+' || currentChar() == '-' || currentChar() == '*' || currentChar() == '/') {
        advance();
        return TokenKind::Operator;
    }

    if (currentChar() == '\0') {
        return TokenKind::TokEOF;
    }

    advance();
    return TokenKind::Unknown; // Handle unknown characters
}

int gettok() {
    return static_cast<int>(lexer.getNextToken()); // Use the Lexer instance
}
