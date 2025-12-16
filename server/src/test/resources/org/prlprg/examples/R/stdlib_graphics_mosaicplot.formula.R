#? stdlib
`mosaicplot.formula` <- function (formula, data = NULL, ..., main = deparse1(substitute(data)), 
    subset, na.action = stats::na.omit) 
{
    main
    m <- match.call(expand.dots = FALSE)
    edata <- eval(m$data, parent.frame())
    if (inherits(edata, "ftable") || inherits(edata, "table") || 
        length(dim(edata)) > 2) {
        data <- as.table(data)
        varnames <- attr(stats::terms.formula(formula), "term.labels")
        if (all(varnames != ".")) 
            data <- marginSums(data, varnames)
        mosaicplot(data, main = main, ...)
    }
    else {
        if (is.matrix(edata)) 
            m$data <- as.data.frame(data)
        m$main <- m$... <- NULL
        m$na.action <- na.action
        m[[1L]] <- quote(stats::model.frame)
        mf <- eval(m, parent.frame())
        mosaicplot(table(mf), main = main, ...)
    }
}
