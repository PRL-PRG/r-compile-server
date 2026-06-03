#? stdlib
`julian.Date` <- function (x, origin = as.Date("1970-01-01"), ...) 
{
    if (length(origin) != 1L) 
        stop("'origin' must be of length one")
    structure(unclass(x) - unclass(origin), origin = origin)
}
