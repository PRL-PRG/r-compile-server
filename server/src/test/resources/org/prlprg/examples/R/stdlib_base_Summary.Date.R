#? stdlib
`Summary.Date` <- function (..., na.rm) 
{
    ok <- switch(.Generic, max = , min = , range = TRUE, FALSE)
    if (!ok) 
        stop(gettextf("%s not defined for \"Date\" objects", 
            .Generic), domain = NA)
    .Date(NextMethod(.Generic), oldClass(list(...)[[1L]]))
}
