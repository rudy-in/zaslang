#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "lexer/ZasLexer.h"
#include "parser/ZasParser.h"

using namespace antlr4;

// Define your listener
class MyListener : public ZasParserBaseListener {
public:
    void enterDisplayStatement(ZasParser::DisplayStatementContext *ctx) override {
        std::cout << ctx->STRING()->getText() << std::endl; // Assuming STRING is defined in your grammar
    }
};

int main(int argc, const char* argv[]) {
    // Check for input file argument
    if (argc < 2) {
        std::cerr << "Usage: ./zas <input_file.zas>" << std::endl;
        return 1;
    }

    // Open the input file
    std::ifstream stream(argv[1]);
    if (!stream) {
        std::cerr << "Unable to open input file: " << argv[1] << std::endl;
        return 1;
    }

    // Set up the input for ANTLR
    ANTLRInputStream input(stream);
    ZasLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    ZasParser parser(&tokens);

    // Parse the input
    tree::ParseTree* tree = parser.program();

    // Create a listener and walk the tree
    MyListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);  // Use &listener

    std::cout << "Parsing completed." << std::endl;

    return 0;
}
