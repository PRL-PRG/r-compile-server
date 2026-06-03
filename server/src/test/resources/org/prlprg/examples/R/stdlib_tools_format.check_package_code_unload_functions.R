#? stdlib
`format.check_package_code_unload_functions` <- function (x, ...) 
{
    res <- if (!is.null(attr(x, ".Last.lib"))) 
        "NB: .Last.lib will not be used unless it is exported"
    else character()
    if (length(x)) {
        y <- unlist(x, recursive = FALSE)
        has_bad_wrong_args <- "bad_arg_names" %in% unlist(lapply(y, 
            names))
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
            use.names = FALSE), if (has_bad_wrong_args) strwrap(gettextf("Package detach functions should have one argument with name starting with %s.", 
            sQuote("lib")), exdent = 2L), if (length(call)) strwrap(gettextf("Package detach functions should not call %s.", 
            sQuote("library.dynam.unload")), exdent = 2L), gettextf("See section %s in '%s'.", 
            sQuote("Good practice"), "?.Last.lib"))
    }
    res
}
