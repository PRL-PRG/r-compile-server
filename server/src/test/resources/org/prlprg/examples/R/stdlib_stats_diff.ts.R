#? stdlib
`diff.ts` <- function (x, lag = 1, differences = 1, ...) 
{
    if (lag < 1 || differences < 1) 
        stop("bad value for 'lag' or 'differences'")
    if (lag * differences >= NROW(x)) 
        return(x[0L])
    tsLag <- function(x, k = 1) {
        p <- tsp(x)
        tsp(x) <- p - (k/p[3L]) * c(1, 1, 0)
        x
    }
    r <- x
    for (i in 1L:differences) {
        r <- r - tsLag(r, -lag)
    }
    xtsp <- attr(x, "tsp")
    if (is.matrix(x)) 
        colnames(r) <- colnames(x)
    ts(r, end = xtsp[2L], frequency = xtsp[3L])
}
