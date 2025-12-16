#? stdlib
`.validity.hclust` <- function (x, merge = x$merge, order = TRUE) 
{
    if (!is.matrix(merge) || ncol(merge) != 2) 
        return("invalid dendrogram")
    if (any(as.integer(merge) != merge)) 
        return("'merge' component in dendrogram must be integer")
    n1 <- nrow(merge)
    n <- n1 + 1L
    if (length(x$height) != n1) 
        return("'height' is of wrong length")
    if (order && length(x$order) != n) 
        return("'order' is of wrong length")
    if (identical(sort(as.integer(merge)), c(-(n:1L), +seq_len(n - 
        2L)))) 
        TRUE
    else "'merge' matrix has invalid contents"
}
