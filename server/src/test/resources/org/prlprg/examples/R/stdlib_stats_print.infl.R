#? stdlib
`print.infl` <- function (x, digits = max(3L, getOption("digits") - 4L), ...) 
{
    cat("Influence measures of\n\t", deparse(x$call), ":\n\n")
    is.star <- apply(x$is.inf, 1L, any, na.rm = TRUE)
    print(data.frame(x$infmat, inf = ifelse(is.star, "*", " ")), 
        digits = digits, ...)
    invisible(x)
}
