#? stdlib
`backsolve` <- function (r, x, k = ncol(r), upper.tri = TRUE, transpose = FALSE) 
{
    r <- as.matrix(r)
    x.mat <- is.matrix(x)
    if (!x.mat) 
        x <- as.matrix(x)
    z <- .Internal(backsolve(r, x, k, upper.tri, transpose))
    if (x.mat) 
        z
    else drop(z)
}

# Examples
## upper triangular matrix 'r':
r <- rbind(c(1,2,3),
           c(0,1,1),
           c(0,0,2))
( y <- backsolve(r, x <- c(8,4,2)) ) # -1 3 1
r %*% y # == x = (8,4,2)
backsolve(r, x, transpose = TRUE) # 8 -12 -5

