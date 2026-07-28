#? stdlib
`arima` <- function (x, order = c(0L, 0L, 0L), seasonal = list(order = c(0L, 
    0L, 0L), period = NA), xreg = NULL, include.mean = TRUE, 
    transform.pars = TRUE, fixed = NULL, init = NULL, method = c("CSS-ML", 
        "ML", "CSS"), n.cond, SSinit = c("Gardner1980", "Rossignol2011"), 
    optim.method = "BFGS", optim.control = list(), kappa = 1e+06) 
{
    "%+%" <- function(a, b) .Call(C_TSconv, a, b)
    SSinit <- match.arg(SSinit)
    SS.G <- SSinit == "Gardner1980"
    upARIMA <- function(mod, phi, theta) {
        p <- length(phi)
        q <- length(theta)
        mod$phi <- phi
        mod$theta <- theta
        r <- max(p, q + 1L)
        if (p > 0) 
            mod$T[1L:p, 1L] <- phi
        if (r > 1L) 
            mod$Pn[1L:r, 1L:r] <- if (SS.G) 
                .Call(C_getQ0, phi, theta)
            else .Call(C_getQ0bis, phi, theta, tol = 0)
        else mod$Pn[1L, 1L] <- if (p > 0) 
            1/(1 - phi^2)
        else 1
        mod$a[] <- 0
        mod
    }
    arimaSS <- function(y, mod) {
        .Call(C_ARIMA_Like, y, mod, 0L, TRUE)
    }
    armafn <- function(p, trans) {
        par <- coef
        par[mask] <- p
        trarma <- .Call(C_ARIMA_transPars, par, arma, trans)
        if (is.null(Z <- tryCatch(upARIMA(mod, trarma[[1L]], 
            trarma[[2L]]), error = function(e) NULL))) 
            return(.Machine$double.xmax)
        if (ncxreg > 0) 
            x <- x - xreg %*% par[narma + (1L:ncxreg)]
        res <- .Call(C_ARIMA_Like, x, Z, 0L, FALSE)
        s2 <- res[1L]/res[3L]
        0.5 * (log(s2) + res[2L]/res[3L])
    }
    armaCSS <- function(p) {
        par <- as.double(fixed)
        par[mask] <- p
        trarma <- .Call(C_ARIMA_transPars, par, arma, FALSE)
        if (ncxreg > 0) 
            x <- x - xreg %*% par[narma + (1L:ncxreg)]
        res <- .Call(C_ARIMA_CSS, x, arma, trarma[[1L]], trarma[[2L]], 
            as.integer(ncond), FALSE)
        0.5 * log(res)
    }
    arCheck <- function(ar) {
        p <- max(which(c(1, -ar) != 0)) - 1
        if (!p) 
            return(TRUE)
        all(Mod(polyroot(c(1, -ar[1L:p]))) > 1)
    }
    maInvert <- function(ma) {
        q <- length(ma)
        q0 <- max(which(c(1, ma) != 0)) - 1L
        if (!q0) 
            return(ma)
        roots <- polyroot(c(1, ma[1L:q0]))
        ind <- Mod(roots) < 1
        if (all(!ind)) 
            return(ma)
        if (q0 == 1) 
            return(c(1/ma[1L], rep.int(0, q - q0)))
        roots[ind] <- 1/roots[ind]
        x <- 1
        for (r in roots) x <- c(x, 0) - c(0, x)/r
        c(Re(x[-1L]), rep.int(0, q - q0))
    }
    series <- deparse1(substitute(x))
    if (NCOL(x) > 1L) 
        stop("only implemented for univariate time series")
    method <- match.arg(method)
    x <- as.ts(x)
    if (!is.numeric(x)) 
        stop("'x' must be numeric")
    storage.mode(x) <- "double"
    dim(x) <- NULL
    n <- length(x)
    if (!missing(order)) 
        if (!is.numeric(order) || length(order) != 3L || any(order < 
            0)) 
            stop("'order' must be a non-negative numeric vector of length 3")
    if (!missing(seasonal)) 
        if (is.list(seasonal)) {
            if (is.null(seasonal$order)) 
                stop("'seasonal' must be a list with component 'order'")
            if (!is.numeric(seasonal$order) || length(seasonal$order) != 
                3L || any(seasonal$order < 0L)) 
                stop("'seasonal$order' must be a non-negative numeric vector of length 3")
        }
        else if (is.numeric(order)) {
            if (length(order) == 3L) 
                seasonal <- list(order = seasonal)
            else ("'seasonal' is of the wrong length")
        }
        else stop("'seasonal' must be a list with component 'order'")
    if (is.null(seasonal$period) || is.na(seasonal$period) || 
        seasonal$period == 0) 
        seasonal$period <- frequency(x)
    arma <- as.integer(c(order[-2L], seasonal$order[-2L], seasonal$period, 
        order[2L], seasonal$order[2L]))
    narma <- sum(arma[1L:4L])
    xtsp <- tsp(x)
    tsp(x) <- NULL
    Delta <- 1
    for (i in seq_len(order[2L])) Delta <- Delta %+% c(1, -1)
    for (i in seq_len(seasonal$order[2L])) Delta <- Delta %+% 
        c(1, rep.int(0, seasonal$period - 1), -1)
    Delta <- -Delta[-1L]
    nd <- order[2L] + seasonal$order[2L]
    n.used <- sum(!is.na(x)) - length(Delta)
    if (is.null(xreg)) {
        ncxreg <- 0L
    }
    else {
        nmxreg <- deparse1(substitute(xreg))
        if (NROW(xreg) != n) 
            stop("lengths of 'x' and 'xreg' do not match")
        ncxreg <- NCOL(xreg)
        xreg <- as.matrix(xreg)
        storage.mode(xreg) <- "double"
    }
    class(xreg) <- NULL
    if (ncxreg > 0L && is.null(colnames(xreg))) 
        colnames(xreg) <- if (ncxreg == 1L) 
            nmxreg
        else paste0(nmxreg, 1L:ncxreg)
    if (include.mean && (nd == 0L)) {
        xreg <- cbind(intercept = rep(1, n), xreg = xreg)
        ncxreg <- ncxreg + 1L
    }
    if (method == "CSS-ML") {
        anyna <- anyNA(x)
        if (ncxreg) 
            anyna <- anyna || anyNA(xreg)
        if (anyna) 
            method <- "ML"
    }
    if (method == "CSS" || method == "CSS-ML") {
        ncond <- order[2L] + seasonal$order[2L] * seasonal$period
        ncond1 <- order[1L] + seasonal$period * seasonal$order[1L]
        ncond <- ncond + if (!missing(n.cond)) 
            max(n.cond, ncond1)
        else ncond1
    }
    else ncond <- 0
    if (is.null(fixed)) 
        fixed <- rep(NA_real_, narma + ncxreg)
    else if (length(fixed) != narma + ncxreg) 
        stop("wrong length for 'fixed'")
    mask <- is.na(fixed)
    no.optim <- !any(mask)
    if (no.optim) 
        transform.pars <- FALSE
    if (transform.pars) {
        ind <- arma[1L] + arma[2L] + seq_len(arma[3L])
        if (any(!mask[seq_len(arma[1L])]) || any(!mask[ind])) {
            warning("some AR parameters were fixed: setting transform.pars = FALSE")
            transform.pars <- FALSE
        }
    }
    init0 <- rep.int(0, narma)
    parscale <- rep(1, narma)
    if (ncxreg) {
        cn <- colnames(xreg)
        orig.xreg <- (ncxreg == 1L) || any(!mask[narma + 1L:ncxreg])
        if (!orig.xreg) {
            S <- svd(na.omit(xreg))
            xreg <- xreg %*% S$v
        }
        dx <- x
        dxreg <- xreg
        if (order[2L] > 0L) {
            dx <- diff(dx, 1L, order[2L])
            dxreg <- diff(dxreg, 1L, order[2L])
        }
        if (seasonal$period > 1L && seasonal$order[2L] > 0) {
            dx <- diff(dx, seasonal$period, seasonal$order[2L])
            dxreg <- diff(dxreg, seasonal$period, seasonal$order[2L])
        }
        fit <- if (length(dx) > ncol(dxreg)) 
            lm(dx ~ dxreg - 1, na.action = na.omit)
        else list(rank = 0L)
        if (fit$rank == 0L) {
            fit <- lm(x ~ xreg - 1, na.action = na.omit)
        }
        isna <- is.na(x) | apply(xreg, 1L, anyNA)
        n.used <- sum(!isna) - length(Delta)
        init0 <- c(init0, coef(fit))
        ses <- summary(fit)$coefficients[, 2L]
        parscale <- c(parscale, 10 * ses)
    }
    if (n.used <= 0) 
        stop("too few non-missing observations")
    if (!is.null(init)) {
        if (length(init) != length(init0)) 
            stop("'init' is of the wrong length")
        if (any(ind <- is.na(init))) 
            init[ind] <- init0[ind]
        if (method == "ML") {
            if (arma[1L] > 0) 
                if (!arCheck(init[1L:arma[1L]])) 
                  stop("non-stationary AR part")
            if (arma[3L] > 0) 
                if (!arCheck(init[sum(arma[1L:2L]) + 1L:arma[3L]])) 
                  stop("non-stationary seasonal AR part")
            if (transform.pars) 
                init <- .Call(C_ARIMA_Invtrans, as.double(init), 
                  arma)
        }
    }
    else init <- init0
    coef <- as.double(fixed)
    if (!("parscale" %in% names(optim.control))) 
        optim.control$parscale <- parscale[mask]
    if (method == "CSS") {
        res <- if (no.optim) 
            list(convergence = 0L, par = numeric(), value = armaCSS(numeric()))
        else optim(init[mask], armaCSS, method = optim.method, 
            hessian = TRUE, control = optim.control)
        if (res$convergence > 0) 
            warning(gettextf("possible convergence problem: optim gave code = %d", 
                res$convergence), domain = NA)
        coef[mask] <- res$par
        trarma <- .Call(C_ARIMA_transPars, coef, arma, FALSE)
        mod <- makeARIMA(trarma[[1L]], trarma[[2L]], Delta, kappa, 
            SSinit)
        if (ncxreg > 0) 
            x <- x - xreg %*% coef[narma + (1L:ncxreg)]
        arimaSS(x, mod)
        val <- .Call(C_ARIMA_CSS, x, arma, trarma[[1L]], trarma[[2L]], 
            as.integer(ncond), TRUE)
        sigma2 <- val[[1L]]
        var <- if (no.optim) 
            numeric()
        else solve(res$hessian * n.used)
    }
    else {
        if (method == "CSS-ML") {
            res <- if (no.optim) 
                list(convergence = 0L, par = numeric(), value = armaCSS(numeric()))
            else optim(init[mask], armaCSS, method = optim.method, 
                hessian = FALSE, control = optim.control)
            if (res$convergence == 0) 
                init[mask] <- res$par
            if (arma[1L] > 0) 
                if (!arCheck(init[1L:arma[1L]])) 
                  stop("non-stationary AR part from CSS")
            if (arma[3L] > 0) 
                if (!arCheck(init[sum(arma[1L:2L]) + 1L:arma[3L]])) 
                  stop("non-stationary seasonal AR part from CSS")
            ncond <- 0L
        }
        if (transform.pars) {
            init <- .Call(C_ARIMA_Invtrans, init, arma)
            if (arma[2L] > 0) {
                ind <- arma[1L] + 1L:arma[2L]
                init[ind] <- maInvert(init[ind])
            }
            if (arma[4L] > 0) {
                ind <- sum(arma[1L:3L]) + 1L:arma[4L]
                init[ind] <- maInvert(init[ind])
            }
        }
        trarma <- .Call(C_ARIMA_transPars, init, arma, transform.pars)
        mod <- makeARIMA(trarma[[1L]], trarma[[2L]], Delta, kappa, 
            SSinit)
        res <- if (no.optim) 
            list(convergence = 0, par = numeric(), value = armafn(numeric(), 
                as.logical(transform.pars)))
        else optim(init[mask], armafn, method = optim.method, 
            hessian = TRUE, control = optim.control, trans = as.logical(transform.pars))
        if (res$convergence > 0) 
            warning(gettextf("possible convergence problem: optim gave code = %d", 
                res$convergence), domain = NA)
        coef[mask] <- res$par
        if (transform.pars) {
            if (arma[2L] > 0L) {
                ind <- arma[1L] + 1L:arma[2L]
                if (all(mask[ind])) 
                  coef[ind] <- maInvert(coef[ind])
            }
            if (arma[4L] > 0L) {
                ind <- sum(arma[1L:3L]) + 1L:arma[4L]
                if (all(mask[ind])) 
                  coef[ind] <- maInvert(coef[ind])
            }
            if (any(coef[mask] != res$par)) {
                oldcode <- res$convergence
                res <- optim(coef[mask], armafn, method = optim.method, 
                  hessian = TRUE, control = list(maxit = 0L, 
                    parscale = optim.control$parscale), trans = TRUE)
                res$convergence <- oldcode
                coef[mask] <- res$par
            }
            A <- .Call(C_ARIMA_Gradtrans, as.double(coef), arma)
            A <- A[mask, mask]
            var <- crossprod(A, solve(res$hessian * n.used, A))
            coef <- .Call(C_ARIMA_undoPars, coef, arma)
        }
        else var <- if (no.optim) 
            numeric()
        else solve(res$hessian * n.used)
        trarma <- .Call(C_ARIMA_transPars, coef, arma, FALSE)
        mod <- makeARIMA(trarma[[1L]], trarma[[2L]], Delta, kappa, 
            SSinit)
        val <- if (ncxreg > 0L) 
            arimaSS(x - xreg %*% coef[narma + (1L:ncxreg)], mod)
        else arimaSS(x, mod)
        sigma2 <- val[[1L]][1L]/n.used
    }
    value <- 2 * n.used * res$value + n.used + n.used * log(2 * 
        pi)
    aic <- if (method != "CSS") 
        value + 2 * sum(mask) + 2
    else NA
    nm <- NULL
    if (arma[1L] > 0L) 
        nm <- c(nm, paste0("ar", 1L:arma[1L]))
    if (arma[2L] > 0L) 
        nm <- c(nm, paste0("ma", 1L:arma[2L]))
    if (arma[3L] > 0L) 
        nm <- c(nm, paste0("sar", 1L:arma[3L]))
    if (arma[4L] > 0L) 
        nm <- c(nm, paste0("sma", 1L:arma[4L]))
    if (ncxreg > 0L) {
        nm <- c(nm, cn)
        if (!orig.xreg) {
            ind <- narma + 1L:ncxreg
            coef[ind] <- S$v %*% coef[ind]
            A <- diag(narma + ncxreg)
            A[ind, ind] <- S$v
            A <- A[mask, mask]
            var <- A %*% var %*% t(A)
        }
    }
    names(coef) <- nm
    if (!no.optim) 
        dimnames(var) <- list(nm[mask], nm[mask])
    resid <- val[[2L]]
    tsp(resid) <- xtsp
    class(resid) <- "ts"
    structure(list(coef = coef, sigma2 = sigma2, var.coef = var, 
        mask = mask, loglik = -0.5 * value, aic = aic, arma = arma, 
        residuals = resid, call = match.call(), series = series, 
        code = res$convergence, n.cond = ncond, nobs = n.used, 
        model = mod), class = "Arima")
}

