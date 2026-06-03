#? stdlib
`time.default` <- function (x, offset = 0, ts.eps = getOption("ts.eps"), ...) 
{
    xtsp <- attr(hasTsp(x), "tsp")
    y <- seq.int(xtsp[1L], xtsp[2L], length.out = NROW(x)) + 
        offset/xtsp[3L]
    if (ts.eps > 0) {
        iy <- round(y)
        nearI <- abs(iy - y) < ts.eps
        y[nearI] <- iy[nearI]
    }
    tsp(y) <- xtsp
    y
}
