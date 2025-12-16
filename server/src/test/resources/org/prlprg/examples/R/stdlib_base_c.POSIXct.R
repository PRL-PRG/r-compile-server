#? stdlib
`c.POSIXct` <- function (..., recursive = FALSE) 
{
    x <- lapply(list(...), function(e) unclass(as.POSIXct(e)))
    tzones <- lapply(x, attr, "tzone")
    tz <- if (length(unique(tzones)) == 1L) 
        tzones[[1L]]
    else NULL
    .POSIXct(c(unlist(x)), tz)
}
