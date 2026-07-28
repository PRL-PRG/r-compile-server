#? stdlib
`split.Date` <- function (x, f, drop = FALSE, ...) 
{
    lapply(split.default(unclass(x), f, drop = drop, ...), .Date, 
        oldClass(x))
}
