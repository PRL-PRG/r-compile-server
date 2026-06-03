#? stdlib
`parse_URI_reference` <- function (x) 
{
    re <- "^(([^:/?#]+):)?(//([^/?#]*))?([^?#]*)(\\?([^#]*))?(#(.*))?"
    if (length(x)) {
        y <- do.call(rbind, regmatches(x, regexec(re, x)))
        y <- y[, c(3, 5, 6, 8, 10), drop = FALSE]
    }
    else {
        y <- matrix(character(), 0L, 5L)
    }
    y <- as.data.frame(y)
    names(y) <- c("scheme", "authority", "path", "query", "fragment")
    y
}
