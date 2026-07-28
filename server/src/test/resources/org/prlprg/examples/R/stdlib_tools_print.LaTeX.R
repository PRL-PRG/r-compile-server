#? stdlib
`print.LaTeX` <- function (x, ...) 
{
    cat(deparseLatex(x), "\n", sep = "")
    invisible(x)
}
