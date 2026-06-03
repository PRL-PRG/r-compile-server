#? stdlib
`format.check_bogus_return` <- function (x, ...) 
{
    c(character(), if (length(x$bad_closures)) {
        msg <- ngettext(length(x$bad_closures), "Possibly missing '()' after 'return' in the following function:", 
            "Possibly missing '()' after 'return' in the following functions:")
        c(strwrap(msg), .pretty_format(x$bad_closures))
    })
}
