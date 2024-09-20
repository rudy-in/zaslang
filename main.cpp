#include <iostream>
#include <memory>
#include <vector>
#include <fstream>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/ExecutionEngine/ExecutionEngine.h>
#include <llvm/ExecutionEngine/MCJIT.h>
#include <llvm/Support/TargetSelect.h>
#include "lexer.h"
#include "parser.h"
#include "ast.h"

std::unique_ptr<llvm::Value> generateCode(const std::unique_ptr<ExprAST>& expr, llvm::IRBuilder<>& builder, llvm::Module& module) {
    if (auto* numExpr = dynamic_cast<NumberExprAST*>(expr.get())) {
        return llvm::ConstantFP::get(llvm::Type::getDoubleTy(builder.getContext()), numExpr->getValue());
    } else if (auto* varExpr = dynamic_cast<VariableExprAST*>(expr.get())) {
        // handle variable loading
    } else if (auto* binExpr = dynamic_cast<BinaryExprAST*>(expr.get())) {
        auto lhs = generateCode(binExpr->getLHS(), builder, module);
        auto rhs = generateCode(binExpr->getRHS(), builder, module);
        if (binExpr->getOp() == '+') {
            return builder.CreateFAdd(lhs, rhs, "addtmp");
        } else if (binExpr->getOp() == '-') {
            return builder.CreateFSub(lhs, rhs, "subtmp");
        } else if (binExpr->getOp() == '*') {
            return builder.CreateFMul(lhs, rhs, "multmp");
        } else if (binExpr->getOp() == '/') {
            return builder.CreateFDiv(lhs, rhs, "divtmp");
        }
    }
    return nullptr;
}

int main() {
    llvm::LLVMContext context;
    llvm::Module module("ZasModule", context);
    llvm::IRBuilder<> builder(context);

    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();

    std::ifstream sourceFile("source.zas");
    if (!sourceFile.is_open()) {
        std::cerr << "Error: Unable to open source.zas" << std::endl;
        return 1;
    }

    Lexer lexer(sourceFile);
    Parser parser(lexer);
    auto program = parser.parse();

    for (const auto& expr : program) {
        generateCode(expr, builder, module);
    }

    std::string error;
    llvm::ExecutionEngine* engine = llvm::EngineBuilder(std::unique_ptr<llvm::Module>(&module)).setErrorStr(&error).create();
    if (!engine) {
        std::cerr << "Error creating execution engine: " << error << std::endl;
        return 1;
    }

    return 0;
}
