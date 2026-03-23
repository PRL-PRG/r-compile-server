.rcp_banner <- function() {
  info <- .Call("C_rcp_build_info")
  ver <- utils::packageVersion("rcp")
  flags <- c(
    if (info$compile_promises) "promises",
    if (nzchar(Sys.getenv("RCP_DUMP_DIR"))) paste0("dump:", Sys.getenv("RCP_DUMP_DIR")),
    if (nzchar(Sys.getenv("RCP_GDB_JIT"))) "gdb",
    if (nzchar(Sys.getenv("RCP_PERF_JIT"))) "perf"
  )
  flag_str <- if (length(flags)) paste0(" [", paste(flags, collapse = ", "), "]") else ""
  packageStartupMessage(sprintf("rcp %s (%s)%s", ver, info$git_commit, flag_str))
}

.onLoad <- function(libname, pkgname) {
  .Call("rcp_init");
}

.onAttach <- function(libname, pkgname) {
  .rcp_banner()
}

#' Compile a function
#'
#' This function compiles another function with optional settings.
#' @param f The function to compile.
#' @param options Optional settings for compilation.
#' @return A compiled function.
#' @export
rcp_cmpfun <- function(f, options = NULL) {
  .Call("C_rcp_cmpfun", f, options, PACKAGE = "rcp")
}


#' Check if the closure is natively compiled
#'
#' @param f closure to be checked
#' @return TRUE if the closure is compiled, FALSE otherwise
#' @export
rcp_is_compiled <- function(f) {
  .Call(C_rcp_is_compiled, f)
}

#' Activate the RCP JIT
#'
#' @export
rcp_jit_enable <- function() {
  .Call(C_rcp_jit_enable)
}

#' Deactivate the RCP JIT
#'
#' @export
rcp_jit_disable <- function() {
  .Call(C_rcp_jit_disable)
}

#' Compile all functions in a package to native code
#'
#' This function compiles all functions in a specified package namespace
#' in-place using RCP JIT compilation.
#'
#' @param package Character string naming the package to compile
#' @return A list with counts of successfully compiled and failed functions
#' @export
rcp_cmppkg <- function(package) {
  invisible(.Call(C_rcp_cmppkg, package))
}

#' Get profiling data from RCP
#'
#' @export
rcp_get_profiling <- function() {
  .Call(C_rcp_get_profiling)
}

.rcp_resolve_func_name <- function(expr, env) {
  if (is.symbol(expr)) {
    symbol_name <- as.character(expr)
    if (exists(symbol_name, envir = env, inherits = TRUE)) {
      value <- tryCatch(eval(expr, envir = env), error = function(e) NULL)
      if (is.character(value) && length(value) == 1L && !is.na(value)) {
        return(value)
      }
    }
    return(symbol_name)
  }

  value <- eval(expr, envir = env)
  if (is.character(value) && length(value) == 1L && !is.na(value)) {
    return(value)
  }
  if (is.symbol(value)) {
    return(as.character(value))
  }

  stop("Expected a function name as a string or symbol", call. = FALSE)
}

#' Reset accumulated type trace data
#'
#' Clears all recorded type observations without deallocating the
#' underlying storage, so subsequent calls reuse the existing capacity.
#'
#' @export
rcp_reset_types <- function() {
  invisible(.Call(C_rcp_reset_types))
}

#' Get recorded type information from entry/exit hooks
#'
#' Returns an environment where each key is a function name and each value
#' is a list of call records. Each record has \code{arguments} (integer vector
#' of SEXPTYPEs) and \code{ret} (integer SEXPTYPE of the return value).
#'
#' @param func_name Optional function name as a character string or symbol.
#'   When provided, returns only that function's records.
#'
#' @export
rcp_get_types <- function(func_name) {
  all_types <- .Call(C_rcp_get_types)
  if (missing(func_name)) {
    return(all_types)
  }

  func_name_expr <- substitute(func_name)
  resolved_name <- .rcp_resolve_func_name(func_name_expr, parent.frame())
  all_types[[resolved_name]]
}

#' Get a data frame of traced types for a given function
#'
#' Returns a data frame with one row per traced call. Columns are one per
#' formal argument of the function (named after those arguments), zero or
#' more columns for expanded \code{...} arguments (if present), a
#' \code{dots_count} column giving the number of \code{...} arguments for
#' that call, and a \code{ret} column for the return type. Types are shown
#' as character strings.
#'
#' @param func_name Function name to query, as a character string or symbol.
#' @return A data.frame, or NULL if no type data is available.
#' @export
rcp_get_types_df <- function(func_name) {
  func_name_expr <- substitute(func_name)
  resolved_name <- .rcp_resolve_func_name(func_name_expr, parent.frame())
  .Call(C_rcp_get_types_df, resolved_name)
}
