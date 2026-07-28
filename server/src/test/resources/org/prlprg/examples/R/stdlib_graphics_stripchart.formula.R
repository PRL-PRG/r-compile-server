#? stdlib
`stripchart.formula` <- function (x, data = NULL, dlab = NULL, ..., subset, na.action = NULL) 
{
    if (missing(x) || (length(x) != 3L)) 
        stop("formula missing or incorrect")
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m$... <- NULL
    m$formula <- m$x
    m$x <- NULL
    m$na.action <- na.action
    m[[1L]] <- quote(stats::model.frame)
    mf <- eval(m, parent.frame())
    response <- attr(attr(mf, "terms"), "response")
    if (is.null(dlab)) 
        dlab <- names(mf)[response]
    stripchart(split(mf[[response]], mf[-response]), dlab = dlab, 
        ...)
}
