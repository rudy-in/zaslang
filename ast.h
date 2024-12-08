//
// Created by rudy on 02/12/24.
//

#ifndef AST_H
#define AST_H

#include <memory>    // For std::unique_ptr
#include <vector>
#include <string>

// Base AST Node
struct ASTNode {
    virtual ~ASTNode() = default;
};

// Program Node
struct ProgramNode : ASTNode {
    std::vector<std::unique_ptr<ASTNode>> statements;

    explicit ProgramNode(std::vector<std::unique_ptr<ASTNode>> stmts)
        : statements(std::move(stmts)) {}
};

// Expression Nodes
struct Expression : ASTNode {};
struct NumberExpr : Expression {
    double value;

    explicit NumberExpr(double val) : value(val) {}
};

struct VariableExpr : Expression {
    std::string name;

    explicit VariableExpr(std::string n) : name(std::move(n)) {}
};

struct BinaryExpr : Expression {
    char op;
    std::unique_ptr<Expression> left;
    std::unique_ptr<Expression> right;

    BinaryExpr(char op, std::unique_ptr<Expression> l, std::unique_ptr<Expression> r)
        : op(op), left(std::move(l)), right(std::move(r)) {}
};

// Statement Nodes
struct Statement : ASTNode {};
struct DeclarationStmt : Statement {
    std::string name;
    std::unique_ptr<Expression> value;

    DeclarationStmt(std::string n, std::unique_ptr<Expression> v)
        : name(std::move(n)), value(std::move(v)) {}
};

struct IfStmt : Statement {
    std::unique_ptr<Expression> condition;
    std::vector<std::unique_ptr<Statement>> body;

    IfStmt(std::unique_ptr<Expression> cond, std::vector<std::unique_ptr<Statement>> b)
        : condition(std::move(cond)), body(std::move(b)) {}
};

#endif // AST_H
