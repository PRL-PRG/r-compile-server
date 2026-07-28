#? stdlib
`spineplot.formula` <- function (formula, data = NULL, breaks = NULL, tol.ylab = 0.05, 
    off = NULL, ylevels = NULL, col = NULL, main = "", xlab = NULL, 
    ylab = NULL, xaxlabels = NULL, yaxlabels = NULL, xlim = NULL, 
    ylim = c(0, 1), axes = TRUE, ..., subset = NULL, weights = NULL, 
    drop.unused.levels = FALSE) 
{
    m <- match.call(expand.dots = FALSE)
    m <- m[c(1L, match(c("formula", "data", "subset", "weights", 
        "drop.unused.levels"), names(m), 0L))]
    m[[1L]] <- quote(stats::model.frame)
    mf <- eval.parent(m)
    if (length(setdiff(names(mf), "(weights)")) != 2L) 
        stop("'formula' should specify exactly two variables")
    y <- mf[, 1L]
    if (!is.factor(y)) 
        stop("dependent variable should be a factor")
    if (!is.null(ylevels)) 
        y <- factor(y, levels = if (is.numeric(ylevels)) 
            levels(y)[ylevels]
        else ylevels)
    x <- mf[, 2L]
    w <- if ("(weights)" %in% names(mf)) 
        mf[, "(weights)"]
    else NULL
    if (is.null(xlab)) 
        xlab <- names(mf)[2L]
    if (is.null(ylab)) 
        ylab <- names(mf)[1L]
    spineplot(x, y, breaks = breaks, tol.ylab = tol.ylab, off = off, 
        ylevels = NULL, col = col, main = main, xlab = xlab, 
        ylab = ylab, xaxlabels = xaxlabels, yaxlabels = yaxlabels, 
        xlim = xlim, ylim = ylim, axes = axes, weights = w, ...)
}
