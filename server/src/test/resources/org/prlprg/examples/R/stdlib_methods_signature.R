#? stdlib
`signature` <- function (...) 
{
    value <- list(...)
    names <- names(value)
    for (i in seq_along(value)) {
        sigi <- value[[i]]
        if (!is.character(sigi) || length(sigi) != 1L) 
            stop(gettextf("bad class specified for element %d (should be a single character string)", 
                i), domain = NA)
    }
    setNames(as.character(value), names)
}
