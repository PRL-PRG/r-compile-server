#? stdlib
`[[.POSIXlt` <- function (x, i, drop = TRUE) 
{
    if (!missing(i) && is.character(i)) {
        idx <- match(i, names(x), incomparables = c("", NA_character_))
        if (length(i) == 1L && is.na(idx) && i %in% names(unclass(x[[1L]]))) 
            stop(gettextf("No element named \"%s\" found in x, did you mean x[, \"%1$s\"] instead?", 
                i), domain = NA)
        i <- idx
    }
    .POSIXlt(lapply(unCfillPOSIXlt(x), `[[`, i, drop = drop), 
        attr(x, "tzone"), oldClass(x))
}
