#? stdlib
`se.contrast.aovlist` <- function (object, contrast.obj, coef = contr.helmert(ncol(contrast))[, 
    1L], data = NULL, ...) 
{
    contrast.weight.aovlist <- function(object, contrast) {
        e.qr <- attr(object, "error.qr")
        if (!inherits(e.qr, "qr")) 
            stop("'object' does not include an error 'qr' component")
        c.qr <- qr.qty(e.qr, contrast)
        e.assign <- attr(e.qr$qr, "assign")
        n.object <- length(object)
        e.assign <- c(e.assign, rep.int(n.object - 1L, nrow(c.qr) - 
            length(e.assign)))
        res <- setNames(vector("list", n.object), names(object))
        for (j in seq_along(names(object))) {
            strata <- object[[j]]
            if (is.qr(strata$qr)) {
                scontrast <- c.qr[e.assign == (j - 1L), , drop = FALSE]
                effects <- as.matrix(qr.qty(strata$qr, scontrast))
                asgn <- strata$assign[strata$qr$pivot[1L:strata$rank]]
                uasgn <- unique(asgn)
                nm <- c("(Intercept)", attr(strata$terms, "term.labels"))
                res.i <- matrix(0, length(uasgn), ncol(effects), 
                  dimnames = list(nm[1L + uasgn], colnames(contrast)))
                for (i in seq_along(uasgn)) {
                  select <- (asgn == uasgn[i])
                  res.i[i, ] <- colSums(effects[seq_along(asgn)[select], 
                    , drop = FALSE]^2)
                }
                res[[j]] <- res.i
            }
        }
        res
    }
    SS <- function(aov.object) {
        rdf <- aov.object$df.residual
        if (is.null(rdf)) {
            nobs <- length(aov.object$residuals)
            rank <- aov.object$rank
            rdf <- nobs - rank
        }
        if (rdf == 0L) 
            return(NA)
        resid <- as.matrix(aov.object$residuals)
        wt <- aov.object$weights
        if (!is.null(wt)) 
            resid <- resid * sqrt(wt)
        sum(resid^2)/rdf
    }
    if (is.null(attr(object, "error.qr"))) {
        message("Refitting model to allow projection")
        object <- update(object, qr = TRUE)
    }
    contrast.obj <- if (is.null(data)) 
        eval(contrast.obj)
    else eval(substitute(contrast.obj), data, parent.frame())
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
                  substitute(contrasts.obj)), domain = NA)
            x/sum(x)
        })
        if (!length(contrast) || all(is.na(contrast))) 
            stop("the contrast defined is empty (has no TRUE elements)")
        contrast <- contrast %*% coef
    }
    else {
        contrast <- contrast.obj
        if (any(abs(colSums(contrast)) > 1e-08)) 
            stop("columns of 'contrast.obj' must define a contrast(sum to zero)")
        if (!length(colnames(contrast))) 
            colnames(contrast) <- paste("Contrast", seq(ncol(contrast)))
    }
    weights <- contrast.weight.aovlist(object, contrast)
    weights <- weights[-match("(Intercept)", names(weights))]
    effic <- eff.aovlist(object)
    eff.used <- apply(effic, 2L, function(x, ind = seq_along(x)) {
        temp <- (x > 0)
        if (sum(temp) == 1) 
            temp
        else max(ind[temp]) == ind
    })
    if (is.matrix(eff.used)) {
        strata.nms <- rownames(effic)[row(eff.used)[eff.used]]
        var.nms <- colnames(effic)[col(eff.used)[eff.used]]
    }
    else {
        strata.nms <- rownames(effic)
        var.nms <- colnames(effic)
    }
    rse.list <- sapply(object[unique(strata.nms)], SS)
    wgt <- matrix(0, nrow = length(var.nms), ncol = ncol(contrast), 
        dimnames = list(var.nms, colnames(contrast)))
    for (i in seq_along(var.nms)) wgt[i, ] <- weights[[strata.nms[i]]][var.nms[i], 
        , drop = FALSE]
    rse <- rse.list[strata.nms]
    eff <- effic[eff.used]
    drop(sqrt((rse/eff^2) %*% wgt))
}
