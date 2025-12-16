#? stdlib
`is.unsorted` <- function (x, na.rm = FALSE, strictly = FALSE) 
{
    if (length(x) <= 1L) 
        return(FALSE)
    if (!na.rm && anyNA(x)) 
        return(NA)
    if (na.rm && any(ii <- is.na(x))) 
        x <- x[!ii]
    .Internal(is.unsorted(x, na.rm, strictly))
}

# Examples
