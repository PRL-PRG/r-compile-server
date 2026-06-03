#? stdlib
`logLik.glm` <- function (object, ...) 
{
    if (!missing(...)) 
        warning("extra arguments discarded")
    fam <- family(object)$family
    dispersion <- family(object)$dispersion
    p <- object$rank
    if (!is.null(dispersion)) {
        if (is.na(dispersion)) 
            p <- p + 1
    }
    else if (fam %in% c("gaussian", "Gamma", "inverse.gaussian")) 
        p <- p + 1
    val <- p - object$aic/2
    attr(val, "nobs") <- sum(!is.na(object$residuals))
    attr(val, "df") <- p
    class(val) <- "logLik"
    val
}
