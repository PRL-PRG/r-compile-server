#? stdlib
`formula.character` <- function (x, env = parent.frame(), ...) 
{
    ff <- if (length(x) > 1L) {
        .Deprecated(msg = "Using formula(x) is deprecated when x is a character vector of length > 1.\n  Consider formula(paste(x, collapse = \" \")) instead.")
        str2expression(x)[[1L]]
    }
    else {
        str2lang(x)
    }
    if (!is.call(ff)) 
        stop(gettextf("invalid formula %s: not a call", deparse2(x)), 
            domain = NA)
    if (is.symbol(c. <- ff[[1L]]) && c. == quote(`~`)) {
    }
    else {
        if (is.symbol(c.)) {
            ff <- if (c. == quote(`=`)) {
                .Deprecated(msg = gettextf("invalid formula %s: assignment is deprecated", 
                  deparse2(x)))
                ff[[3L]]
            }
            else if (c. == quote(`(`) || c. == quote(`{`)) {
                .Deprecated(msg = gettextf("invalid formula %s: extraneous call to `%s` is deprecated", 
                  deparse2(x), as.character(c.)))
                eval(ff)
            }
        }
        else stop(gettextf("invalid formula %s", deparse2(x)), 
            domain = NA)
    }
    class(ff) <- "formula"
    environment(ff) <- env
    ff
}
