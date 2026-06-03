#? stdlib
`print.logLik` <- function (x, digits = getOption("digits"), ...) 
{
    cat("'log Lik.' ", paste(format(c(x), digits = digits), collapse = ", "), 
        " (df=", format(attr(x, "df")), ")\n", sep = "")
    invisible(x)
}
