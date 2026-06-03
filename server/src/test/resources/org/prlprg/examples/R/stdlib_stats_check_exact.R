#? stdlib
`check_exact` <- function (object) 
{
    w <- object$weights
    if (is.null(w)) {
        mss <- sum(object$fitted.values^2)
        rss <- sum(object$residuals^2)
    }
    else {
        mss <- sum(w * object$fitted.values^2)
        rss <- sum(w * object$residuals^2)
    }
    if (rss < 1e-10 * mss) 
        warning("attempting model selection on an essentially perfect fit is nonsense", 
            call. = FALSE)
}
