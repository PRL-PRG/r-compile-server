#? stdlib
`aggregate.default` <- function (x, ...) 
{
    if (is.ts(x)) 
        aggregate.ts(as.ts(x), ...)
    else aggregate.data.frame(as.data.frame(x), ...)
}
