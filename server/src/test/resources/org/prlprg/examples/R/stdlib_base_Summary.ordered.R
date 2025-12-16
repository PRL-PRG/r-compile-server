#? stdlib
`Summary.ordered` <- function (..., na.rm) 
{
    ok <- switch(.Generic, max = , min = , range = TRUE, FALSE)
    if (!ok) 
        stop(gettextf("'%s' not defined for ordered factors", 
            .Generic), domain = NA)
    args <- list(...)
    levl <- lapply(args, levels)
    levset <- levl[[1]]
    if (!all(vapply(args, is.ordered, NA)) || !all(vapply(levl, 
        identical, NA, levset))) 
        stop(gettextf("'%s' is only meaningful for ordered factors if all arguments have the same level sets", 
            .Generic))
    codes <- lapply(args, as.integer)
    ind <- do.call(.Generic, c(codes, na.rm = na.rm))
    ordered(levset[ind], levels = levset)
}
