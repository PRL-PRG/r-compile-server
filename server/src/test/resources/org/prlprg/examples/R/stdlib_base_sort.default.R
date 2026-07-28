#? stdlib
`sort.default` <- function (x, decreasing = FALSE, na.last = NA, ...) 
{
    if (is.object(x)) 
        x[order(x, na.last = na.last, decreasing = decreasing)]
    else sort.int(x, na.last = na.last, decreasing = decreasing, 
        ...)
}
