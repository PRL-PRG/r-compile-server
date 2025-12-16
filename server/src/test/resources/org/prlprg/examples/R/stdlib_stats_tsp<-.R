#? stdlib
`tsp<-` <- function (x, value) 
{
    cl <- oldClass(x)
    attr(x, "tsp") <- value
    if (is.null(value)) {
        if (inherits(x, "ts")) 
            cl <- cl["ts" != cl]
        if (inherits(x, "mts")) 
            cl <- cl["mts" != cl]
        class(x) <- cl
    }
    x
}
