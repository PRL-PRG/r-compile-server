#? stdlib
`as.vector.data.frame` <- function (x, mode = "any") 
{
    x <- as.list.data.frame(x)
    if (mode %in% c("any", "list")) 
        x
    else as.vector(x, mode = mode)
}
