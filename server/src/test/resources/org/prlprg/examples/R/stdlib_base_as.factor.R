#? stdlib
`as.factor` <- function (x) 
{
    if (is.factor(x)) 
        x
    else if (!is.object(x) && is.integer(x)) {
        levels <- sort.int(unique.default(x))
        f <- match(x, levels)
        levels(f) <- as.character(levels)
        if (!is.null(nx <- names(x))) 
            names(f) <- nx
        class(f) <- "factor"
        f
    }
    else factor(x)
}
