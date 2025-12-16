#? stdlib
`tail.ts` <- function (x, n = 6L, ...) 
{
    .checkHT(n, d <- dim(x))
    tmx <- as.numeric(time(x))
    lastn <- tail(tmx, n[1L])
    if (!is.null(d) && length(n) >= 2L) {
        cols <- head(1:d[2], n[2L])
        x <- x[, cols[1L]:tail(cols, 1L), drop = FALSE]
    }
    window(x, lastn[1L], tail(lastn, 1L))
}
