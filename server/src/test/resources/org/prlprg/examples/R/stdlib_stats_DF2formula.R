#? stdlib
`DF2formula` <- function (x, env = parent.frame()) 
{
    nm <- lapply(names(x), as.name)
    mkRHS <- function(nms) Reduce(function(x, y) call("+", x, 
        y), nms)
    ff <- if (length(nm) > 1L) 
        call("~", nm[[1L]], mkRHS(nm[-1L]))
    else if (length(nm) == 1L) 
        call("~", nm[[1L]])
    else stop("cannot create a formula from a zero-column data frame")
    class(ff) <- "formula"
    environment(ff) <- env
    ff
}
