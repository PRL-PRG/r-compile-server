#? stdlib
`cophenetic.dendrogram` <- function (x) 
{
    if (is.leaf(x)) {
        if (is.null(label <- attr(x, "label"))) 
            stop("need dendrograms where all leaves have labels")
        return(as.dist(matrix(0, dimnames = list(label, label))))
    }
    children <- vector("list", length(x))
    for (i in seq_along(x)) children[[i]] <- Recall(x[[i]])
    lens <- sapply(children, attr, "Size")
    m <- matrix(attr(x, "height"), sum(lens), sum(lens))
    hi <- cumsum(lens)
    lo <- c(0L, hi[-length(hi)]) + 1L
    for (i in seq_along(x)) m[lo[i]:hi[i], lo[i]:hi[i]] <- as.matrix(children[[i]])
    rownames(m) <- colnames(m) <- unlist(lapply(children, attr, 
        "Labels"))
    as.dist(m)
}
