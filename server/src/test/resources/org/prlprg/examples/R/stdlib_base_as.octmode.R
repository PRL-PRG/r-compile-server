#? stdlib
`as.octmode` <- function (x) 
{
    if (inherits(x, "octmode")) 
        return(x)
    if (is.double(x) && all(is.na(x) | x == as.integer(x))) 
        x <- as.integer(x)
    if (is.integer(x)) 
        return(structure(x, class = "octmode"))
    if (is.character(x)) {
        z <- strtoi(x, 8L)
        if (!any(is.na(z) | z < 0)) 
            return(structure(z, class = "octmode"))
    }
    stop("'x' cannot be coerced to class \"octmode\"")
}
