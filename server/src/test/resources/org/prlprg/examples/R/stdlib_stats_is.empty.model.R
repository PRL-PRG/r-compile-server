#? stdlib
`is.empty.model` <- function (x) 
{
    tt <- terms(x)
    (length(attr(tt, "factors")) == 0L) & (attr(tt, "intercept") == 
        0L)
}

# Examples
y <- rnorm(20)
is.empty.model(y ~ 0)
is.empty.model(y ~ -1)
is.empty.model(lm(y ~ 0))

