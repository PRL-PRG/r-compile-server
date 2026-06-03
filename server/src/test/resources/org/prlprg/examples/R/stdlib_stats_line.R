#? stdlib
`line` <- function (x, y = NULL, iter = 1) 
{
    xy <- xy.coords(x, y, setLab = FALSE)
    ok <- complete.cases(xy$x, xy$y)
    Call <- sys.call()
    structure(.Call(C_tukeyline, as.double(xy$x[ok]), as.double(xy$y[ok]), 
        as.integer(iter), Call), class = "tukeyline")
}

# Examples
require(graphics)

plot(cars)
(z <- line(cars))
abline(coef(z))
## Tukey-Anscombe Plot :
plot(residuals(z) ~ fitted(z), main = deparse(z$call))

## Andrew Siegel's pathological 9-point data, y-values multiplied by 3:
d.AS <- data.frame(x = c(-4:3, 12), y = 3*c(rep(0,6), -5, 5, 1))
cAS <- with(d.AS, t(sapply(1:10,
                   function(it) line(x,y, iter=it)$coefficients)))
dimnames(cAS) <- list(paste("it =", format(1:10)), c("intercept", "slope"))
cAS
## iterations started to oscillate, repeating iteration 7,8 indefinitely

