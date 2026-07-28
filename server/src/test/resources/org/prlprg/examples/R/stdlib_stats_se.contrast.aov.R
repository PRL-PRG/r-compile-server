#? stdlib
`se.contrast.aov` <- function (object, contrast.obj, coef = contr.helmert(ncol(contrast))[, 
    1L], data = NULL, ...) 
{
    contrast.weight.aov <- function(object, contrast) {
        qro <- qr(object)
        asgn <- object$assign[qro$pivot[1L:object$rank]]
        uasgn <- unique(asgn)
        nterms <- length(uasgn)
        nmeffect <- c("(Intercept)", attr(object$terms, "term.labels"))[1L + 
            uasgn]
        effects <- as.matrix(qr.qty(qro, contrast))
        res <- matrix(0, nrow = nterms, ncol = ncol(effects), 
            dimnames = list(nmeffect, colnames(contrast)))
        for (i in seq(nterms)) {
            select <- (asgn == uasgn[i])
            res[i, ] <- colSums(effects[seq_along(asgn)[select], 
                , drop = FALSE]^2)
        }
        res
    }
    if (is.null(data)) 
        contrast.obj <- eval(contrast.obj)
    else contrast.obj <- eval(substitute(contrast.obj), data, 
        parent.frame())
    if (!is.matrix(contrast.obj)) {
        if (!missing(coef)) {
            if (sum(coef) != 0) 
                stop("'coef' must define a contrast, i.e., sum to 0")
            if (length(coef) != length(contrast.obj)) 
                stop("'coef' must have same length as 'contrast.obj'")
        }
        contrast <- sapply(contrast.obj, function(x) {
            if (!is.logical(x)) 
                stop(gettextf("each element of '%s' must be logical", 
                  substitute(contrasts.list)), domain = NA)
            x/sum(x)
        })
        if (!length(contrast) || all(is.na(contrast))) 
            stop("the contrast defined is empty (has no TRUE elements)")
        contrast <- contrast %*% coef
    }
    else {
        contrast <- contrast.obj
        if (any(abs(colSums(contrast)) > 1e-08)) 
            stop("columns of 'contrast.obj' must define a contrast (sum to zero)")
        if (!length(colnames(contrast))) 
            colnames(contrast) <- paste("Contrast", seq(ncol(contrast)))
    }
    weights <- contrast.weight.aov(object, contrast)
    rdf <- object$df.residual
    if (rdf == 0L) 
        stop("no degrees of freedom for residuals")
    resid <- as.matrix(object$residuals)
    wt <- object$weights
    if (!is.null(wt)) 
        resid <- resid * sqrt(wt)
    rse <- sum(resid^2)/rdf
    if (!is.matrix(contrast.obj)) 
        sqrt(sum(weights) * rse)
    else sqrt(rse * colSums(weights))
}
