// from some reason the #pragma once directive is not working
#ifndef RSH_COMPILER_HPP
#define RSH_COMPILER_HPP
#include "messages.pb.h"
#include "rsh.hpp"
#include <string>

namespace rsh {

struct CompilerOptions {
  std::string name;
  int bc_opt = 3;
  int cc_opt = 3;
  bool inplace;
  bool cache = true;
  protocol::Tier tier = protocol::Tier::OPTIMIZED;

  static CompilerOptions from_list(SEXP listsxp);
};

SEXP initialize();
SEXP compile(SEXP closure, SEXP options);
SEXP is_compiled(SEXP closure);

using JitFun = SEXP (*)(SEXP env, SEXP cp);
} // namespace rsh

#endif // RSH_COMPILER_HPP
