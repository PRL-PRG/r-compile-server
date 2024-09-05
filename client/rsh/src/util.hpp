#pragma once

#include <Rinternals.h>

SEXP append_vec(SEXP v1, SEXP v2);
SEXP append_elem(SEXP vec, SEXP element);
SEXP load_symbol_checked(const char *package, const char *name);
