#? stdlib
`[.getAnywhere` <- function (x, i) 
{
    if (!is.numeric(i)) 
        stop("only numeric indices can be used")
    if (length(i) == 1L) 
        x$objs[[i]]
    else x$objs[i]
}
