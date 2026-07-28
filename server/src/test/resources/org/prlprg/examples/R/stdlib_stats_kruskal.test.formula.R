#? stdlib
`kruskal.test.formula` <- function (formula, data, subset, na.action, ...) 
{
    if (missing(formula) || (length(formula) != 3L)) 
        stop("'formula' missing or incorrect")
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m[[1L]] <- quote(stats::model.frame)
    mf <- eval(m, parent.frame())
    if (length(mf) > 2L) 
        stop("'formula' should be of the form response ~ group")
    DNAME <- paste(names(mf), collapse = " by ")
    y <- kruskal.test(x = mf[[1L]], g = mf[[2L]])
    y$data.name <- DNAME
    y
}
