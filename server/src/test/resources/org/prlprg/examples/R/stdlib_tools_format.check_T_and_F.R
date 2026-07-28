#? stdlib
`format.check_T_and_F` <- function (x, ...) 
{
    c(character(), if (length(x$bad_closures)) {
        msg <- ngettext(length(x$bad_closures), "Found possibly global 'T' or 'F' in the following function:", 
            "Found possibly global 'T' or 'F' in the following functions:")
        c(strwrap(msg), .pretty_format(x$bad_closures))
    }, if (length(x$bad_examples)) {
        msg <- ngettext(length(x$bad_examples), "Found possibly global 'T' or 'F' in the examples of the following Rd file:", 
            "Found possibly global 'T' or 'F' in the examples of the following Rd files:")
        c(strwrap(msg), paste0("  ", x$bad_examples))
    })
}
