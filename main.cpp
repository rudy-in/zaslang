#include "lexer.h"
#include <iostream>

int main() {
    std::string source = R"(
        let x = 42;
        display("Hello, World!");
        if x > 10 {
            x = x + 1;
        }
    )";

    Lexer lexer(source);
    std::vector<Token> tokens = lexer.tokenize();

    for (const Token& token : tokens) {
        token.print();
    }

    return 0;
}
