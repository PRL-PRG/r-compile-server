#? stdlib
`summary.stepfun` <- function (object, ...) 
{
    n <- length(eval(expression(x), envir = environment(object)))
    if (!is.integer(n) || n < 1L) 
        stop("not a valid step function")
    cat("Step function with continuity 'f'=", format(eval(expression(f), 
        envir = environment(object))), ", ", n, if (n <= 6L) 
        "knots at\n"
    else "knots with summary\n")
    summ <- if (n > 6L) 
        summary
    else function(x) x
    print(summ(knots(object)))
    cat(if (n > 6L) 
        "\n"
    else "  ", "and\t", n + 1L, " plateau levels (y) ", if (n <= 
        6L) 
        "at\n"
    else "with summary\n", sep = "")
    print(summ(eval(expression(c(yleft, y)), envir = environment(object))))
    invisible()
}
