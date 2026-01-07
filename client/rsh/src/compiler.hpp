// from some reason the #pragma once directive is not working
#ifndef RSH_COMPILER_HPP
#define RSH_COMPILER_HPP
#include "messages.pb.h"
#include "rsh.hpp"
#include <string>
#include <optional>

namespace rsh {

struct CompilerOptions {
  std::string name;
  int bc_opt = 3;
  int cc_opt = 3;
  bool inplace;
  bool cache = true;
  bool debug = false;
  protocol::Tier tier = protocol::Tier::OPTIMIZED;
  std::optional<std::string> output_dir;

  static CompilerOptions from_list(SEXP listsxp);
};

SEXP initialize();
SEXP compile(SEXP closure, SEXP options);
SEXP is_compiled(SEXP closure);

using JitFun = SEXP (*)(SEXP env, SEXP cp);
} // namespace rsh

#endif // RSH_COMPILER_HPP
