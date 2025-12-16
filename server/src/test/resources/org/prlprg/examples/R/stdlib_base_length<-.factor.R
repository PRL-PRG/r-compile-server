#? stdlib
`length<-.factor` <- function (x, value) 
{
    cl <- class(x)
    levs <- levels(x)
    x <- NextMethod()
    structure(x, levels = levs, class = cl)
}
