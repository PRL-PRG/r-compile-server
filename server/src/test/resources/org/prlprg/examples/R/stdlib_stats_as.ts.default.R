#? stdlib
`as.ts.default` <- function (x, ...) 
{
    if (is.ts(x)) 
        x
    else if (!is.null(xtsp <- tsp(x))) 
        ts(x, xtsp[1L], xtsp[2L], xtsp[3L])
    else ts(x)
}
