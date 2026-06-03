#? stdlib
`print.srcref` <- function (x, useSource = TRUE, ...) 
{
    cat(as.character(x, useSource = useSource), sep = "\n")
    invisible(x)
}
