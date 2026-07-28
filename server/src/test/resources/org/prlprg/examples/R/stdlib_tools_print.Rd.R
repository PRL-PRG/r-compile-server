#? stdlib
`print.Rd` <- function (x, deparse = FALSE, ...) 
{
    cat(as.character.Rd(x, deparse = deparse), sep = "")
    invisible(x)
}
