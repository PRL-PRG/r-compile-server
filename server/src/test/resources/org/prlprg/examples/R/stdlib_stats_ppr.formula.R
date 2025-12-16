#? stdlib
`ppr.formula` <- function (formula, data, weights, subset, na.action, contrasts = NULL, 
    ..., model = FALSE) 
{
    call <- match.call()
    m <- match.call(expand.dots = FALSE)
    m$contrasts <- m$... <- NULL
    m[[1L]] <- quote(stats::model.frame)
    m <- eval(m, parent.frame())
    Terms <- attr(m, "terms")
    attr(Terms, "intercept") <- 0L
    X <- model.matrix(Terms, m, contrasts)
    Y <- model.response(m)
    w <- model.weights(m)
    if (length(w) == 0L) 
        w <- rep_len(1, nrow(X))
    fit <- ppr.default(X, Y, w, ...)
    fit$na.action <- attr(m, "na.action")
    fit$terms <- Terms
    call[[1L]] <- as.name("ppr")
    fit$call <- call
    fit$contrasts <- attr(X, "contrasts")
    fit$xlevels <- .getXlevels(Terms, m)
    if (model) 
        fit$model <- m
    structure(fit, class = c("ppr.form", "ppr"))
}
