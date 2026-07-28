#? stdlib
`print.tskernel` <- function (x, digits = max(3L, getOption("digits") - 3L), ...) 
{
    m <- x$m
    y <- x[i <- -m:m]
    cat(attr(x, "name"), "\n")
    cat(paste0("coef[", format(i), "] = ", format(y, digits = digits)), 
        sep = "\n")
    invisible(x)
}
