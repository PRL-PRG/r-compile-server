#? stdlib
`princomp.default` <- function (x, cor = FALSE, scores = TRUE, covmat = NULL, subset = rep_len(TRUE, 
    nrow(as.matrix(x))), fix_sign = TRUE, ...) 
{
    chkDots(...)
    cl <- match.call()
    cl[[1L]] <- as.name("princomp")
    z <- if (!missing(x)) 
        as.matrix(x)[subset, , drop = FALSE]
    if (is.list(covmat)) {
        if (anyNA(match(c("cov", "n.obs"), names(covmat)))) 
            stop("'covmat' is not a valid covariance list")
        cv <- covmat$cov
        n.obs <- covmat$n.obs
        cen <- covmat$center
    }
    else if (is.matrix(covmat)) {
        if (!missing(x)) 
            warning("both 'x' and 'covmat' were supplied: 'x' will be ignored")
        cv <- covmat
        n.obs <- NA
        cen <- NULL
    }
    else if (is.null(covmat)) {
        dn <- dim(z)
        if (dn[1L] < dn[2L]) 
            stop("'princomp' can only be used with more units than variables")
        covmat <- cov.wt(z)
        n.obs <- covmat$n.obs
        cv <- covmat$cov * (1 - 1/n.obs)
        cen <- covmat$center
    }
    else stop("'covmat' is of unknown type")
    if (!is.numeric(cv)) 
        stop("PCA applies only to numerical variables")
    if (cor) {
        sds <- sqrt(diag(cv))
        if (any(sds == 0)) 
            stop("cannot use 'cor = TRUE' with a constant variable")
        cv <- cv/(sds %o% sds)
    }
    edc <- eigen(cv, symmetric = TRUE)
    ev <- edc$values
    if (any(neg <- ev < 0)) {
        if (any(ev[neg] < -9 * .Machine$double.eps * ev[1L])) 
            stop("covariance matrix is not non-negative definite")
        else ev[neg] <- 0
    }
    cn <- paste0("Comp.", 1L:ncol(cv))
    names(ev) <- cn
    dimnames(edc$vectors) <- if (missing(x)) 
        list(dimnames(cv)[[2L]], cn)
    else list(dimnames(x)[[2L]], cn)
    sdev <- sqrt(ev)
    sc <- setNames(if (cor) 
        sds
    else rep.int(1, ncol(cv)), colnames(cv))
    fix <- if (fix_sign) 
        function(A) {
            mysign <- function(x) ifelse(x < 0, -1, 1)
            A[] <- apply(A, 2L, function(x) x * mysign(x[1L]))
            A
        }
    else identity
    ev <- fix(edc$vectors)
    scr <- if (scores && !missing(x) && !is.null(cen)) 
        scale(z, center = cen, scale = sc) %*% ev
    if (is.null(cen)) 
        cen <- rep(NA_real_, nrow(cv))
    edc <- list(sdev = sdev, loadings = structure(ev, class = "loadings"), 
        center = cen, scale = sc, n.obs = n.obs, scores = scr, 
        call = cl)
    class(edc) <- "princomp"
    edc
}
