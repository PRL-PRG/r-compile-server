#? stdlib
`as.list.factor` <- function (x, ...) 
{
    res <- vector("list", length(x))
    for (i in seq_along(x)) res[[i]] <- x[[i]]
    if (is.null(names(x))) 
        res
    else `names<-`(res, names(x))
}
