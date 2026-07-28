#? stdlib
`julian.POSIXt` <- function (x, origin = as.POSIXct("1970-01-01", tz = "GMT"), ...) 
{
    origin <- as.POSIXct(origin)
    if (length(origin) != 1L) 
        stop("'origin' must be of length one")
    res <- difftime(as.POSIXct(x), origin, units = "days")
    structure(res, origin = origin)
}
