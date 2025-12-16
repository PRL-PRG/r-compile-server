#? stdlib
`outer` <- function (X, Y, FUN = "*", ...) 
{
    if (is.array(X)) {
        dX <- dim(X)
        nx <- dimnames(X)
        no.nx <- is.null(nx)
    }
    else {
        dX <- length(X)
        no.nx <- is.null(names(X))
        if (!no.nx) 
            nx <- list(names(X))
    }
    if (is.array(Y)) {
        dY <- dim(Y)
        ny <- dimnames(Y)
        no.ny <- is.null(ny)
    }
    else {
        dY <- length(Y)
        no.ny <- is.null(names(Y))
        if (!no.ny) 
            ny <- list(names(Y))
    }
    robj <- if (is.character(FUN) && FUN == "*") {
        if (!missing(...)) 
            stop("using ... with FUN = \"*\" is an error")
        tcrossprod(as.vector(X), as.vector(Y))
    }
    else {
        FUN <- match.fun(FUN)
        Y <- rep(Y, rep.int(length(X), length(Y)))
        if (length(X)) 
            X <- rep(X, times = ceiling(length(Y)/length(X)))
        FUN(X, Y, ...)
    }
    dim(robj) <- c(dX, dY)
    if (!(no.nx && no.ny)) {
        if (no.nx) 
            nx <- vector("list", length(dX))
        else if (no.ny) 
            ny <- vector("list", length(dY))
        dimnames(robj) <- c(nx, ny)
    }
    robj
}

# Examples
x <- 1:9; names(x) <- x
# Multiplication & Power Tables
x %o% x
y <- 2:8; names(y) <- paste(y,":", sep = "")
outer(y, x, `^`)

outer(month.abb, 1999:2003, FUN = paste)

## three way multiplication table:
x %o% x %o% y[1:3]

