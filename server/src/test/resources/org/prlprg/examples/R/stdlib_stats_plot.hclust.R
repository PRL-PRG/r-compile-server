#? stdlib
`plot.hclust` <- function (x, labels = NULL, hang = 0.1, check = TRUE, axes = TRUE, 
    frame.plot = FALSE, ann = TRUE, main = "Cluster Dendrogram", 
    sub = NULL, xlab = NULL, ylab = "Height", ...) 
{
    merge <- x$merge
    if (check && !isTRUE(msg <- .validity.hclust(x, merge))) 
        stop(msg)
    storage.mode(merge) <- "integer"
    n1 <- nrow(merge)
    n <- n1 + 1L
    height <- as.double(x$height)
    labels <- if (missing(labels) || is.null(labels)) 
        as.character(x$labels %||% seq_len(n))
    else if (is.logical(labels) && !labels) 
        character(n)
    else as.character(labels)
    dev.hold()
    on.exit(dev.flush())
    plot.new()
    graphics:::plotHclust(n1, merge, height, order(x$order), 
        hang, labels, ...)
    if (axes) 
        axis(2, at = pretty(range(height)), ...)
    if (frame.plot) 
        box(...)
    if (ann) {
        if (!is.null(cl <- x$call) && is.null(sub)) 
            sub <- paste0(deparse(cl[[1L]]), " (*, \"", x$method, 
                "\")")
        if (is.null(xlab) && !is.null(cl)) 
            xlab <- deparse(cl[[2L]])
        title(main = main, sub = sub, xlab = xlab, ylab = ylab, 
            ...)
    }
    invisible()
}
