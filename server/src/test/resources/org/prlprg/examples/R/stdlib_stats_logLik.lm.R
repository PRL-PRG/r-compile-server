#? stdlib
`logLik.lm` <- function (object, REML = FALSE, ...) 
{
    if (inherits(object, "mlm")) 
        stop("'logLik.lm' does not support multiple responses")
    res <- object$residuals
    p <- object$rank
    N <- length(res)
    if (is.null(w <- object$weights)) {
        w <- rep.int(1, N)
    }
    else {
        excl <- w == 0
        if (any(excl)) {
            res <- res[!excl]
            N <- length(res)
            w <- w[!excl]
        }
    }
    N0 <- N
    if (REML) 
        N <- N - p
    val <- 0.5 * (sum(log(w)) - N * (log(2 * pi) + 1 - log(N) + 
        log(sum(w * res^2))))
    if (REML) 
        val <- val - sum(log(abs(diag(object$qr$qr)[1L:p])))
    attr(val, "nall") <- N0
    attr(val, "nobs") <- N
    attr(val, "df") <- p + 1
    class(val) <- "logLik"
    val
}
