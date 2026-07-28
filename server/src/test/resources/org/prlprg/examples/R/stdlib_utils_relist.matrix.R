#? stdlib
`relist.matrix` <- function (flesh, skeleton = attr(flesh, "skeleton")) 
{
    n <- nrow(skeleton)
    m <- ncol(skeleton)
    if (n && m && is.numeric(skeleton[1, 1])) 
        return(matrix(flesh, nrow = n, ncol = m, dimnames = dimnames(skeleton)))
    result <- skeleton
    ind <- 1L
    for (j in seq_len(m)) for (i in seq_len(n)) {
        size <- length(unlist(skeleton[[i, j]]))
        result[[i, j]] <- relist(flesh[seq.int(ind, length.out = size)], 
            skeleton[[i, j]])
        ind <- ind + size
    }
    result
}
