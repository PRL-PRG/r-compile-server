#? stdlib
`print.isoreg` <- function (x, digits = getOption("digits"), ...) 
{
    cat("Isotonic regression from ", deparse(x$call), ",\n", 
        sep = "")
    cat("  with", length(x$iKnots), "knots / breaks at obs.nr.", 
        x$iKnots, ";\n")
    if (x$isOrd) 
        cat("  initially ordered 'x'\n")
    else {
        cat("  (x,y) ordering:")
        str(x$ord)
    }
    cat("  and further components ")
    str(x[1L:4], digits.d = 3L + max(0L, digits - 7L))
    invisible(x)
}
