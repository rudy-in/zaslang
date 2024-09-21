#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "lexer/ZasLexer.h"
#include "parser/ZasParser.h"
#include "parser/ZasParserBaseListener.h" 

using namespace antlr4;

class MyListener : public ZasParserBaseListener {
public:
    void enterDisplayStatement(ZasParser::DisplayStatementContext *ctx) override {
        std::cout << ctx->STRING()->getText() << std::endl;
    }
};

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: ./zas <input_file.zas>" << std::endl;
        return 1;
    }

    std::ifstream stream(argv[1]);
    if (!stream) {
        std::cerr << "Unable to open input file: " << argv[1] << std::endl;
        return 1;
    }
    ANTLRInputStream input(stream);
    ZasLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    ZasParser parser(&tokens);

    tree::ParseTree* tree = parser.program();
    MyListener listener; 
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    std::cout << "Parsing completed." << std::endl;

    return 0; 
}
