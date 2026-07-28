#? stdlib
`print.summary.table` <- function (x, digits = max(1L, getOption("digits") - 3L), ...) 
{
    if (!inherits(x, "summary.table")) 
        stop(gettextf("'x' must inherit from class %s", dQuote("summary.table")), 
            domain = NA)
    if (!is.null(x$call)) {
        cat("Call: ")
        print(x$call)
    }
    cat("Number of cases in table:", x$n.cases, "\n")
    cat("Number of factors:", x$n.vars, "\n")
    if (x$n.vars > 1) {
        cat("Test for independence of all factors:\n")
        ch <- x$statistic
        cat("\tChisq = ", format(round(ch, max(0, digits - log10(ch)))), 
            ", df = ", x$parameter, ", p-value = ", format.pval(x$p.value, 
                digits, eps = 0), "\n", sep = "")
        if (!x$approx.ok) 
            cat("\tChi-squared approximation may be incorrect\n")
    }
    invisible(x)
}
