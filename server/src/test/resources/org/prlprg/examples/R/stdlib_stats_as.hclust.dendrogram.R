#? stdlib
`as.hclust.dendrogram` <- function (x, ...) 
{
    stopifnot(is.list(x), length(x) == 2L)
    n <- nleaves(x)
    stopifnot(n == attr(x, "members"))
    ord <- integer(n)
    labsu <- character(n)
    n.h <- n - 1L
    height <- numeric(n.h)
    myIdx <- matrix(NA_integer_, 2L, n.h)
    merge <- matrix(NA_integer_, 2L, n.h)
    position <- 0L
    stack <- NULL
    leafCount <- 0L
    nodeCount <- 0L
    repeat {
        while (length(x)) {
            if (position == 0L) {
                nodeCount <- nodeCount + 1L
                myNodeIndex <- nodeCount
                if (nodeCount != 1L) {
                  myIdx[, nodeCount] <- c(stack$position, stack$myNodeIndex)
                }
                height[nodeCount] <- attr(x, "height")
            }
            position <- position + 1L
            child <- x[[1L]]
            x <- x[-1L]
            if (is.leaf(child)) {
                leafCount <- leafCount + 1L
                labsu[leafCount] <- attr(child, "label")
                ord[leafCount] <- as.integer(child)
                merge[position, myNodeIndex] <- -ord[leafCount]
            }
            else {
                stopifnot(length(child) == 2L)
                stack <- list(node = x, position = position, 
                  myNodeIndex = myNodeIndex, stack = stack)
                x <- child
                position <- 0L
            }
        }
        if (is.null(stack)) {
            break
        }
        position <- stack$position
        x <- stack$node
        myNodeIndex <- stack$myNodeIndex
        stack <- stack$stack
    }
    iOrd <- sort.list(ord)
    if (!identical(ord[iOrd], seq_len(n))) 
        stop(gettextf("dendrogram entries must be 1,2,..,%d (in any order), to be coercible to \"hclust\"", 
            n), domain = NA)
    ii <- sort.list(height, decreasing = TRUE)[n.h:1L]
    stopifnot(ii[n.h] == 1L)
    k <- seq_len(n.h - 1L)
    merge[t(myIdx[, ii[k]])] <- +k
    if (getOption("as.hclust.dendr", FALSE)) {
        for (k in seq_len(n.h)) {
            cat(sprintf("ii[k=%2d]=%2d ", k, ii[k]))
            cat("-> s=merge[[,ii[k]]]=")
            str(merge[, ii[k]])
        }
    }
    structure(list(merge = t(merge[, ii]), height = height[ii], 
        order = ord, labels = labsu[iOrd], call = match.call(), 
        method = NA_character_, dist.method = NA_character_), 
        class = "hclust")
}
