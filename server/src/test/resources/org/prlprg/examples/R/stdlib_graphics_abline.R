#? stdlib
`abline` <- function (a = NULL, b = NULL, h = NULL, v = NULL, reg = NULL, 
    coef = NULL, untf = FALSE, ...) 
{
    int_abline <- function(a, b, h, v, untf, col = par("col"), 
        lty = par("lty"), lwd = par("lwd"), ...) .External.graphics(C_abline, 
        a, b, h, v, untf, col, lty, lwd, ...)
    if (!is.null(reg)) {
        if (!is.null(a)) 
            warning("'a' is overridden by 'reg'")
        a <- reg
    }
    if (is.object(a) || is.list(a)) {
        p <- length(coefa <- as.vector(coef(a)))
        if (p > 2) 
            warning(gettextf("only using the first two of %d regression coefficients", 
                p), domain = NA)
        islm <- inherits(a, "lm")
        noInt <- if (islm) 
            !as.logical(attr(stats::terms(a), "intercept"))
        else p == 1
        if (noInt) {
            a <- 0
            b <- coefa[1L]
        }
        else {
            a <- coefa[1L]
            b <- if (p >= 2) 
                coefa[2L]
            else 0
        }
    }
    if (!is.null(coef)) {
        if (!is.null(a)) 
            warning("'a' and 'b' are overridden by 'coef'")
        a <- coef[1L]
        b <- coef[2L]
    }
    int_abline(a = a, b = b, h = h, v = v, untf = untf, ...)
    invisible()
}

# Examples
## Setup up coordinate system (with x == y aspect ratio):
plot(c(-2,3), c(-1,5), type = "n", xlab = "x", ylab = "y", asp = 1)
## the x- and y-axis, and an integer grid
abline(h = 0, v = 0, col = "gray60")
text(1,0, "abline( h = 0 )", col = "gray60", adj = c(0, -.1))
abline(h = -1:5, v = -2:3, col = "lightgray", lty = 3)
abline(a = 1, b = 2, col = 2)
text(1,3, "abline( 1, 2 )", col = 2, adj = c(-.1, -.1))

## Simple Regression Lines:
require(stats)
sale5 <- c(6, 4, 9, 7, 6, 12, 8, 10, 9, 13)
plot(sale5)
abline(lsfit(1:10, sale5))
abline(lsfit(1:10, sale5, intercept = FALSE), col = 4) # less fitting

z <- lm(dist ~ speed, data = cars)
plot(cars)
abline(z) # equivalent to abline(reg = z) or
abline(coef = coef(z))

## trivial intercept model
abline(mC <- lm(dist ~ 1, data = cars)) ## the same as
abline(a = coef(mC), b = 0, col = "blue")

