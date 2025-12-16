#? stdlib
`Summary.POSIXlt` <- function (..., na.rm, finite = FALSE) 
{
    ok <- switch(.Generic, max = , min = , range = TRUE, FALSE)
    if (!ok) 
        stop(gettextf("'%s' not defined for \"POSIXt\" objects", 
            .Generic), domain = NA)
    args <- list(...)
    tz <- do.call(.check_tzones, args)
    args <- lapply(args, as.POSIXct)
    val <- switch(.Generic, max = , min = do.call(.Generic, c(args, 
        na.rm = na.rm)), range = do.call(range, c(args, na.rm = na.rm, 
        finite = finite)))
    as.POSIXlt(.POSIXct(val, tz))
}
