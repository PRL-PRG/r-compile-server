#? stdlib
`print.difftime` <- function (x, digits = getOption("digits"), ...) 
{
    if (!length(x)) 
        cat(class(x)[1L], "of length 0\n")
    else if (is.array(x) || length(x) > 1L) {
        cat("Time differences in ", attr(x, "units"), "\n", sep = "")
        y <- unclass(x)
        attr(y, "units") <- NULL
        print(y, digits = digits, ...)
    }
    else cat("Time difference of ", format(unclass(x), digits = digits), 
        " ", attr(x, "units"), "\n", sep = "")
    invisible(x)
}
