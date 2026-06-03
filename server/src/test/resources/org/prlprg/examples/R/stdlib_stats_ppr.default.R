#? stdlib
`ppr.default` <- function (x, y, weights = rep(1, n), ww = rep(1, q), nterms, 
    max.terms = nterms, optlevel = 2, sm.method = c("supsmu", 
        "spline", "gcvspline"), bass = 0, span = 0, df = 5, gcvpen = 1, 
    trace = FALSE, ...) 
{
    call <- match.call()
    call[[1L]] <- as.name("ppr")
    sm.method <- match.arg(sm.method)
    ism <- switch(sm.method, supsmu = 0L, spline = 1L, gcvspline = 2L)
    if (trace) 
        ism <- -(ism + 1L)
    if (missing(nterms)) 
        stop("'nterms' is missing with no default")
    mu <- nterms
    ml <- max.terms
    x <- as.matrix(x)
    y <- as.matrix(y)
    if (!is.numeric(x) || !is.numeric(y)) 
        stop("'ppr' applies only to numerical variables")
    n <- nrow(x)
    if (nrow(y) != n) 
        stop("mismatched 'x' and 'y'")
    p <- ncol(x)
    q <- ncol(y)
    xnames <- if (!is.null(dimnames(x))) 
        dimnames(x)[[2L]]
    else paste0("X", 1L:p)
    ynames <- if (!is.null(dimnames(y))) 
        dimnames(y)[[2L]]
    else paste0("Y", 1L:q)
    msmod <- ml * (p + q + 2 * n) + q + 7 + ml + 1
    nsp <- n * (q + 15) + q + 3 * p
    ndp <- p * (p + 1)/2 + 6 * p
    .Fortran(C_setppr, as.double(span), as.double(bass), as.integer(optlevel), 
        as.integer(ism), as.double(df), as.double(gcvpen))
    Z <- .Fortran(C_smart, as.integer(ml), as.integer(mu), as.integer(p), 
        as.integer(q), as.integer(n), as.double(weights), as.double(t(x)), 
        as.double(t(y)), as.double(ww), smod = double(msmod), 
        as.integer(msmod), double(nsp), as.integer(nsp), double(ndp), 
        as.integer(ndp), edf = double(ml))
    smod <- Z$smod
    ys <- smod[q + 6]
    tnames <- paste("term", 1L:mu)
    alpha <- matrix(smod[q + 6L + 1L:(p * mu)], p, mu, dimnames = list(xnames, 
        tnames))
    beta <- matrix(smod[q + 6L + p * ml + 1L:(q * mu)], q, mu, 
        dimnames = list(ynames, tnames))
    fitted <- drop(matrix(.Fortran(C_pppred, as.integer(nrow(x)), 
        as.double(x), as.double(smod), y = double(nrow(x) * q), 
        double(2 * smod[4L]))$y, ncol = q, dimnames = dimnames(y)))
    jt <- q + 7 + ml * (p + q + 2 * n)
    gof <- smod[jt] * n * ys^2
    gofn <- smod[jt + 1L:ml] * n * ys^2
    jf <- q + 6 + ml * (p + q)
    smod <- smod[c(1L:(q + 6 + p * mu), q + 6 + p * ml + 1L:(q * 
        mu), jf + 1L:(mu * n), jf + ml * n + 1L:(mu * n))]
    smod[1L] <- mu
    structure(list(call = call, mu = mu, ml = ml, p = p, q = q, 
        gof = gof, gofn = gofn, df = df, edf = Z$edf[1L:mu], 
        xnames = xnames, ynames = ynames, alpha = drop(alpha), 
        beta = ys * drop(beta), yb = smod[5 + 1L:q], ys = ys, 
        fitted.values = fitted, residuals = drop(y - fitted), 
        smod = smod), class = "ppr")
}
