#? stdlib
`print.ar` <- function (x, digits = max(3L, getOption("digits") - 3L), ...) 
{
    cat("\nCall:\n", deparse(x$call), "\n\n", sep = "")
    nser <- NCOL(x$var.pred)
    if (nser > 1L) {
        res <- x[c("ar", if (!is.null(x$x.intercept)) "x.intercept", 
            "var.pred")]
        res$ar <- aperm(res$ar, c(2L, 3L, 1L))
        print(res, digits = digits)
    }
    else {
        if (x$order) {
            cat("Coefficients:\n")
            coef <- setNames(round(drop(x$ar), digits = digits), 
                seq_len(x$order))
            print.default(coef, print.gap = 2L)
        }
        if (!is.null(xint <- x$x.intercept) && !is.na(xint)) 
            cat("\nIntercept: ", format(xint, digits = digits), 
                " (", format(x$asy.se.coef$x.mean, digits = digits), 
                ") ", "\n", sep = "")
        cat("\nOrder selected", x$order, " sigma^2 estimated as ", 
            format(x$var.pred, digits = digits))
        cat("\n")
    }
    invisible(x)
}
