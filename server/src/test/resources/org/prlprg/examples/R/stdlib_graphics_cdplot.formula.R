#? stdlib
`cdplot.formula` <- function (formula, data = list(), plot = TRUE, tol.ylab = 0.05, 
    ylevels = NULL, bw = "nrd0", n = 512, from = NULL, to = NULL, 
    col = NULL, border = 1, main = "", xlab = NULL, ylab = NULL, 
    yaxlabels = NULL, xlim = NULL, ylim = c(0, 1), ..., subset = NULL, 
    weights = NULL) 
{
    m <- match.call(expand.dots = FALSE)
    m <- m[c(1L, match(c("formula", "data", "subset", "weights"), 
        names(m), 0L))]
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
    if (is.null(yaxlabels)) 
        yaxlabels <- levels(y)
    cdplot(x, y, plot = plot, tol.ylab = tol.ylab, bw = bw, n = n, 
        from = from, to = to, col = col, border = border, main = main, 
        xlab = xlab, ylab = ylab, yaxlabels = yaxlabels, xlim = xlim, 
        ylim = ylim, weights = w, ...)
}
