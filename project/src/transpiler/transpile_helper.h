#ifndef C2EO_SRC_TRANSPILER_TRANSPILE_HELPER_H_
#define C2EO_SRC_TRANSPILER_TRANSPILE_HELPER_H_

// Declares clang::SyntaxOnlyAction.
#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"

// Declares llvm::cl::extrahelp.
#include "llvm/Support/CommandLine.h"
#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/AST/ASTContext.h"
#include "eo_object.h"

std::string GetTypeName(clang::QualType qual_type);

EOObject GetFunctionBody(const clang::FunctionDecl *FD);

EOObject GetCompoundStmt(const clang::CompoundStmt *CS, bool is_decorator = false);

EOObject GetStmtEOObject(const clang::Stmt *p_stmt);

std::set<std::string> FindAllExternalObjects(const EOObject &obj);

#endif // C2EO_SRC_TRANSPILER_TRANSPILE_HELPER_H_
