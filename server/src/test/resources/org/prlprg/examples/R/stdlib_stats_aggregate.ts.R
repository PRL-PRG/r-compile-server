#? stdlib
`aggregate.ts` <- function (x, nfrequency = 1, FUN = sum, ndeltat = 1, ts.eps = getOption("ts.eps"), 
    ...) 
{
    x <- as.ts(x)
    ofrequency <- tsp(x)[3L]
    FUN <- match.fun(FUN)
    if (missing(nfrequency)) 
        nfrequency <- 1/ndeltat
    if ((nfrequency > 1) && (abs(nfrequency - round(nfrequency)) < 
        ts.eps)) 
        nfrequency <- round(nfrequency)
    if (nfrequency == ofrequency) 
        return(x)
    ratio <- ofrequency/nfrequency
    if (abs(ratio - round(ratio)) > ts.eps) 
        stop(gettextf("cannot change frequency from %g to %g", 
            ofrequency, nfrequency), domain = NA)
    len <- trunc((ofrequency/nfrequency) + ts.eps)
    mat <- is.matrix(x)
    if (mat) 
        cn <- colnames(x)
    nstart <- tsp(x)[1L]
    x <- as.matrix(x)
    nend <- floor(nrow(x)/len) * len
    x <- apply(array(c(x[1:nend, ]), dim = c(len, nend/len, ncol(x))), 
        MARGIN = c(2L, 3L), FUN = FUN, ...)
    if (!mat) 
        x <- as.vector(x)
    else colnames(x) <- cn
    ts(x, start = nstart, frequency = nfrequency)
}
