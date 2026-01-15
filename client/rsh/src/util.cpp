#include "util.hpp"
#include <cassert>
#include <filesystem>
#include <fstream>
#include <system_error>
#include <unistd.h>

SEXP append_vec(SEXP v1, SEXP v2) {
  int n1 = LENGTH(v1);
  int n2 = LENGTH(v2);

  SEXP v = PROTECT(Rf_allocVector(VECSXP, n1 + n2));

  for (int i = 0; i < n1; i++) {
    SET_VECTOR_ELT(v, i, VECTOR_ELT(v1, i));
  }

  for (int i = 0; i < n2; i++) {
    SET_VECTOR_ELT(v, n1 + i, VECTOR_ELT(v2, i));
  }

  SEXP ns1 = Rf_getAttrib(v1, R_NamesSymbol);
  SEXP ns2 = Rf_getAttrib(v2, R_NamesSymbol);

  if (ns1 != R_NilValue || ns2 != R_NilValue) {
    SEXP ns = PROTECT(Rf_allocVector(STRSXP, n1 + n2));

    for (int i = 0; i < n1; i++) {
      if (ns1 != R_NilValue) {
        SET_STRING_ELT(ns, i, STRING_ELT(ns1, i));
      } else {
        SET_STRING_ELT(ns, i, R_BlankString);
      }
    }

    for (int i = 0; i < n2; i++) {
      if (ns2 != R_NilValue) {
        SET_STRING_ELT(ns, n1 + i, STRING_ELT(ns2, i));
      } else {
        SET_STRING_ELT(ns, n1 + i, R_BlankString);
      }
    }

    Rf_setAttrib(v, R_NamesSymbol, ns);
    UNPROTECT(1);
  }

  UNPROTECT(1);
  return v;
}

SEXP append_elem(SEXP vec, SEXP element) {
  int n = LENGTH(vec);
  SEXP v = PROTECT(Rf_allocVector(VECSXP, n + 1));

  for (int i = 0; i < n; i++) {
    SET_VECTOR_ELT(v, i, VECTOR_ELT(vec, i));
  }

  SET_VECTOR_ELT(v, n, element);

  SEXP names = Rf_getAttrib(vec, R_NamesSymbol);
  if (names != R_NilValue) {
    SEXP ns = PROTECT(Rf_allocVector(STRSXP, n + 1));
    for (int i = 0; i < n; i++) {
      SET_STRING_ELT(ns, i, STRING_ELT(names, i));
    }
    SET_STRING_ELT(ns, n, R_BlankString);
    Rf_setAttrib(v, R_NamesSymbol, ns);
    UNPROTECT(1);
  }

  UNPROTECT(1);
  return v;
}

SEXP load_symbol_checked(const char *package, std::string_view name) {
  SEXP p_sxp = Rf_install(package);
  SEXP s_sxp = Rf_install(name.data());
  static SEXP triple_colon = Rf_install(":::");
  SEXP expr = PROTECT(Rf_lang3(triple_colon, p_sxp, s_sxp));
  SEXP v = Rf_eval(expr, R_GlobalEnv);
  UNPROTECT(1);

  if (v == R_UnboundValue) {
    Rf_error("Variable '%s' not found", name.data());
  }

  return v;
}

std::string vec_element_as_string(SEXP vec, int i, std::string_view msg) {
  SEXP el = VECTOR_ELT(vec, i);
  if (TYPEOF(el) != STRSXP || LENGTH(el) != 1) {
    Rf_error("%s", msg.data());
  }
  return CHAR(STRING_ELT(el, 0));
}

int vec_element_as_int(SEXP vec, int i, std::string_view msg) {
  SEXP el = VECTOR_ELT(vec, i);
  if (TYPEOF(el) != INTSXP || LENGTH(el) != 1) {
    Rf_error("%s", msg.data());
  }
  return INTEGER(el)[0];
}

bool vec_element_as_bool(SEXP vec, int i, std::string_view msg) {
  SEXP el = VECTOR_ELT(vec, i);
  if (TYPEOF(el) != LGLSXP || LENGTH(el) != 1) {
    Rf_error("%s", msg.data());
  }
  return LOGICAL(el)[0];
}

std::optional<std::string> create_temp_file(fs::path &path) noexcept {
  std::error_code ec;
  auto template_path = fs::temp_directory_path(ec) / "tmp.XXXXXX";
  if (ec) {
    return ec.message();
  }

  std::string path_buf = template_path.string();

  int fd = mkstemp(path_buf.data());
  if (fd == -1) {
    return std::strerror(errno);
  }

  close(fd);

  path = path_buf;

  return {};
}

std::optional<std::string> create_temp_dir(fs::path &path) noexcept {
  // If path already exists as a directory, use it as-is
  if (!path.empty() && fs::is_directory(path)) {
    return {};
  }

  fs::path name;
  if (auto err = create_temp_file(name)) {
    return err;
  }

  try {
    fs::remove(name);
    fs::create_directories(name);
    path = name;
    return {};
  } catch (const std::exception &e) {
    return e.what();
  }
}

std::optional<std::string> write_to(fs::path const &path,
                                    std::string const &str) noexcept {
  try {
    std::ofstream file{path, std::ios::binary};
    if (!file) {
      return "failed to open:" + path.string();
    }

    file.write(str.data(), str.size());
    if (!file) {
      return "failed to write to: " + path.string();
    }

    return {};
  } catch (const std::exception &e) {
    return e.what();
  } catch (...) {
    return "Unknown exception occurred";
  }
}

std::optional<std::string> write_to_temp(std::string const &str,
                                         fs::path &path) noexcept {
  try {
    auto template_path = fs::temp_directory_path() / "tmp.XXXXXX";
    std::string path_buf = template_path.string();

    int fd = mkstemp(path_buf.data());
    if (fd == -1) {
      return std::strerror(errno);
    }
    close(fd);

    if (auto err = write_to(path_buf, str)) {
      unlink(path_buf.c_str());
      return err;
    }

    path = std::move(path_buf);
    return std::nullopt;
  } catch (const std::exception &e) {
    return e.what();
  } catch (...) {
    return "Unknown exception occurred";
  }
}
