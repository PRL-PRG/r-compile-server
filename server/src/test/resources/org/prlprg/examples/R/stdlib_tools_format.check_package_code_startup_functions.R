#? stdlib
`format.check_package_code_startup_functions` <- function (x, ...) 
{
    res <- if (!is.null(attr(x, ".First.lib"))) 
        "NB: .First.lib is obsolete and will not be used in R >= 3.0.0"
    else character()
    if (length(x)) {
        y <- unlist(x, recursive = FALSE)
        has_bad_wrong_args <- "bad_arg_names" %in% unlist(lapply(y, 
            names))
        calls <- unique(unlist(lapply(y, function(e) e[["bad_calls"]][["names"]])))
        has_bad_calls_for_load <- any(calls %in% .bad_call_names_in_startup_functions$load)
        has_bad_calls_for_output <- any(calls %in% .bad_call_names_in_startup_functions$output)
        has_unsafe_calls <- any(calls %in% .bad_call_names_in_startup_functions$unsafe)
        .fmt_entries_for_file <- function(e, f) {
            c(gettextf("File %s:", sQuote(f)), unlist(Map(.fmt_entries_for_function, 
                e, names(e))), "")
        }
        .fmt_entries_for_function <- function(e, f) {
            c(if (length(bad <- e[["bad_arg_names"]])) {
                gettextf("  %s has wrong argument list %s", f, 
                  sQuote(paste(bad, collapse = ", ")))
            }, if (length(bad <- e[["bad_calls"]])) {
                c(gettextf("  %s calls:", f), paste0("    ", 
                  unlist(lapply(bad[["calls"]], function(e) paste(deparse(e), 
                    collapse = "")))))
            })
        }
        res <- c(res, unlist(Map(.fmt_entries_for_file, x, names(x)), 
            use.names = FALSE), if (has_bad_wrong_args) strwrap(gettextf("Package startup functions should have two arguments with names starting with %s and %s, respectively.", 
            sQuote("lib"), sQuote("pkg")), exdent = 2L), if (has_bad_calls_for_load) strwrap(gettextf("Package startup functions should not change the search path."), 
            exdent = 2L), if (has_bad_calls_for_output) strwrap(gettextf("Package startup functions should use %s to generate messages.", 
            sQuote("packageStartupMessage")), exdent = 2L), if (has_unsafe_calls) strwrap(gettextf("Package startup functions should not call %s.", 
            sQuote("installed.packages")), exdent = 2L), gettextf("See section %s in '%s'.", 
            sQuote("Good practice"), "?.onAttach"))
    }
    res
}
