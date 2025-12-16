#? stdlib
`sortedXyData.default` <- function (x, y, data) 
{
    if (is.language(x) || ((length(x) == 1L) && is.character(x))) {
        x <- eval(asOneSidedFormula(x)[[2L]], data)
    }
    x <- as.numeric(x)
    if (is.language(y) || ((length(y) == 1L) && is.character(y))) {
        y <- eval(asOneSidedFormula(y)[[2L]], data)
    }
    y <- as.numeric(y)
    y.avg <- tapply(y, x, mean, na.rm = TRUE)
    xvals <- as.numeric(chartr(getOption("OutDec"), ".", names(y.avg)))
    ord <- order(xvals)
    value <- na.omit(data.frame(x = xvals[ord], y = as.vector(y.avg[ord])))
    class(value) <- c("sortedXyData", "data.frame")
    value
}
