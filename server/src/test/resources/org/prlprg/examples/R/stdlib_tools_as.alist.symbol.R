#? stdlib
`as.alist.symbol` <- function (x) 
{
    as.alist.call(call(as.character(x)))
}
