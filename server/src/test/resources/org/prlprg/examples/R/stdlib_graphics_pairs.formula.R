#? stdlib
`pairs.formula` <- function (formula, data = NULL, ..., subset, na.action = stats::na.pass) 
{
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m$... <- NULL
    m$na.action <- na.action
    m[[1L]] <- quote(stats::model.frame)
    mf <- eval(m, parent.frame())
    pairs(mf, ...)
}
