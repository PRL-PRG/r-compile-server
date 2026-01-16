#pragma once

#include "rsh.hpp"
#include <filesystem>
#include <optional>
#include <string>
#include <string_view>

namespace fs = std::filesystem;

SEXP append_vec(SEXP v1, SEXP v2);
SEXP append_elem(SEXP vec, SEXP element);
SEXP load_symbol_checked(const char *package, std::string_view msg);
std::string vec_element_as_string(SEXP vec, int i, std::string_view msg);
int vec_element_as_int(SEXP vec, int i, std::string_view msg);
bool vec_element_as_bool(SEXP vec, int i, std::string_view msg);

std::optional<std::string> create_temp_file(fs::path &path) noexcept;
std::optional<std::string> create_temp_dir(fs::path &path) noexcept;
std::optional<std::string> write_to_temp(std::string const &str,
                                         fs::path &path) noexcept;
std::optional<std::string> write_to(fs::path const &path,
                                    std::string const &str) noexcept;

std::string escape_for_filename(std::string_view name);
