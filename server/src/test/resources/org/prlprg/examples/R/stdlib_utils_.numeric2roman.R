#? stdlib
`.numeric2roman` <- function (x) 
{
    romaNs <- names(.romans)
    n2r <- function(z) {
        y <- character()
        for (i in seq_along(.romans)) {
            d <- .romans[[i]]
            while (z >= d) {
                z <- z - d
                y <- c(y, romaNs[i])
            }
        }
        paste(y, collapse = "")
    }
    x <- as.integer(x)
    ind <- is.na(x) | (x <= 0L) | (x >= 4000L)
    out <- character(length(x))
    out[ind] <- NA
    out[!ind] <- vapply(x[!ind], n2r, "")
    out
}
