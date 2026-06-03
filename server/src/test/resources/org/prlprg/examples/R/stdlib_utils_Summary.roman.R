#? stdlib
`Summary.roman` <- function (x, ..., na.rm = TRUE) 
{
    if (.Generic %in% c("any", "all")) 
        NextMethod(.Generic)
    else as.roman(NextMethod(.Generic))
}
