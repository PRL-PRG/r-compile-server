#? stdlib
`print.summary.warnings` <- function (x, ...) 
{
    n <- length(x)
    cn <- attr(x, "counts")
    if (n == 0) 
        cat("No warnings\n")
    else if (n == 1) 
        print.warnings(x, header = paste(sum(cn), "identical warnings:\n"))
    else print.warnings(x, tags = paste0(format(cn), "x : "), 
        header = gettextf("Summary of (a total of %d) warning messages:\n", 
            sum(cn)))
    invisible(x)
}
