#pragma once

#include "rsh.hpp"
#include <string>
#include <string_view>

SEXP append_vec(SEXP v1, SEXP v2);
SEXP append_elem(SEXP vec, SEXP element);
SEXP load_symbol_checked(const char *package, std::string_view msg);
std::string vec_element_as_string(SEXP vec, int i, std::string_view msg);
int vec_element_as_int(SEXP vec, int i, std::string_view msg);
bool vec_element_as_bool(SEXP vec, int i, std::string_view msg);
