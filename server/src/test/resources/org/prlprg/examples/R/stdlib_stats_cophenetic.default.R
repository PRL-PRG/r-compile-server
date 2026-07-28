#? stdlib
`cophenetic.default` <- function (x) 
{
    x <- as.hclust(x)
    nobs <- length(x$order)
    ilist <- vector("list", length = nobs)
    out <- matrix(0, nrow = nobs, ncol = nobs)
    for (i in 1:(nobs - 1)) {
        inds <- x$merge[i, ]
        ids1 <- if (inds[1L] < 0L) 
            -inds[1L]
        else ilist[[inds[1L]]]
        ids2 <- if (inds[2L] < 0L) 
            -inds[2L]
        else ilist[[inds[2L]]]
        ilist[[i]] <- c(ids1, ids2)
        out[cbind(rep.int(ids1, rep.int(length(ids2), length(ids1))), 
            rep.int(ids2, length(ids1)))] <- x$height[i]
    }
    rownames(out) <- x$labels
    as.dist(out + t(out))
}
