#? stdlib
`print.aovlist` <- function (x, ...) 
{
    cl <- attr(x, "call")
    if (!is.null(cl)) {
        cat("\nCall:\n")
        dput(cl)
    }
    if (!is.null(attr(x, "weights"))) 
        cat("Note: The results below are on the weighted scale\n")
    nx <- names(x)
    if (nx[1L] == "(Intercept)") {
        mn <- x[[1L]]$coefficients
        if (is.matrix(mn)) {
            cat("\nGrand Means:\n")
            print(format(mn[1, ]), quote = FALSE)
        }
        else cat("\nGrand Mean: ", format(mn[1L]), "\n", sep = "")
        nx <- nx[-1L]
    }
    for (ii in seq_along(nx)) {
        i <- nx[ii]
        cat("\nStratum ", ii, ": ", i, "\n", sep = "")
        xi <- x[[i]]
        print(xi, ...)
    }
    invisible(x)
}
