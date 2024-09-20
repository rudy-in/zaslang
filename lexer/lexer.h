#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <variant>
#include <vector>

enum class TokenKind { Identifier, Number, Operator, EOF };

struct Token {
    TokenKind kind;
    std::variant<std::string, double> value;
};

class Lexer {
public:
    explicit Lexer(const std::string &input) : input(input), current(0) {}

    Token getNextToken();

private:
    std::string input;
    size_t current;

    char currentChar() {
        return (current < input.size()) ? input[current] : '\0';
    }

    void advance() {
        if (current < input.size()) current++;
    }
};

#endif // LEXER_H
