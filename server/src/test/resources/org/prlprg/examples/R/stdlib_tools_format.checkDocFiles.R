#? stdlib
`format.checkDocFiles` <- function (x, ...) 
{
    .fmt <- function(nm) {
        c(character(), if (length(arg_names_in_usage_missing_in_arg_list <- x[[nm]][["missing"]])) {
            c(gettextf("Undocumented arguments in Rd file '%s'", 
                nm), .pretty_format(unique(arg_names_in_usage_missing_in_arg_list)))
        }, if (length(duplicated_args_in_arg_list <- x[[nm]][["duplicated"]])) {
            c(gettextf("Duplicated \\argument entries in Rd file '%s':", 
                nm), .pretty_format(duplicated_args_in_arg_list))
        }, if (length(arg_names_in_arg_list_missing_in_usage <- x[[nm]][["overdoc"]])) {
            c(gettextf("Documented arguments not in \\usage in Rd file '%s':", 
                nm), .pretty_format(unique(arg_names_in_arg_list_missing_in_usage)))
        }, if (length(functions_not_in_aliases <- x[[nm]][["unaliased"]])) {
            c(gettextf("Objects in \\usage without \\alias in Rd file '%s':", 
                nm), .pretty_format(unique(functions_not_in_aliases)))
        }, if (length(assignments <- x[[nm]][["assignments"]])) {
            c(gettextf("Assignments in \\usage in Rd file '%s':", 
                nm), sprintf("  %s", unlist(lapply(assignments, 
                format))))
        }, "")
    }
    y <- as.character(unlist(lapply(names(x), .fmt)))
    if (length(bad_lines <- attr(x, "bad_lines"))) 
        y <- c(y, unlist(lapply(names(bad_lines), function(nm) {
            c(gettextf("Bad \\usage lines found in Rd file '%s':", 
                nm), paste0("  ", bad_lines[[nm]]))
        })), "")
    if (length(y) && !length(bad_lines) && (Sys.getenv("__R_CHECK_DOC_FILES_NOTE_IF_ALL_SPECIAL__", 
        "FALSE") == "TRUE") && isTRUE(attr(x, "all_special"))) 
        y <- c(y, "All issues in internal Rd files checked specially.")
    y
}
