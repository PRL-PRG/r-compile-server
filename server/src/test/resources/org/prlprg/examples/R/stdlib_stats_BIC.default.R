#? stdlib
`BIC.default` <- function (object, ...) 
{
    ll <- if (isNamespaceLoaded("stats4")) 
        stats4::logLik
    else logLik
    Nobs <- if (isNamespaceLoaded("stats4")) 
        stats4::nobs
    else nobs
    if (!missing(...)) {
        lls <- lapply(list(object, ...), ll)
        vals <- sapply(lls, function(el) {
            c(as.numeric(el), attr(el, "df"), attr(el, "nobs") %||% 
                NA_integer_)
        })
        val <- data.frame(df = vals[2L, ], ll = vals[1L, ], nobs = vals[3L, 
            ])
        nos <- na.omit(val$nobs)
        if (length(nos) && any(nos != nos[1L])) 
            warning("models are not all fitted to the same number of observations")
        unknown <- is.na(val$nobs)
        if (any(unknown)) 
            val$nobs[unknown] <- sapply(list(object, ...)[unknown], 
                function(x) tryCatch(Nobs(x), error = function(e) NA_real_))
        val <- data.frame(df = val$df, BIC = -2 * val$ll + log(val$nobs) * 
            val$df)
        row.names(val) <- as.character(match.call()[-1L])
        val
    }
    else {
        lls <- ll(object)
        nos <- attr(lls, "nobs") %||% tryCatch(Nobs(object), 
            error = function(e) NA_real_)
        -2 * as.numeric(lls) + log(nos) * attr(lls, "df")
    }
}
