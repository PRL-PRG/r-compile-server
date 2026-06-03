#? stdlib
`as.hexmode` <- function (x) 
{
    if (inherits(x, "hexmode")) 
        return(x)
    if (is.double(x) && all(is.na(x) | x == as.integer(x))) 
        x <- as.integer(x)
    if (is.integer(x)) 
        return(structure(x, class = "hexmode"))
    if (is.character(x)) {
        z <- strtoi(x, 16L)
        if (!any(is.na(z) | z < 0)) 
            return(structure(z, class = "hexmode"))
    }
    stop("'x' cannot be coerced to class \"hexmode\"")
}
