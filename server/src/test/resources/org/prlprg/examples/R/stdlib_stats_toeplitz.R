#? stdlib
`toeplitz` <- function (x, r = NULL, symmetric = is.null(r)) 
{
    if (!is.vector(x)) 
        stop("'x' is not a vector")
    n <- length(x)
    if (symmetric) {
        d <- c(n, n)
        array(x[abs(.col(d) - .row(d)) + 1L], d)
    }
    else {
        stopifnot(is.vector(r))
        nc <- length(r)
        if (n && nc && x[1L] != r[1L]) 
            warning("x[1] != r[1]; using x[1] for diagonal")
        d <- c(n, nc)
        array(c(if (nc >= 2L) r[nc:2L], x)[nc - .col(d) + .row(d)], 
            d)
    }
}

# Examples
x <- 1:5
toeplitz (x)

T. <- toeplitz (1:5, 11:13) # with a  *Warning* x[1] != r[1]
T2 <- toeplitz2(c(13:12, 1:5), 5, 3)# this is the same matrix:
stopifnot(identical(T., T2))

# Matrix of character (could also have logical, raw, complex ..) {also warning}:
noquote(toeplitz(letters[1:4], LETTERS[20:26]))

## A convolution/smoother weight matrix :
m <- 17
k <- length(wts <- c(76, 99, 60, 20, 1))
n <- m-k+1
## Convolution
W <- toeplitz2(c(rep(0, m-k), wts, rep(0, m-k)), ncol=n)
\dontdiff{hadM <- isNamespaceLoaded("Matrix")
## "display" nicely :
if(requireNamespace("Matrix"))
   print(Matrix::Matrix(W))    else {
   colnames(W) <- paste0(",", if(n <= 9) 1:n else c(1:9, letters[seq_len(n-9)]))
   print(W)
}
if(!hadM) unloadNamespace("Matrix")}
## scale W to have column sums 1:
W. <- W / sum(wts)
all.equal(rep(1, ncol(W.)), colSums(W.), check.attributes = FALSE)
## Visualize "mass-preserving" convolution
x <- 1:n; f <- function(x) exp(-((x - .4*n)/3)^2)
y <- f(x) + rep_len(3:-2, n)/10
## Smoothing convolution:
y.hat <- W. %*% y # y.hat := smoothed(y) ("mass preserving" -> longer than y)
stopifnot(length(y.hat) == m, m == n + (k-1))
plot(x,y, type="b", xlim=c(1,m)); curve(f(x), 1,n, col="gray", lty=2, add=TRUE)
lines(1:m, y.hat, col=2, lwd=3)
rbind(sum(y), sum(y.hat)) ## mass preserved

## And, yes, convolve(y, *) does the same when called appropriately:
all.equal(c(y.hat), convolve(y, rev(wts/sum(wts)), type="open"))

