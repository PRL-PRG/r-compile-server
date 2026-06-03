#? stdlib
`apply` <- function (X, MARGIN, FUN, ..., simplify = TRUE) 
{
    FUN <- match.fun(FUN)
    simplify <- isTRUE(simplify)
    dl <- length(dim(X))
    if (!dl) 
        stop("dim(X) must have a positive length")
    if (is.object(X)) 
        X <- if (dl == 2L) 
            as.matrix(X)
        else as.array(X)
    d <- dim(X)
    dn <- dimnames(X)
    ds <- seq_len(dl)
    if (is.character(MARGIN)) {
        if (is.null(dnn <- names(dn))) 
            stop("'X' must have named dimnames")
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
    d2 <- prod(d.ans)
    if (d2 == 0L) {
        newX <- array(vector(typeof(X), 1L), dim = c(prod(d.call), 
            1L))
        ans <- forceAndCall(1, FUN, if (length(d.call) < 2L) newX[, 
            1] else array(newX[, 1L], d.call, dn.call), ...)
        return(if (is.null(ans)) ans else if (length(d.ans) < 
            2L) ans[1L][-1L] else array(ans, d.ans, dn.ans))
    }
    newX <- aperm(X, c(s.call, s.ans))
    dim(newX) <- c(prod(d.call), d2)
    ans <- vector("list", d2)
    if (length(d.call) < 2L) {
        if (length(dn.call)) 
            dimnames(newX) <- c(dn.call, list(NULL))
        for (i in 1L:d2) {
            tmp <- forceAndCall(1, FUN, newX[, i], ...)
            if (!is.null(tmp)) 
                ans[[i]] <- tmp
        }
    }
    else for (i in 1L:d2) {
        tmp <- forceAndCall(1, FUN, array(newX[, i], d.call, 
            dn.call), ...)
        if (!is.null(tmp)) 
            ans[[i]] <- tmp
    }
    ans.list <- !simplify || is.recursive(ans[[1L]])
    l.ans <- length(ans[[1L]])
    ans.names <- names(ans[[1L]])
    if (!ans.list) 
        ans.list <- any(lengths(ans) != l.ans)
    if (!ans.list && length(ans.names)) {
        all.same <- vapply(ans, function(x) identical(names(x), 
            ans.names), NA)
        if (!all(all.same)) 
            ans.names <- NULL
    }
    len.a <- if (ans.list) 
        d2
    else length(ans <- unlist(ans, recursive = FALSE))
    if (length(MARGIN) == 1L && len.a == d2) {
        names(ans) <- if (length(dn.ans[[1L]])) 
            dn.ans[[1L]]
        ans
    }
    else if (len.a == d2) 
        array(ans, d.ans, dn.ans)
    else if (len.a && len.a%%d2 == 0L) {
        if (is.null(dn.ans)) 
            dn.ans <- vector(mode = "list", length(d.ans))
        dn1 <- list(ans.names)
        if (length(dn.call) && !is.null(n1 <- names(dn <- dn.call[1])) && 
            nzchar(n1) && length(ans.names) == length(dn[[1]])) 
            names(dn1) <- n1
        dn.ans <- c(dn1, dn.ans)
        array(ans, c(len.a%/%d2, d.ans), if (!is.null(names(dn.ans)) || 
            !all(vapply(dn.ans, is.null, NA))) 
            dn.ans)
    }
    else ans
}

# Examples
## Compute row and column sums for a matrix:
x <- cbind(x1 = 3, x2 = c(4:1, 2:5))
dimnames(x)[[1]] <- letters[1:8]
apply(x, 2, mean, trim = .2)
col.sums <- apply(x, 2, sum)
row.sums <- apply(x, 1, sum)
rbind(cbind(x, Rtot = row.sums), Ctot = c(col.sums, sum(col.sums)))

stopifnot( apply(x, 2, is.vector))

## Sort the columns of a matrix
apply(x, 2, sort)

## keeping named dimnames
names(dimnames(x)) <- c("row", "col")
x3 <- array(x, dim = c(dim(x),3),
	    dimnames = c(dimnames(x), list(C = paste0("cop.",1:3))))
identical(x,  apply( x,  2,  identity))
identical(x3, apply(x3, 2:3, identity))

xN <- x; dimnames(xN) <- list(row=NULL, col=NULL)
x2 <- x; names(dimnames(x2)) <- NULL
fXY <- function(u) c(X=u[1], Y=u[2])
ax1 <- apply(x, 1, fXY)
ax2 <- apply(x2,1, fXY)
stopifnot(identical(dimnames(ax1), list(col=c("X.x1", "Y.x2"), row=letters[1:8])),
          identical(dimnames(ax2), unname(dimnames(ax1))),
          identical( x, apply( x, 2, identity)),
          identical(xN, apply(xN, 2, identity)),
	  identical(dimnames(x),
		    dimnames(apply(x, 2, format))),
          identical(x3, apply(x3, 2:3, identity)),
	  identical(dimnames(apply(x3, 2:1, identity)),
		    dimnames(x3)[3:1]))
rm(xN, x2, fXY, ax1, ax2)

##- function with extra args:
cave <- function(x, c1, c2) c(mean(x[c1]), mean(x[c2]))
apply(x, 1, cave,  c1 = "x1", c2 = c("x1","x2"))

ma <- matrix(c(1:4, 1, 6:8), nrow = 2)
ma
apply(ma, 1, table)  #--> a list of length 2
apply(ma, 1, stats::quantile) # 5 x n matrix with rownames

stopifnot(dim(ma) == dim(apply(ma, 1:2, sum)))

## Example with different lengths for each call
z <- array(1:24, dim = 2:4)
zseq <- apply(z, 1:2, function(x) seq_len(max(x)))
zseq         ## a 2 x 3 matrix
typeof(zseq) ## list
dim(zseq) ## 2 3
zseq[1,]
apply(z, 3, function(x) seq_len(max(x)))
# a list without a dim attribute

