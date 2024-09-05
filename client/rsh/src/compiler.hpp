#pragma one

#include <Rinternals.h>

namespace rsh {

SEXP initialize();
SEXP compile_fun(SEXP closure, SEXP name, SEXP opt_level, SEXP tier);
SEXP call_fun(SEXP call, SEXP op, SEXP args, SEXP env);

using JitFun = SEXP (*)(SEXP env, SEXP cp);
} // namespace rsh
