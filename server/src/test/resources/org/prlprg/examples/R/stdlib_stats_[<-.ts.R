#? stdlib
`[<-.ts` <- function (x, i, j, value) 
{
    y <- NextMethod("[<-")
    if (NROW(y) != NROW(x)) 
        stop("only replacement of elements is allowed")
    y
}
