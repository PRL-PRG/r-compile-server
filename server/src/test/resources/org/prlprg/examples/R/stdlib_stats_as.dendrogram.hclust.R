#? stdlib
`as.dendrogram.hclust` <- function (object, hang = -1, check = TRUE, ...) 
{
    nolabels <- is.null(object$labels)
    merge <- object$merge
    if (check && !isTRUE(msg <- .validity.hclust(object, merge, 
        order = nolabels))) 
        stop(msg)
    if (nolabels) 
        object$labels <- seq_along(object$order)
    z <- list()
    nMerge <- length(oHgt <- object$height)
    hMax <- oHgt[nMerge]
    for (k in 1L:nMerge) {
        x <- merge[k, ]
        if (any(neg <- x < 0)) 
            h0 <- if (hang < 0) 
                0
            else max(0, oHgt[k] - hang * hMax)
        if (all(neg)) {
            zk <- as.list(-x)
            attr(zk, "members") <- 2L
            attr(zk, "midpoint") <- 0.5
            objlabels <- object$labels[-x]
            attr(zk[[1L]], "label") <- objlabels[1L]
            attr(zk[[2L]], "label") <- objlabels[2L]
            attr(zk[[1L]], "members") <- attr(zk[[2L]], "members") <- 1L
            attr(zk[[1L]], "height") <- attr(zk[[2L]], "height") <- h0
            attr(zk[[1L]], "leaf") <- attr(zk[[2L]], "leaf") <- TRUE
        }
        else if (any(neg)) {
            X <- as.character(x)
            isL <- x[1L] < 0
            zk <- if (isL) 
                list(-x[1L], z[[X[2L]]])
            else list(z[[X[1L]]], -x[2L])
            attr(zk, "members") <- attr(z[[X[1 + isL]]], "members") + 
                1L
            attr(zk, "midpoint") <- (.memberDend(zk[[1L]]) + 
                attr(z[[X[1 + isL]]], "midpoint"))/2
            attr(zk[[2 - isL]], "members") <- 1L
            attr(zk[[2 - isL]], "height") <- h0
            attr(zk[[2 - isL]], "label") <- object$labels[-x[2 - 
                isL]]
            attr(zk[[2 - isL]], "leaf") <- TRUE
            z[[X[1 + isL]]] <- NULL
        }
        else {
            x <- as.character(x)
            zk <- list(z[[x[1L]]], z[[x[2L]]])
            attr(zk, "members") <- attr(z[[x[1L]]], "members") + 
                attr(z[[x[2L]]], "members")
            attr(zk, "midpoint") <- (attr(z[[x[1L]]], "members") + 
                attr(z[[x[1L]]], "midpoint") + attr(z[[x[2L]]], 
                "midpoint"))/2
            z[[x[1L]]] <- z[[x[2L]]] <- NULL
        }
        attr(zk, "height") <- oHgt[k]
        z[[as.character(k)]] <- zk
    }
    structure(z[[as.character(k)]], class = "dendrogram")
}
