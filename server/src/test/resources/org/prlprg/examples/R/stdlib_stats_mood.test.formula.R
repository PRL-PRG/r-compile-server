#? stdlib
`mood.test.formula` <- function (formula, data, subset, na.action, ...) 
{
    if (missing(formula) || (length(formula) != 3L) || (length(attr(terms(formula[-2L]), 
        "term.labels")) != 1L)) 
        stop("'formula' missing or incorrect")
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m[[1L]] <- quote(stats::model.frame)
    m$... <- NULL
    mf <- eval(m, parent.frame())
    DNAME <- paste(names(mf), collapse = " by ")
    names(mf) <- NULL
    response <- attr(attr(mf, "terms"), "response")
    g <- factor(mf[[-response]])
    if (nlevels(g) != 2L) 
        stop("grouping factor must have exactly 2 levels")
    DATA <- split(mf[[response]], g)
    y <- mood.test(x = DATA[[1L]], y = DATA[[2L]], ...)
    y$data.name <- DNAME
    y
}
