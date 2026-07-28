#? stdlib
`print.stepfun` <- function (x, digits = getOption("digits") - 2, ...) 
{
    numform <- function(x) paste(formatC(x, digits = digits), 
        collapse = ", ")
    i1 <- function(n) 1L:min(3L, n)
    i2 <- function(n) if (n >= 4L) 
        max(4L, n - 1L):n
    else integer()
    cat("Step function\nCall: ")
    print(attr(x, "call"), ...)
    env <- environment(x)
    n <- length(xx <- eval(expression(x), envir = env))
    cat(" x[1:", n, "] = ", numform(xx[i1(n)]), if (n > 3L) 
        ", ", if (n > 5L) 
        " ..., ", numform(xx[i2(n)]), "\n", sep = "")
    y <- eval(expression(c(yleft, y)), envir = env)
    cat(n + 1L, " plateau levels = ", numform(y[i1(n + 1L)]), 
        if (n + 1L > 3L) 
            ", ", if (n + 1L > 5L) 
            " ..., ", numform(y[i2(n + 1L)]), "\n", sep = "")
    invisible(x)
}
