#include "lexer.h"
#include <cctype>
#include <stdexcept>

// Global variables
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

Token Lexer::getNextToken() {
    while (isspace(currentChar())) advance();

    if (isdigit(currentChar())) {
        std::string numStr;
        while (isdigit(currentChar())) {
            numStr += currentChar();
            advance();
        }
        NumVal = std::stod(numStr);
        return Token{TokenKind::Number, numStr}; // Return Token with value
    }

    if (isalpha(currentChar())) {
        IdentifierStr.clear();
        while (isalnum(currentChar())) {
            IdentifierStr += currentChar();
            advance();
        }
        return Token{TokenKind::Identifier, IdentifierStr}; // Return Token with value
    }

    if (currentChar() == '+' || currentChar() == '-' || currentChar() == '*' || currentChar() == '/') {
        std::string opStr(1, currentChar());
        advance();
        return Token{TokenKind::Operator, opStr}; // Return Token with value
    }

    if (currentChar() == '\0') {
        return Token{TokenKind::TokEOF, ""}; // Return EOF Token
    }

    advance();
    return Token{TokenKind::Unknown, ""}; // Handle unknown characters
}

// Ensure this function is not inside any class
int gettok() {
    return static_cast<int>(lexer.getNextToken().kind); // Use the Lexer instance
}
