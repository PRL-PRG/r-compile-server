#? stdlib
`cleanupLatex` <- function (x) 
{
    if (!length(x)) 
        return(x)
    latex <- tryCatch(parseLatex(x), error = identity)
    if (inherits(latex, "error")) {
        x
    }
    else {
        deparseLatex(latexToUtf8(latex), dropBraces = TRUE)
    }
}
