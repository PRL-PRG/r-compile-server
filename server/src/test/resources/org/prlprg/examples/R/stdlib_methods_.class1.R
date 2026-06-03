#? stdlib
`.class1` <- function (x) 
{
    cl <- class(x)
    if (length(cl) > 1L) 
        cl[[1L]]
    else cl
}
