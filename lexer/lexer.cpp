#include "lexer.h"
#include <cctype>

Token Lexer::getNextToken() {
    while (isspace(currentChar())) advance();

    if (isdigit(currentChar())) {
        std::string numStr;
        while (isdigit(currentChar())) {
            numStr += currentChar();
            advance();
        }
        return Token{TokenKind::Number, std::stod(numStr)};
    }

    if (isalpha(currentChar())) {
        std::string idStr;
        while (isalnum(currentChar())) {
            idStr += currentChar();
            advance();
        }
        return Token{TokenKind::Identifier, idStr};
    }

    if (currentChar() == '+' || currentChar() == '-' || currentChar() == '*' || currentChar() == '/') {
        char op = currentChar();
        advance();
        return Token{TokenKind::Operator, std::string(1, op)};
    }

    if (currentChar() == '\0') {
        return Token{TokenKind::EOF, ""};
    }

    advance();
    return Token{TokenKind::EOF, ""};
}
