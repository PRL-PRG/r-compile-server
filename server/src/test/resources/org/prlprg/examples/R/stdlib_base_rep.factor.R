#? stdlib
`rep.factor` <- function (x, ...) 
{
    y <- NextMethod()
    structure(y, class = class(x), levels = levels(x))
}
