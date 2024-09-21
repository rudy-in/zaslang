#ifndef LEXER_H
#define LEXER_H

#include <string>
int gettok();
enum class TokenKind { Identifier, Number, Operator, LParen, RParen, TokEOF, Unknown };

extern std::string IdentifierStr;

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
