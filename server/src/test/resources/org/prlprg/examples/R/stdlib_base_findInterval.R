#? stdlib
`findInterval` <- function (x, vec, rightmost.closed = FALSE, all.inside = FALSE, 
    left.open = FALSE) 
{
    if (!identical(FALSE, is.unsorted(vec))) 
        stop("'vec' must be sorted non-decreasingly and not contain NAs")
    .Internal(findInterval(as.double(vec), as.double(x), rightmost.closed, 
        all.inside, left.open))
}

# Examples
x <- 2:18
v <- c(5, 10, 15) # create two bins [5,10) and [10,15)
cbind(x, findInterval(x, v))

N <- 100
X <- sort(round(stats::rt(N, df = 2), 2))
tt <- c(-100, seq(-2, 2, length.out = 201), +100)
it <- findInterval(tt, X)
tt[it < 1 | it >= N] # only first and last are outside range(X)

##  'left.open = TRUE' means  "mirroring" :
N <- length(v)
stopifnot(identical(
                  findInterval( x,  v,  left.open=TRUE) ,
              N - findInterval(-x, -v[N:1])))

