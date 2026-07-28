#? stdlib
`ksmooth` <- function (x, y, kernel = c("box", "normal"), bandwidth = 0.5, 
    range.x = range(x), n.points = max(100L, length(x)), x.points) 
{
    if (missing(y) || is.null(y)) 
        stop("numeric y must be supplied.\nFor density estimation use density()")
    kernel <- match.arg(kernel)
    krn <- switch(kernel, box = 1L, normal = 2L)
    x.points <- if (missing(x.points)) 
        seq.int(range.x[1L], range.x[2L], length.out = n.points)
    else {
        n.points <- length(x.points)
        sort(x.points)
    }
    ord <- order(x)
    .Call(C_ksmooth, x[ord], y[ord], x.points, krn, bandwidth)
}

# Examples
require(graphics)

with(cars, {
    plot(speed, dist)
    lines(ksmooth(speed, dist, "normal", bandwidth = 2), col = 2)
    lines(ksmooth(speed, dist, "normal", bandwidth = 5), col = 3)
})

