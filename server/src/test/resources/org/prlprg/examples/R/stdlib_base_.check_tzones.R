#? stdlib
`.check_tzones` <- function (...) 
{
    tzs <- unique(sapply(list(...), function(x) {
        y <- attr(x, "tzone")
        if (is.null(y)) 
            ""
        else y[1L]
    }))
    tzs <- tzs[nzchar(tzs)]
    if (length(tzs) > 1L) 
        warning("'tzone' attributes are inconsistent")
    if (length(tzs)) 
        tzs[1L]
    else NULL
}
