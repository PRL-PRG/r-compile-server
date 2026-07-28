#? stdlib
`pointwise` <- function (results, coverage) 
{
    fit <- results$fit
    lim <- qt((1 - coverage)/2, results$df, lower.tail = FALSE) * 
        results$se.fit
    list(fit = fit, lower = fit - lim, upper = fit + lim)
}
