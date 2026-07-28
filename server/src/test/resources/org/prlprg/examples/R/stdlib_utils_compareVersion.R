#? stdlib
`compareVersion` <- function (a, b) 
{
    if (is.na(a)) 
        return(-1L)
    if (is.na(b)) 
        return(1L)
    a <- as.integer(strsplit(a, "[.-]")[[1L]])
    b <- as.integer(strsplit(b, "[.-]")[[1L]])
    for (k in seq_along(a)) if (k <= length(b)) {
        if (a[k] > b[k]) 
            return(1)
        else if (a[k] < b[k]) 
            return(-1L)
    }
    else return(1L)
    if (length(b) > length(a)) 
        return(-1L)
    else return(0L)
}

# Examples
compareVersion("1.0", "1.0-1")
compareVersion("7.2-0","7.1-12")

