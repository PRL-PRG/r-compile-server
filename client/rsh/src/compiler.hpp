// from some reason the #pragma once directive is not working
#ifndef RSH_COMPILER_HPP
#define RSH_COMPILER_HPP
#include "rsh.hpp"
#include <string>

namespace rsh {

// TODO: could these options be part of the protocol?
struct CompilerOptions {
  std::string name;
  int bc_opt;
  int cc_opt;
  bool inplace;

  static CompilerOptions from_list(SEXP listsxp);
};

SEXP initialize();
SEXP compile(SEXP closure, SEXP options);
SEXP call_fun(SEXP call, SEXP op, SEXP args, SEXP env);
SEXP is_compiled(SEXP closure);

using JitFun = SEXP (*)(SEXP env, SEXP cp);
} // namespace rsh

#endif // RSH_COMPILER_HPP
