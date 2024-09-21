#include "MyListener.h"
#include <iostream>

void MyListener::enterFunctionCall(ZasParser::FunctionCallContext *ctx) {
    std::string functionName = ctx->IDENTIFIER()->getText();
    
    if (functionName == "display") {
        if (ctx->argumentList() && ctx->argumentList()->STRING()) {
            std::string message = ctx->argumentList()->STRING()->getText();
            std::cout << message << std::endl; // Display the message
        }
    }
}