# Examples
arima(lh, order = c(1,0,0))
arima(lh, order = c(3,0,0))
arima(lh, order = c(1,0,1))

arima(lh, order = c(3,0,0), method = "CSS")

arima(USAccDeaths, order = c(0,1,1), seasonal = list(order = c(0,1,1)))
arima(USAccDeaths, order = c(0,1,1), seasonal = list(order = c(0,1,1)),
      method = "CSS") # drops first 13 observations.
# for a model with as few years as this, we want full ML

arima(LakeHuron, order = c(2,0,0), xreg = time(LakeHuron) - 1920)

## presidents contains NAs
## graphs in example(acf) suggest order 1 or 3
require(graphics)
(fit1 <- arima(presidents, c(1, 0, 0)))
nobs(fit1)
tsdiag(fit1)
(fit3 <- arima(presidents, c(3, 0, 0)))  # smaller AIC
tsdiag(fit3)
BIC(fit1, fit3)
## compare a whole set of models; BIC() would choose the smallest
AIC(fit1, arima(presidents, c(2,0,0)),
          arima(presidents, c(2,0,1)), # <- chosen (barely) by AIC
    fit3, arima(presidents, c(3,0,1)))

## An example of using the  'fixed'  argument:
## Note that the period of the seasonal component is taken to be
## frequency(presidents), i.e. 4.
(fitSfx <- arima(presidents, order=c(2,0,1), seasonal=c(1,0,0),
                 fixed=c(NA, NA, 0.5, -0.1, 50), transform.pars=FALSE))
## The partly-fixed & smaller model seems better (as we "knew too much"):
AIC(fitSfx, arima(presidents, order=c(2,0,1), seasonal=c(1,0,0)))

## An example of ARIMA forecasting:
predict(fit3, 3)

