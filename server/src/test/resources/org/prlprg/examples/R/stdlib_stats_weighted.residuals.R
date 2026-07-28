#? stdlib
`weighted.residuals` <- function (obj, drop0 = TRUE) 
{
    w <- weights(obj)
    r <- residuals(obj, type = "deviance")
    if (drop0 && !is.null(w)) {
        if (is.matrix(r)) 
            r[w != 0, , drop = FALSE]
        else r[w != 0]
    }
    else r
}

# Examples
## following on from example(lm)
utils::example("lm", echo = FALSE)
all.equal(weighted.residuals(lm.D9),
          residuals(lm.D9))
x <- 1:10
w <- 0:9
y <- rnorm(x)
weighted.residuals(lmxy <- lm(y ~ x, weights = w))
weighted.residuals(lmxy, drop0 = FALSE)

