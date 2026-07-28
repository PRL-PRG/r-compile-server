#? stdlib
`plotNodeLimit` <- function (x1, x2, subtree, center) 
{
    inner <- !is.leaf(subtree) && x1 != x2
    limit <- c(x1, if (inner) {
        K <- length(subtree)
        mTop <- .memberDend(subtree)
        limit <- integer(K)
        xx1 <- x1
        for (k in 1L:K) {
            m <- .memberDend(subtree[[k]])
            xx1 <- xx1 + (if (center) (x2 - x1) * m/mTop else m)
            limit[k] <- xx1
        }
        limit
    } else x2)
    mid <- attr(subtree, "midpoint")
    center <- center || (inner && !is.numeric(mid))
    x <- if (center) 
        mean(c(x1, x2))
    else x1 + .midDend(subtree)
    list(x = x, limit = limit)
}
