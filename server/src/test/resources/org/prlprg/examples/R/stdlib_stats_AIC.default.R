#? stdlib
`AIC.default` <- function (object, ..., k = 2) 
{
    ll <- if (isNamespaceLoaded("stats4")) 
        stats4::logLik
    else logLik
    if (!missing(...)) {
        lls <- lapply(list(object, ...), ll)
        vals <- sapply(lls, function(el) {
            c(as.numeric(el), attr(el, "df"), attr(el, "nobs") %||% 
                NA_integer_)
        })
        val <- data.frame(df = vals[2L, ], ll = vals[1L, ])
        nos <- na.omit(vals[3L, ])
        if (length(nos) && any(nos != nos[1L])) 
            warning("models are not all fitted to the same number of observations")
        val <- data.frame(df = val$df, AIC = -2 * val$ll + k * 
            val$df)
        Call <- match.call()
        Call$k <- NULL
        row.names(val) <- as.character(Call[-1L])
        val
    }
    else {
        lls <- ll(object)
        -2 * as.numeric(lls) + k * attr(lls, "df")
    }
}
