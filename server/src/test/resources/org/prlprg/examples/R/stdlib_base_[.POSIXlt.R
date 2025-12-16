#? stdlib
`[.POSIXlt` <- function (x, i, j, drop = TRUE) 
{
    if ((mj <- missing(j)) & (mi <- missing(i))) 
        return(x)
    if (!mj) 
        if (!is.character(j) || (length(j) != 1L)) 
            stop("component subscript must be a character string")
    if (mi) 
        unCfillPOSIXlt(x)[[j]]
    else {
        if (is.character(i)) 
            i <- match(i, names(x), incomparables = c("", NA_character_))
        if (mj) 
            `attr<-`(.POSIXlt(lapply(unCfillPOSIXlt(x), `[`, 
                i, drop = drop), attr(x, "tzone"), oldClass(x)), 
                "balanced", if (isTRUE(attr(x, "balanced"))) TRUE else NA)
        else unCfillPOSIXlt(x)[[j]][i]
    }
}
