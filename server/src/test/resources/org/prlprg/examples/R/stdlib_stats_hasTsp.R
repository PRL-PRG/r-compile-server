#? stdlib
`hasTsp` <- function (x) 
{
    if (is.null(attr(x, "tsp"))) 
        attr(x, "tsp") <- c(1, NROW(x), 1)
    x
}
