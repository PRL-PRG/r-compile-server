#pragma once

#include "Rinternals.h"

namespace rsh {

SEXP initialize(SEXP);
SEXP compile_fun(SEXP closure, SEXP name, SEXP opt_level);
SEXP compile_fun_bc(SEXP closure, SEXP name);
SEXP call_fun(SEXP call, SEXP op, SEXP args, SEXP env);

using JitFun = SEXP (*)(SEXP env, SEXP cp);
} // namespace rsh
