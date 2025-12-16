#? stdlib
`ar` <- function (x, aic = TRUE, order.max = NULL, method = c("yule-walker", 
    "burg", "ols", "mle", "yw"), na.action = na.fail, series = deparse1(substitute(x)), 
    ...) 
{
    res <- switch(match.arg(method), yw = , `yule-walker` = ar.yw(x, 
        aic = aic, order.max = order.max, na.action = na.action, 
        series = series, ...), burg = ar.burg(x, aic = aic, order.max = order.max, 
        na.action = na.action, series = series, ...), ols = ar.ols(x, 
        aic = aic, order.max = order.max, na.action = na.action, 
        series = series, ...), mle = ar.mle(x, aic = aic, order.max = order.max, 
        na.action = na.action, series = series, ...))
    res$call <- match.call()
    res
}

# Examples
ar(lh)
ar(lh, method = "burg")
ar(lh, method = "ols")
ar(lh, FALSE, 4) # fit ar(4)

(sunspot.ar <- ar(sunspot.year))
predict(sunspot.ar, n.ahead = 25)
## try the other methods too

ar(ts.union(BJsales, BJsales.lead))
## Burg is quite different here, as is OLS (see ar.ols)
ar(ts.union(BJsales, BJsales.lead), method = "burg")

