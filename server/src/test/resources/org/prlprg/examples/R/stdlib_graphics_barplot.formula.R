#? stdlib
`barplot.formula` <- function (formula, data, subset, na.action, horiz = FALSE, xlab = NULL, 
    ylab = NULL, ...) 
{
    if (missing(formula) || length(formula) != 3L) 
        stop("'formula' missing or incorrect")
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m$... <- m$horiz <- m$xlab <- m$ylab <- NULL
    m[[1L]] <- quote(stats::model.frame)
    mf <- eval(m, parent.frame())
    if (ncol(mf[-1L]) == 0L || ncol(mf[-1L]) >= 3L) 
        stop("formula must specify 1 or 2 categorical variables")
    if (anyDuplicated(mf[-1L])) 
        stop("duplicated categorical values - try another formula or subset")
    if (horiz) {
        if (is.null(ylab)) 
            ylab <- names(mf)[ncol(mf)]
    }
    else if (is.null(xlab)) 
        xlab <- names(mf)[ncol(mf)]
    if (is.matrix(mf[[1L]])) {
        if (ncol(mf[-1L]) != 1L) 
            stop("formula with cbind() must specify 1 categorical variable")
        lhs <- t(mf[[1L]])
        colnames(lhs) <- mf[[ncol(mf)]]
        barplot.default(lhs, horiz = horiz, xlab = xlab, ylab = ylab, 
            ...)
    }
    else {
        if (horiz) {
            if (is.null(xlab)) 
                xlab <- names(mf)[1L]
        }
        else if (is.null(ylab)) 
            ylab <- names(mf)[1L]
        barplot.default(stats::xtabs(mf, addNA = TRUE), horiz = horiz, 
            xlab = xlab, ylab = ylab, ...)
    }
}
