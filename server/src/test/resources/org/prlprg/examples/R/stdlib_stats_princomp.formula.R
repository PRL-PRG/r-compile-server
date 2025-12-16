#? stdlib
`princomp.formula` <- function (formula, data = NULL, subset, na.action, ...) 
{
    mt <- terms(formula, data = data)
    if (attr(mt, "response") > 0) 
        stop("response not allowed in formula")
    cl <- match.call()
    mf <- match.call(expand.dots = FALSE)
    mf$... <- NULL
    mf[[1L]] <- quote(stats::model.frame)
    mf <- eval.parent(mf)
    if (.check_vars_numeric(mf)) 
        stop("PCA applies only to numerical variables")
    na.act <- attr(mf, "na.action")
    mt <- attr(mf, "terms")
    attr(mt, "intercept") <- 0
    x <- model.matrix(mt, mf)
    res <- princomp.default(x, ...)
    cl[[1L]] <- as.name("princomp")
    res$call <- cl
    if (!is.null(na.act)) {
        res$na.action <- na.act
        if (!is.null(sc <- res$scores)) 
            res$scores <- napredict(na.act, sc)
    }
    res
}
