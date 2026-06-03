#? stdlib
`print.summary.manova` <- function (x, digits = getOption("digits"), ...) 
{
    if (length(stats <- x$stats)) {
        print.anova(stats)
    }
    else {
        cat("No error degrees of freedom\n\n")
        print(data.frame(Df = x$Df, row.names = x$row.names))
    }
    invisible(x)
}
