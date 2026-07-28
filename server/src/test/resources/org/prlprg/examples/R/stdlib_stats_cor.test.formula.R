#? stdlib
`cor.test.formula` <- function (formula, data, subset, na.action, ...) 
{
    if (missing(formula) || !inherits(formula, "formula") || 
        length(formula) != 2L) 
        stop("'formula' missing or invalid")
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m[[1L]] <- quote(stats::model.frame)
    m$... <- NULL
    mf <- eval(m, parent.frame())
    if (length(mf) != 2L) 
        stop("invalid formula")
    DNAME <- paste(names(mf), collapse = " and ")
    y <- cor.test(x = mf[[1L]], y = mf[[2L]], ...)
    y$data.name <- DNAME
    y
}
