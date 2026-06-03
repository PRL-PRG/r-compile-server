#? stdlib
`sunflowerplot.formula` <- function (formula, data = NULL, xlab = NULL, ylab = NULL, ..., 
    subset, na.action = NULL) 
{
    if (missing(formula) || (length(formula) != 3L)) 
        stop("formula missing or incorrect")
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m$xlab <- m$ylab <- m$... <- NULL
    m$na.action <- na.action
    m[[1L]] <- quote(stats::model.frame)
    mf <- eval(m, parent.frame())
    if (NCOL(mf) != 2L) 
        stop("'formula' should specify exactly two variables")
    if (is.null(xlab)) 
        xlab <- names(mf)[2L]
    if (is.null(ylab)) 
        ylab <- names(mf)[1L]
    sunflowerplot(mf[[2L]], mf[[1L]], xlab = xlab, ylab = ylab, 
        ...)
}
