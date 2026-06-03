#? stdlib
`t.data.frame` <- function (x) 
{
    x <- as.matrix(x)
    NextMethod("t")
}
