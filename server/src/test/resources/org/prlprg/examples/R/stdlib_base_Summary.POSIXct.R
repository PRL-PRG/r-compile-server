#? stdlib
`Summary.POSIXct` <- function (..., na.rm, finite = FALSE) 
{
    ok <- switch(.Generic, max = , min = , range = TRUE, FALSE)
    if (!ok) 
        stop(gettextf("'%s' not defined for \"POSIXt\" objects", 
            .Generic), domain = NA)
    args <- list(...)
    tz <- do.call(.check_tzones, args)
    .POSIXct(NextMethod(.Generic), tz = tz, cl = oldClass(args[[1L]]))
}
