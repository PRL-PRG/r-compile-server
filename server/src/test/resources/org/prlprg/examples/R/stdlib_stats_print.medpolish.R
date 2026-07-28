#? stdlib
`print.medpolish` <- function (x, digits = getOption("digits"), ...) 
{
    cat("\nMedian Polish Results (Dataset: \"", x$name, "\")\n", 
        sep = "")
    cat("\nOverall: ", x$overall, "\n\nRow Effects:\n", sep = "")
    print(x$row, digits = digits, ...)
    cat("\nColumn Effects:\n")
    print(x$col, digits = digits, ...)
    cat("\nResiduals:\n")
    print(x$residuals, digits = max(2L, digits - 2L), ...)
    cat("\n")
    invisible(x)
}
