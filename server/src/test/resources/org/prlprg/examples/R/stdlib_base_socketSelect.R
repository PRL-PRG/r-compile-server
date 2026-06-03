#? stdlib
`socketSelect` <- function (socklist, write = FALSE, timeout = NULL) 
{
    if (is.null(timeout)) 
        timeout <- -1
    else if (timeout < 0) 
        stop("'timeout' must be NULL or a non-negative number")
    if (length(write) < length(socklist)) 
        write <- rep_len(write, length(socklist))
    .Internal(sockSelect(socklist, write, timeout))
}

# Examples


