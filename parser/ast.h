#ifndef AST_H
#define AST_H

#include <memory>
#include <string>
#include <vector>

// base class for all expression nodes.
class Expr {
public:
    virtual ~Expr() = default;
};

// expression class for numeric literals like "1.0".
class NumberExpr : public Expr {
public:
    explicit NumberExpr(double value) : value(value) {}
    double value;
};

// expression class for referencing a variable, like "a".
class VariableExpr : public Expr {
public:
    explicit VariableExpr(std::string name) : name(std::move(name)) {}
    std::string name;
};

// expression class for a binary operator (e.g., '+', '-').
class BinaryExpr : public Expr {
public:
    BinaryExpr(std::unique_ptr<Expr> lhs, std::string op, std::unique_ptr<Expr> rhs)
        : lhs(std::move(lhs)), op(std::move(op)), rhs(std::move(rhs)) {}

    std::unique_ptr<Expr> lhs;
    std::string op;
    std::unique_ptr<Expr> rhs;
};

// expression class for function calls (e.g., foo(1, 2)).
class CallExpr : public Expr {
public:
    CallExpr(std::string callee, std::vector<std::unique_ptr<Expr>> args)
        : callee(std::move(callee)), args(std::move(args)) {}

    std::string callee;
    std::vector<std::unique_ptr<Expr>> args;
};

// this class represents the "prototype" for a function,
// which captures its name and argument names.
class PrototypeAST {
public:
    PrototypeAST(std::string name, std::vector<std::string> args)
        : name(std::move(name)), args(std::move(args)) {}

    std::string name;
    std::vector<std::string> args;
};

// this class represents a function definition itself.
class FunctionAST {
public:
    FunctionAST(std::unique_ptr<PrototypeAST> proto, std::unique_ptr<Expr> body)
        : proto(std::move(proto)), body(std::move(body)) {}

    std::unique_ptr<PrototypeAST> proto;
    std::unique_ptr<Expr> body;
};

#endif // AST_H
