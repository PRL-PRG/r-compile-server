#? stdlib
`asplit` <- function (x, MARGIN) 
{
    dl <- length(dim(x))
    if (!dl) 
        stop("dim(x) must have a positive length")
    if (is.object(x)) 
        x <- if (dl == 2L) 
            as.matrix(x)
        else as.array(x)
    d <- dim(x)
    dn <- dimnames(x)
    ds <- seq_len(dl)
    if (is.character(MARGIN)) {
        if (is.null(dnn <- names(dn))) 
            stop("'x' must have named dimnames")
        MARGIN <- match(MARGIN, dnn)
        if (anyNA(MARGIN)) 
            stop("not all elements of 'MARGIN' are names of dimensions")
    }
    d.call <- d[-MARGIN]
    d.ans <- d[MARGIN]
    if (anyNA(d.call) || anyNA(d.ans)) 
        stop("'MARGIN' does not match dim(X)")
    s.call <- ds[-MARGIN]
    s.ans <- ds[MARGIN]
    dn.call <- dn[-MARGIN]
    dn.ans <- dn[MARGIN]
    dimnames(x) <- NULL
    d2 <- prod(d.ans)
    newx <- aperm(x, c(s.call, s.ans))
    dim(newx) <- c(prod(d.call), d2)
    ans <- lapply(seq_len(d2), function(i) array(newx[, i], d.call, 
        dn.call))
    array(ans, d.ans, dn.ans)
}

# Examples
## A 3-dimensional array of dimension 2 x 3 x 4:
d <- 2 : 4
x <- array(seq_len(prod(d)), d)
x
## Splitting by margin 2 gives a 1-d list array of length 3
## consisting of 2 x 4 arrays:
asplit(x, 2)
## Splitting by margins 1 and 2 gives a 2 x 3 list array
## consisting of 1-d arrays of length 4:
asplit(x, c(1, 2))
## Compare to
split(x, slice.index(x, c(1, 2)))

## A 2 x 3 matrix:
(x <- matrix(1 : 6, 2, 3))
## To split x by its rows, one can use
asplit(x, 1)
## or less efficiently
split(x, slice.index(x, 1))
split(x, row(x))

