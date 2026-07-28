#? stdlib
`[<-.factor` <- function (x, ..., value) 
{
    lx <- levels(x)
    cx <- oldClass(x)
    if (is.factor(value)) 
        value <- levels(value)[value]
    m <- match(value, lx)
    if (any(is.na(m) & !is.na(value))) 
        warning("invalid factor level, NA generated")
    class(x) <- NULL
    x[...] <- m
    attr(x, "levels") <- lx
    class(x) <- cx
    x
}
