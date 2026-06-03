#? stdlib
`format.checkS3methods` <- function (x, ...) 
{
    .fmt_args <- function(s) paste0("function(", paste(s, collapse = ", "), 
        ")")
    .fmt_bad_one <- function(e) {
        paste(c(paste0(names(e)[1L], ":"), strwrap(.fmt_args(e[[1L]]), 
            indent = 2L, exdent = 11L), paste0(names(e)[2L], 
            ":"), strwrap(.fmt_args(e[[2L]]), indent = 2L, exdent = 11L)), 
            collapse = "\n")
    }
    .fmt_bad_all <- function(x) {
        if (!length(x)) 
            return(character())
        paste(vapply(x, .fmt_bad_one, ""), collapse = "\n\n")
    }
    show_possible_issues <- config_val_to_logical(Sys.getenv("_R_CHECK_S3_METHODS_SHOW_POSSIBLE_ISSUES_", 
        "FALSE"))
    s <- .fmt_bad_all(x)
    if (show_possible_issues) 
        s <- c(s, if (length(bad <- c(attr(x, "bad_methods_not_registered_with_generic_in_code"), 
            attr(x, "bad_methods_not_registered_with_generic_not_in_code")))) paste0("Mismatches for apparent methods not registered:\n", 
            .fmt_bad_all(bad)), if (length(bad <- attr(x, "bad_methods_registered_for_non_generic"))) paste0("Mismatches for methods registered for non-generic:\n", 
            .fmt_bad_all(bad)), if (length(met <- attr(x, "methods_not_registered_with_exported_generic"))) paste0("Apparent methods for exported generics not registered:\n", 
            paste(strwrap(paste(sort(met), collapse = " "), exdent = 2L, 
                indent = 2L), collapse = "\n")))
    if (length(s)) 
        paste(s, collapse = "\n\n")
    else character()
}
