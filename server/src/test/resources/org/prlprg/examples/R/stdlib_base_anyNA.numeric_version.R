#? stdlib
`anyNA.numeric_version` <- function (x, recursive = FALSE) 
{
    any(lengths(unclass(x)) == 0L)
}
