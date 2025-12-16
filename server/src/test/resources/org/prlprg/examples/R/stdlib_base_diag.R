#? stdlib
`diag` <- function (x = 1, nrow, ncol, names = TRUE) 
{
    if (is.matrix(x)) {
        if (nargs() > 1L && (nargs() > 2L || any(names(match.call()) %in% 
            c("nrow", "ncol")))) 
            stop("'nrow' or 'ncol' cannot be specified when 'x' is a matrix")
        if ((m <- min(dim(x))) == 0L) 
            return(vector(typeof(x), 0L))
        y <- x[1 + 0L:(m - 1L) * (dim(x)[1L] + 1)]
        if (names) {
            nms <- dimnames(x)
            if (is.list(nms) && !any(vapply(nms, is.null, NA)) && 
                identical((nm <- nms[[1L]][seq_len(m)]), nms[[2L]][seq_len(m)])) 
                names(y) <- nm
        }
        return(y)
    }
    if (is.array(x) && length(dim(x)) != 1L) 
        stop("'x' is an array, but not one-dimensional.")
    if (missing(x)) 
        n <- nrow
    else if (length(x) == 1L && nargs() == 1L) {
        n <- as.integer(x)
        x <- 1
    }
    else n <- length(x)
    if (!missing(nrow)) 
        n <- nrow
    if (missing(ncol)) 
        ncol <- n
    .Internal(diag(x, n, ncol))
}

# Examples
dim(diag(3))
diag(10, 3, 4) # guess what?
all(diag(1:3) == {m <- matrix(0,3,3); diag(m) <- 1:3; m})

## other "numeric"-like diagonal matrices :
diag(c(1i,2i))    # complex
diag(TRUE, 3)     # logical
diag(as.raw(1:3)) # raw
(D2 <- diag(2:1, 4)); typeof(D2) # "integer"

require(stats)
## diag(<var-cov-matrix>) = variances
diag(var(M <- cbind(X = 1:5, Y = rnorm(5))))
#-> vector with names "X" and "Y"
rownames(M) <- c(colnames(M), rep("", 3))
M; diag(M) #  named as well
diag(M, names = FALSE) # w/o names
stopifnot(identical(names(diag(M)), colnames(M)),
                    is.null(names(diag(M,      names=FALSE))),
                    is.null(names(diag(var(M), names=FALSE)))) 

