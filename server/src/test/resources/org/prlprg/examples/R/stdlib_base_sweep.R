#? stdlib
`sweep` <- function (x, MARGIN, STATS, FUN = "-", check.margin = TRUE, ...) 
{
    FUN <- match.fun(FUN)
    dims <- dim(x)
    if (is.character(MARGIN)) {
        dn <- dimnames(x)
        if (is.null(dnn <- names(dn))) 
            stop("'x' must have named dimnames")
        MARGIN <- match(MARGIN, dnn)
        if (anyNA(MARGIN)) 
            stop("not all elements of 'MARGIN' are names of dimensions")
    }
    if (check.margin) {
        dimmargin <- dims[MARGIN]
        dimstats <- dim(STATS)
        lstats <- length(STATS)
        if (lstats > prod(dimmargin)) {
            warning("STATS is longer than the extent of 'dim(x)[MARGIN]'")
        }
        else if (is.null(dimstats)) {
            cumDim <- c(1L, cumprod(dimmargin))
            upper <- min(cumDim[cumDim >= lstats])
            lower <- max(cumDim[cumDim <= lstats])
            if (lstats && (upper%%lstats != 0L || lstats%%lower != 
                0L)) 
                warning("STATS does not recycle exactly across MARGIN")
        }
        else {
            dimmargin <- dimmargin[dimmargin > 1L]
            dimstats <- dimstats[dimstats > 1L]
            if (length(dimstats) != length(dimmargin) || any(dimstats != 
                dimmargin)) 
                warning("length(STATS) or dim(STATS) do not match dim(x)[MARGIN]")
        }
    }
    perm <- c(MARGIN, seq_along(dims)[-MARGIN])
    FUN(x, aperm(array(STATS, dims[perm]), order(perm)), ...)
}

# Examples
require(stats) # for median
med.att <- apply(attitude, 2, median)
sweep(data.matrix(attitude), 2, med.att)  # subtract the column medians

## More sweeping:
A <- array(1:24, dim = 4:2)

## no warnings in normal use
sweep(A, 1, 5)
(A.min <- apply(A, 1, min))  # == 1:4
sweep(A, 1, A.min)
sweep(A, 1:2, apply(A, 1:2, median))

## warnings when mismatch
sweep(A, 1, 1:3)  # STATS does not recycle
sweep(A, 1, 6:1)  # STATS is longer

## exact recycling:
sweep(A, 1, 1:2)  # no warning
sweep(A, 1, as.array(1:2))  # warning

## Using named dimnames

dimnames(A) <- list(fee=1:4, fie=1:3, fum=1:2)

mn_fum_fie <- apply(A, c("fum", "fie"), mean)
mn_fum_fie
sweep(A, c("fum", "fie"), mn_fum_fie)

