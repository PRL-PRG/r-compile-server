#? stdlib
`qqline` <- function (y, datax = FALSE, distribution = qnorm, probs = c(0.25, 
    0.75), qtype = 7, ...) 
{
    stopifnot(length(probs) == 2, is.function(distribution))
    y <- as.vector(quantile(y, probs, names = FALSE, type = qtype, 
        na.rm = TRUE))
    x <- distribution(probs)
    if (datax) {
        slope <- diff(x)/diff(y)
        int <- x[[1L]] - slope * y[[1L]]
    }
    else {
        slope <- diff(y)/diff(x)
        int <- y[[1L]] - slope * x[[1L]]
    }
    abline(int, slope, ...)
}
