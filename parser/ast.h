#ifndef AST_H
#define AST_H

#include <memory>
#include <string>
#include <vector>

class Expr {
public:
    virtual ~Expr() = default;
};

class NumberExpr : public Expr {
public:
    explicit NumberExpr(double value) : value(value) {}
    double value;
};

class VariableExpr : public Expr {
public:
    explicit VariableExpr(std::string name) : name(std::move(name)) {}
    std::string name;
};

class BinaryExpr : public Expr {
public:
    BinaryExpr(std::unique_ptr<Expr> lhs, std::string op, std::unique_ptr<Expr> rhs)
        : lhs(std::move(lhs)), op(std::move(op)), rhs(std::move(rhs)) {}

    std::unique_ptr<Expr> lhs;
    std::string op;
    std::unique_ptr<Expr> rhs;
};

class FunctionDef {
public:
    FunctionDef(std::string name, std::unique_ptr<Expr> body)
        : name(std::move(name)), body(std::move(body)) {}

    std::string name;
    std::unique_ptr<Expr> body;
};

#endif // AST_H
