#ifndef LEXER_H
#define LEXER_H

#include <string>

enum class TokenKind { Identifier, Number, Operator, TokEOF };

struct Token {
    TokenKind kind;
    std::string value;
};

class Lexer {
public:
    Token getNextToken();
private:
    char currentChar();
    void advance();
};

#endif // LEXER_H
