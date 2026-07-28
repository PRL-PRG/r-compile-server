#? stdlib
`simulate.lm` <- function (object, nsim = 1, seed = NULL, ...) 
{
    if (!exists(".Random.seed", envir = .GlobalEnv, inherits = FALSE)) 
        runif(1)
    if (is.null(seed)) 
        RNGstate <- get(".Random.seed", envir = .GlobalEnv)
    else {
        R.seed <- get(".Random.seed", envir = .GlobalEnv)
        set.seed(seed)
        RNGstate <- structure(seed, kind = as.list(RNGkind()))
        on.exit(assign(".Random.seed", R.seed, envir = .GlobalEnv))
    }
    fam <- if (isGlm <- inherits(object, "glm")) 
        object$family$family
    else "gaussian"
    ftd <- fitted(object)
    isMlm <- identical(fam, "gaussian") && is.matrix(ftd)
    nm <- if (isMlm) 
        dimnames(ftd)
    else names(ftd)
    if (isMlm) 
        stop("simulate() is not yet implemented for multivariate lm()")
    n <- length(ftd)
    ntot <- n * nsim
    val <- switch(fam, gaussian = {
        vars <- deviance(object)/df.residual(object)
        if (isMlm) {
        } else {
            if (isGlm) {
                if (!is.null(object$prior.weights)) vars <- vars/object$prior.weights
            } else if (!(is.null(w <- object$weights) || (length(w) == 
                1L && w == 1))) vars <- vars/w
            ftd + rnorm(ntot, sd = sqrt(vars))
        }
    }, if (!is.null(object$family$simulate)) object$family$simulate(object, 
        nsim) else stop(gettextf("family '%s' not implemented", 
        fam), domain = NA))
    if (isMlm) {
    }
    else if (!is.list(val)) {
        dim(val) <- c(n, nsim)
        val <- as.data.frame(val)
    }
    else class(val) <- "data.frame"
    names(val) <- paste0("sim_", seq_len(nsim))
    if (!is.null(nm)) 
        row.names(val) <- nm
    attr(val, "seed") <- RNGstate
    val
}
