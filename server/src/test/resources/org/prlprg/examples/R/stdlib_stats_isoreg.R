#? stdlib
`isoreg` <- function (x, y = NULL) 
{
    xy <- xy.coords(x, y)
    x <- xy$x
    if (anyNA(x) || anyNA(xy$y)) 
        stop("missing values not allowed")
    isOrd <- ((!is.null(xy$xlab) && xy$xlab == "Index") || !is.unsorted(x, 
        strictly = TRUE))
    if (!isOrd) {
        y <- xy$y
        ord <- order(x, -y)
        y <- y[ord]
    }
    z <- .Call(C_isoreg, if (isOrd) xy$y else y)
    structure(c(xy[c("x", "y")], z[c("yf", "yc", "iKnots")], 
        list(isOrd = isOrd, ord = if (!isOrd) ord, call = match.call())), 
        class = "isoreg")
}

# Examples
require(graphics)

(ir <- isoreg(c(1,0,4,3,3,5,4,2,0)))
plot(ir, plot.type = "row")

(ir3 <- isoreg(y3 <- c(1,0,4,3,3,5,4,2, 3))) # last "3", not "0"
(fi3 <- as.stepfun(ir3))
(ir4 <- isoreg(1:10, y4 <- c(5, 9, 1:2, 5:8, 3, 8)))
cat(sprintf("R^2 = %.2f\n",
            1 - sum(residuals(ir4)^2) / ((10-1)*var(y4))))

## If you are interested in the knots alone :
with(ir4, cbind(iKnots, yf[iKnots]))

## Example of unordered x[] with ties:
x <- sample((0:30)/8)
y <- exp(x)
x. <- round(x) # ties!
plot(m <- isoreg(x., y))
stopifnot(all.equal(with(m, yf[iKnots]),
                    as.vector(tapply(y, x., mean))))

