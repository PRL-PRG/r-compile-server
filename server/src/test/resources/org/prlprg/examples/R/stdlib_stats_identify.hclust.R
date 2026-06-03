#? stdlib
`identify.hclust` <- function (x, FUN = NULL, N = 20, MAXCLUSTER = 20, DEV.FUN = NULL, 
    ...) 
{
    cluster <- cutree(x, k = 2:MAXCLUSTER)
    retval <- list()
    oldk <- NULL
    oldx <- NULL
    DEV.x <- dev.cur()
    for (n in 1L:N) {
        dev.set(DEV.x)
        X <- locator(1)
        if (is.null(X)) 
            break
        k <- min(which(rev(x$height) < X$y), MAXCLUSTER)
        k <- max(k, 2)
        if (!is.null(oldx)) {
            rect.hclust(x, k = oldk, x = oldx, cluster = cluster[, 
                oldk - 1], border = "grey")
        }
        retval[[n]] <- unlist(rect.hclust(x, k = k, x = X$x, 
            cluster = cluster[, k - 1], border = "red"))
        if (!is.null(FUN)) {
            if (!is.null(DEV.FUN)) {
                dev.set(DEV.FUN)
            }
            retval[[n]] <- FUN(retval[[n]], ...)
        }
        oldx <- X$x
        oldk <- k
    }
    dev.set(DEV.x)
    invisible(retval)
}

# Examples
