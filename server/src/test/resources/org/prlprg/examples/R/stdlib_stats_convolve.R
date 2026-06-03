#? stdlib
`convolve` <- function (x, y, conj = TRUE, type = c("circular", "open", "filter")) 
{
    type <- match.arg(type)
    n <- length(x)
    ny <- length(y)
    Real <- is.numeric(x) && is.numeric(y)
    if (type == "circular") {
        if (ny != n) 
            stop("length mismatch in convolution")
    }
    else {
        n1 <- ny - 1
        x <- c(rep.int(0, n1), x)
        n <- length(y <- c(y, rep.int(0, n - 1)))
    }
    x <- fft(fft(x) * (if (conj) 
        Conj(fft(y))
    else fft(y)), inverse = TRUE)
    if (type == "filter") 
        (if (Real) 
            Re(x)
        else x)[-c(1L:n1, (n - n1 + 1L):n)]/n
    else (if (Real) 
        Re(x)
    else x)/n
}

# Examples
require(graphics)

x <- c(0,0,0,100,0,0,0)
y <- c(0,0,1, 2 ,1,0,0)/4
zapsmall(convolve(x, y))         #  *NOT* what you first thought.
zapsmall(convolve(x, y[3:5], type = "f")) # rather
x <- rnorm(50)
y <- rnorm(50)
# Circular convolution *has* this symmetry:
all.equal(convolve(x, y, conj = FALSE), rev(convolve(rev(y),x)))

n <- length(x <- -20:24)
y <- (x-10)^2/1000 + rnorm(x)/8

Han <- function(y) # Hanning
       convolve(y, c(1,2,1)/4, type = "filter")

plot(x, y, main = "Using  convolve(.) for Hanning filters")
lines(x[-c(1  , n)      ], Han(y), col = "red")
lines(x[-c(1:2, (n-1):n)], Han(Han(y)), lwd = 2, col = "dark blue")

