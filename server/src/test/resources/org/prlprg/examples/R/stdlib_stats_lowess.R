#? stdlib
`lowess` <- function (x, y = NULL, f = 2/3, iter = 3L, delta = 0.01 * diff(range(x))) 
{
    xy <- xy.coords(x, y, setLab = FALSE)
    o <- order(xy$x)
    x <- as.double(xy$x[o])
    list(x = x, y = .Call(C_lowess, x, as.double(xy$y[o]), f, 
        iter, delta))
}

# Examples
require(graphics)

plot(cars, main = "lowess(cars)")
lines(lowess(cars), col = 2)
lines(lowess(cars, f = .2), col = 3)
legend(5, 120, c(paste("f = ", c("2/3", ".2"))), lty = 1, col = 2:3)

