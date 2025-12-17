#? stdlib
`personList` <- function (...) 
{
    z <- list(...)
    if (!all(vapply(z, inherits, NA, "person"))) 
        stop(gettextf("all arguments must be of class %s", dQuote("person")), 
            domain = NA)
    do.call(c, z)
}
