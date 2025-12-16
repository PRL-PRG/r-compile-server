#? stdlib
`as.matrix.default` <- function (x, ...) 
{
    if (is.matrix(x)) 
        x
    else array(x, c(length(x), 1L), if (!is.null(names(x))) 
        list(names(x), NULL)
    else NULL)
}
