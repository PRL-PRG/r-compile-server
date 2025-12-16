#? stdlib
`print.pairwise.htest` <- function (x, digits = max(1L, getOption("digits") - 5L), ...) 
{
    cat("\n\tPairwise comparisons using", x$method, "\n\n")
    cat("data: ", x$data.name, "\n\n")
    pp <- format.pval(x$p.value, digits = digits, na.form = "-")
    attributes(pp) <- attributes(x$p.value)
    print(pp, quote = FALSE, ...)
    cat("\nP value adjustment method:", x$p.adjust.method, "\n")
    invisible(x)
}
