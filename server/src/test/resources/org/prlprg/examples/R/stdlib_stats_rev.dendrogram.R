#? stdlib
`rev.dendrogram` <- function (x) 
{
    if (is.leaf(x)) 
        return(x)
    k <- length(x)
    if (k < 1) 
        stop("dendrogram non-leaf node with non-positive #{branches}")
    r <- x
    for (j in 1L:k) r[[j]] <- rev(x[[k + 1 - j]])
    midcache.dendrogram(r)
}
