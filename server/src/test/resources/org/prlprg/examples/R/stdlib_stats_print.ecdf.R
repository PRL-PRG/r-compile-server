#? stdlib
`print.ecdf` <- function (x, digits = getOption("digits") - 2L, ...) 
{
    numform <- function(x) paste(formatC(x, digits = digits), 
        collapse = ", ")
    cat("Empirical CDF \nCall: ")
    print(attr(x, "call"), ...)
    n <- length(xx <- environment(x)$x)
    i1 <- 1L:min(3L, n)
    i2 <- if (n >= 4L) 
        max(4L, n - 1L):n
    else integer()
    cat(" x[1:", n, "] = ", numform(xx[i1]), if (n > 3L) 
        ", ", if (n > 5L) 
        " ..., ", numform(xx[i2]), "\n", sep = "")
    invisible(x)
}
