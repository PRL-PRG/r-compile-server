#? stdlib
`tsdiag` <- function (object, gof.lag, ...) 
UseMethod("tsdiag")

# Examples
\donttest{require(graphics)

fit <- arima(lh, c(1,0,0))
tsdiag(fit)

## see also examples(arima)

(fit <- StructTS(log10(JohnsonJohnson), type = "BSM"))
tsdiag(fit)
}
