#? stdlib
`sort_by.default` <- function (x, y, ...) 
{
    x[order(y, ...)]
}
