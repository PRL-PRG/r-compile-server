#? stdlib
`Summary.numeric_version` <- function (..., na.rm) 
{
    ok <- switch(.Generic, max = , min = , range = TRUE, FALSE)
    if (!ok) 
        stop(gettextf("%s not defined for \"numeric_version\" objects", 
            .Generic), domain = NA)
    x <- do.call(c, lapply(list(...), as.numeric_version))
    v <- .encode_numeric_version(x)
    if (!na.rm && length(pos <- which(is.na(v)))) {
        y <- x[pos[1L]]
        if (as.character(.Generic) == "range") 
            c(y, y)
        else y
    }
    else switch(.Generic, max = x[which(v == max(v))[1L]], min = x[which(v == 
        min(v))[1L]], range = x[c(which(v == min(v))[1L], which(v == 
        max(v))[1L])])
}
