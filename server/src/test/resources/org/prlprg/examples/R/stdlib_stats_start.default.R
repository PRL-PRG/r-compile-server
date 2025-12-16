#? stdlib
`start.default` <- function (x, ts.eps = getOption("ts.eps"), ...) 
{
    tsp <- attr(hasTsp(x), "tsp")
    is <- tsp[1L] * tsp[3L]
    if (abs(tsp[3L] - round(tsp[3L])) < ts.eps && abs(is - round(is)) < 
        ts.eps) {
        is <- floor(tsp[1L] + ts.eps)
        fs <- floor(tsp[3L] * (tsp[1L] - is) + 0.001)
        c(is, fs + 1)
    }
    else tsp[1L]
}
