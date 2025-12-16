#? stdlib
`svd` <- function (x, nu = min(n, p), nv = min(n, p), LINPACK = FALSE) 
{
    if (!missing(LINPACK)) 
        stop("the LINPACK argument has been defunct since R 3.1.0")
    x <- as.matrix(x)
    if (any(!is.finite(x))) 
        stop("infinite or missing values in 'x'")
    dx <- dim(x)
    n <- dx[1L]
    p <- dx[2L]
    if (!n || !p) 
        stop("a dimension is zero")
    La.res <- La.svd(x, nu, nv)
    res <- list(d = La.res$d)
    if (nu) 
        res$u <- La.res$u
    if (nv) 
        res$v <- if (is.complex(x)) 
            Conj(t(La.res$vt))
        else t(La.res$vt)
    res
}

# Examples
hilbert <- function(n) { i <- 1:n; 1 / outer(i - 1, i, `+`) }
X <- hilbert(9)[, 1:6]
(s <- svd(X))
D <- diag(s$d)
s$u %*% D %*% t(s$v) #  X = U D V'
t(s$u) %*% X %*% s$v #  D = U' X V

