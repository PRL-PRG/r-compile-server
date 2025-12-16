#? stdlib
`plot.dendrogram` <- function (x, type = c("rectangle", "triangle"), center = FALSE, 
    edge.root = is.leaf(x) || !is.null(attr(x, "edgetext")), 
    nodePar = NULL, edgePar = list(), leaflab = c("perpendicular", 
        "textlike", "none"), dLeaf = NULL, xlab = "", ylab = "", 
    xaxt = "n", yaxt = "s", horiz = FALSE, frame.plot = FALSE, 
    xlim, ylim, ...) 
{
    type <- match.arg(type)
    leaflab <- match.arg(leaflab)
    hgt <- attr(x, "height")
    if (edge.root && is.logical(edge.root)) 
        edge.root <- 0.0625 * if (is.leaf(x)) 
            1
        else hgt
    mem.x <- .memberDend(x)
    yTop <- hgt + edge.root
    if (center) {
        x1 <- 0.5
        x2 <- mem.x + 0.5
    }
    else {
        x1 <- 1
        x2 <- mem.x
    }
    xl. <- c(x1 - 1/2, x2 + 1/2)
    yl. <- c(0, yTop)
    if (horiz) {
        tmp <- xl.
        xl. <- rev(yl.)
        yl. <- tmp
        tmp <- xaxt
        xaxt <- yaxt
        yaxt <- tmp
    }
    if (missing(xlim) || is.null(xlim)) 
        xlim <- xl.
    if (missing(ylim) || is.null(ylim)) 
        ylim <- yl.
    dev.hold()
    on.exit(dev.flush())
    plot(0, xlim = xlim, ylim = ylim, type = "n", xlab = xlab, 
        ylab = ylab, xaxt = xaxt, yaxt = yaxt, frame.plot = frame.plot, 
        ...)
    if (is.null(dLeaf)) 
        dLeaf <- 0.75 * (if (horiz) 
            strwidth("w")
        else strheight("x"))
    if (edge.root) {
        x0 <- plotNodeLimit(x1, x2, x, center)$x
        if (horiz) 
            segments(hgt, x0, yTop, x0)
        else segments(x0, hgt, x0, yTop)
        if (!is.null(et <- attr(x, "edgetext"))) {
            my <- mean(hgt, yTop)
            if (horiz) 
                text(my, x0, et)
            else text(x0, my, et)
        }
    }
    plotNode(x1, x2, x, type = type, center = center, leaflab = leaflab, 
        dLeaf = dLeaf, nodePar = nodePar, edgePar = edgePar, 
        horiz = horiz)
}
