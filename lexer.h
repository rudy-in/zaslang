#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <vector>
#include <unordered_set>

// Token type enumeration
enum class TokenType {
    Keyword,
    Identifier,
    Number,
    String,
    Operator,
    Symbol,
    EndOfFile,
    Unknown
};

// Token structure
struct Token {
    TokenType type;
    std::string value;
    int line;
    int column;

    Token(TokenType t, const std::string& val, int ln, int col)
        : type(t), value(val), line(ln), column(col) {}

    void print() const;
};

// Lexer class
class Lexer {
private:
    std::string source;
    size_t position = 0;
    int line = 1;
    int column = 1;
    std::unordered_set<std::string> keywords = {
        "let", "if", "else", "for", "while", "func", "struct", "return", "display"
    };

public:
    Lexer(const std::string& input);
    std::vector<Token> tokenize();
    Token nextToken();

private:
    bool isAtEnd() const;
    char advance();
    char peek() const;
    void skipWhitespace();
    Token parseNumber();
    Token parseIdentifierOrKeyword();
    Token parseString();
};

#endif // LEXER_H
