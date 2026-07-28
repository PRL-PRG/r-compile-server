#? stdlib
`end.default` <- function (x, ts.eps = getOption("ts.eps"), ...) 
{
    tsp <- attr(hasTsp(x), "tsp")
    is <- tsp[2L] * tsp[3L]
    if (abs(tsp[3L] - round(tsp[3L])) < ts.eps && abs(is - round(is)) < 
        ts.eps) {
        is <- floor(tsp[2L] + ts.eps)
        fs <- floor(tsp[3L] * (tsp[2L] - is) + 0.001)
        c(is, fs + 1)
    }
    else tsp[2L]
}
