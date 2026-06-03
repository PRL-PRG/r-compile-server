#? stdlib
`logLik.nls` <- function (object, REML = FALSE, ...) 
{
    if (REML) 
        stop("cannot calculate REML log-likelihood for \"nls\" objects")
    res <- object$m$resid()
    N <- length(res)
    w <- object$weights %||% rep_len(1, N)
    zw <- w == 0
    N <- sum(!zw)
    val <- -N * (log(2 * pi) + 1 - log(N) - sum(log(w + zw))/N + 
        log(sum(res^2)))/2
    attr(val, "df") <- 1L + length(coef(object))
    attr(val, "nobs") <- attr(val, "nall") <- N
    class(val) <- "logLik"
    val
}
