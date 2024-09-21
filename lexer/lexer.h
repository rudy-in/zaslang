#ifndef LEXER_H
#define LEXER_H

#include <string>

enum class TokenKind { Identifier, Number, Operator, TokEOF, Unknown };
extern std::string IdentifierStr;
extern double NumVal;

class Lexer {
public:
    void setInput(const std::string &inputStr);
    TokenKind getNextToken();
    
private:
    char currentChar();
    void advance();
    
    std::string input; 
    size_t index = 0;  
};


int gettok();

#endif // LEXER_H
