#? stdlib
`memory.limit` <- function (size = NA) 
{
    warning("'memory.limit()' is Windows-specific", call. = FALSE)
    Inf
}
