#? stdlib
`[.ts` <- function (x, i, j, drop = TRUE) 
{
    y <- NextMethod("[")
    if (missing(i)) 
        ts(y, start = start(x), frequency = frequency(x))
    else y
}
