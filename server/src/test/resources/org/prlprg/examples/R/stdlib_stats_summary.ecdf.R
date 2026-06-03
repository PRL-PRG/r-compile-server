#? stdlib
`summary.ecdf` <- function (object, ...) 
{
    n <- length(eval(expression(x), envir = environment(object)))
    header <- paste("Empirical CDF:\t ", n, "unique values with summary\n")
    structure(summary(knots(object), ...), header = header, class = "summary.ecdf")
}
