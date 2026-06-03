#? stdlib
`t.ts` <- function (x) 
{
    cl <- oldClass(x)
    other <- !(cl %in% c("ts", "mts"))
    class(x) <- if (any(other)) 
        cl[other]
    attr(x, "tsp") <- NULL
    t(x)
}
