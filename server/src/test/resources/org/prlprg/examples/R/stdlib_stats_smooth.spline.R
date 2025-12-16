#? stdlib
`smooth.spline` <- function (x, y = NULL, w = NULL, df, spar = NULL, lambda = NULL, 
    cv = FALSE, all.knots = FALSE, nknots = .nknots.smspl, keep.data = TRUE, 
    df.offset = 0, penalty = 1, control.spar = list(), tol = 1e-06 * 
        IQR(x), keep.stuff = FALSE) 
{
    contr.sp <- list(low = -1.5, high = 1.5, tol = 1e-04, eps = 2e-08, 
        maxit = 500, trace = getOption("verbose"))
    contr.sp[names(control.spar)] <- control.spar
    ctrl.Num <- contr.sp[1:4]
    if (!all(vapply(ctrl.Num, is.numeric, NA)) || contr.sp$tol < 
        0 || contr.sp$eps <= 0 || contr.sp$maxit <= 0) 
        stop("invalid 'control.spar'")
    xy <- xy.coords(x, y, setLab = FALSE)
    y <- xy$y
    x <- xy$x
    if (!all(is.finite(c(x, y)))) 
        stop("missing or infinite values in inputs are not allowed")
    n <- length(x)
    if (is.na(n)) 
        stop("invalid number of points")
    no.wgts <- is.null(w)
    w <- if (no.wgts) 
        1
    else {
        if (n != length(w)) 
            stop("lengths of 'x' and 'w' must match")
        if (any(w < 0)) 
            stop("all weights should be non-negative")
        if (all(w == 0)) 
            stop("some weights should be positive")
        (w * sum(w > 0))/sum(w)
    }
    if (!is.finite(tol) || tol <= 0) 
        stop("'tol' must be strictly positive and finite")
    if (!match(keep.stuff, c(FALSE, TRUE))) 
        stop("invalid 'keep.stuff'")
    xx <- round((x - mean(x))/tol)
    uns.x <- is.unsorted(x)
    iOx <- if (uns.x) 
        sort.list(x)
    else TRUE
    xxs <- xx[iOx]
    nd <- c(TRUE, xxs[-n] < xxs[-1L])
    nx <- length(ux <- x[iOx][nd])
    if (nx <= 3L) 
        stop("need at least four unique 'x' values")
    if (nx == n) {
        ox <- if (uns.x) 
            (function(p) {
                p[p] <- seq_along(p)
                p
            })(iOx)
        else TRUE
        tmp <- cbind(w, w * y, w * y^2)[iOx, ]
    }
    else {
        ox <- match(xx, xxs[nd])
        tapply1 <- function(X, INDEX, FUN = NULL, ..., simplify = TRUE) {
            sapply(X = unname(split(X, INDEX)), FUN = FUN, ..., 
                simplify = simplify, USE.NAMES = FALSE)
        }
        tmp <- matrix(unlist(tapply1(seq_len(n), ox, if (length(w) == 
            1L) 
            function(i) c(length(i), sum(y[i]), sum(y[i]^2))
        else function(i) c(sum(w[i]), sum(w[i] * y[i]), sum(w[i] * 
            y[i]^2))), use.names = FALSE), ncol = 3, byrow = TRUE)
    }
    wbar <- tmp[, 1L]
    ybar <- tmp[, 2L]/ifelse(wbar > 0, wbar, 1)
    yssw <- sum(tmp[, 3L] - wbar * ybar^2)
    rm(iOx, xx, xxs, nd, tmp)
    if (is.na(cv <- as.logical(cv)) && !missing(df)) 
        stop("'cv' must not be NA when 'df' is specified")
    CV <- !is.na(cv) && cv
    if (CV && nx < n) 
        warning("cross-validation with non-unique 'x' values seems doubtful")
    r.ux <- ux[nx] - ux[1L]
    xbar <- (ux - ux[1L])/r.ux
    if (is.numeric(all.knots)) {
        if (is.unsorted(all.knots, strictly = TRUE)) 
            stop("Numeric 'all.knots' must be strictly increasing")
        if (!missing(nknots) && !is.null(nknots)) 
            warning("'all.knots' is vector of knots; 'nknots' specification is disregarded")
        nknots <- length(all.knots)
        if (0 < all.knots[1] || all.knots[nknots] < 1) 
            stop("numeric 'all.knots' must cover [0,1] (= the transformed data-range)")
        knot <- c(rep(all.knots[1], 3), all.knots, rep(all.knots[nknots], 
            3))
    }
    else {
        if (all.knots) {
            if (!missing(nknots) && !is.null(nknots)) 
                warning("'all.knots' is TRUE; 'nknots' specification is disregarded")
            nknots <- nx
        }
        else if (is.null(nknots)) 
            nknots <- .nknots.smspl(nx)
        else {
            if (is.function(nknots)) 
                nknots <- nknots(nx)
            else if (!is.numeric(nknots)) 
                stop("'nknots' must be numeric (in {1,..,n})")
            if (nknots < 1) 
                stop("'nknots' must be at least 1")
            else if (nknots > nx) 
                stop("cannot use more inner knots than unique 'x' values")
        }
        knot <- c(rep(xbar[1], 3), if (all.knots) xbar else xbar[seq.int(1, 
            nx, length.out = nknots)], rep(xbar[nx], 3))
    }
    nk <- nknots + 2L
    spar.is.lambda <- !missing(lambda)
    if (spar.is.lambda <- !missing(lambda)) {
        if (!missing(spar)) 
            stop("must not specify both 'spar' and 'lambda'")
        ispar <- 1L
    }
    else ispar <- if (is.null(spar) || missing(spar)) {
        if (contr.sp$trace) 
            -1L
        else 0L
    }
    else 1L
    spar <- if (spar.is.lambda) 
        as.double(lambda)
    else if (ispar == 1L) 
        as.double(spar)
    else double(1)
    if (length(spar) != 1) 
        stop("'spar' must be of length 1")
    icrit <- if (is.na(cv)) 
        0L
    else if (cv) 
        2L
    else 1L
    dofoff <- df.offset
    if (!missing(df)) {
        if (df > 1 && df <= nx) {
            icrit <- 3L
            dofoff <- df
        }
        else warning("not using invalid df; must have 1 < df <= n := #{unique x} = ", 
            nx)
    }
    iparms <- c(icrit = icrit, ispar = ispar, iter = as.integer(contr.sp$maxit), 
        spar.is.lambda)
    ans.names <- c("coef", "ty", "lev", "spar", "parms", "crit", 
        "iparms", "ier", if (keep.stuff) "scratch")
    fit <- .Fortran(C_rbart, as.double(penalty), as.double(dofoff), 
        x = as.double(xbar), y = as.double(ybar), w = as.double(wbar), 
        ssw = as.double(yssw), as.integer(nx), as.double(knot), 
        as.integer(nk), coef = double(nk), ty = double(nx), lev = double(if (is.na(cv)) 1L else nx), 
        crit = double(1), iparms = iparms, spar = spar, parms = c(unlist(ctrl.Num), 
            ratio = -1), scratch = double((17L + 1L) * nk + 1L), 
        ld4 = 4L, ldnk = 1L, ier = integer(1L))[ans.names]
    if (is.na(cv)) 
        lev <- df <- NA
    else {
        lev <- fit$lev
        df <- sum(lev)
        if (is.na(df)) 
            stop("NA lev[]; probably smoothing parameter 'spar' way too large!")
    }
    if (fit$ier > 0L) {
        offKind <- if (spar.is.lambda) 
            "extreme"
        else if (sml <- fit$spar < 0.5) 
            "small"
        else "large"
        wtxt <- paste("smoothing parameter value too", offKind)
        if (spar.is.lambda || sml) {
            stop(wtxt)
        }
        else {
            fit$ty <- rep(mean(y), nx)
            df <- 1
            warning(wtxt, "\nsetting df = 1  __use with care!__")
        }
    }
    cv.crit <- if (is.na(cv)) 
        NA
    else {
        r <- y - fit$ty[ox]
        if (cv) {
            ww <- wbar
            ww[ww == 0] <- 1
            r <- r/(1 - (lev[ox] * w)/ww[ox])
            if (no.wgts) 
                mean(r^2)
            else weighted.mean(r^2, w)
        }
        else (if (no.wgts) 
            mean(r^2)
        else weighted.mean(r^2, w))/(1 - (df.offset + penalty * 
            df)/n)^2
    }
    structure(list(x = ux, y = fit$ty, w = wbar, yin = ybar, 
        tol = tol, data = if (keep.data) list(x = x, y = y, w = w), 
        no.weights = no.wgts, n = n, lev = lev, cv = cv, cv.crit = cv.crit, 
        pen.crit = sum(wbar * (ybar - fit$ty)^2), crit = fit$crit, 
        df = df, spar = if (spar.is.lambda) NA else fit$spar, 
        ratio = if (spar.is.lambda) NA else fit$parms[["ratio"]], 
        lambda = fit$parms[["low"]], iparms = c(fit$iparms, errorI = if (fit$ier) fit$ier else NA), 
        auxM = if (keep.stuff) list(XWy = fit$scratch[seq_len(nk)], 
            XWX = fit$scratch[nk + seq_len(4 * nk)], Sigma = fit$scratch[5 * 
                nk + seq_len(4 * nk)], R = fit$scratch[9 * nk + 
                seq_len(4 * nk)]), fit = structure(list(knot = knot, 
            nk = nk, min = ux[1L], range = r.ux, coef = fit$coef), 
            class = "smooth.spline.fit"), call = match.call()), 
        class = "smooth.spline")
}

# Examples
require(graphics)
plot(dist ~ speed, data = cars, main = "data(cars)  &  smoothing splines")
cars.spl <- with(cars, smooth.spline(speed, dist))
cars.spl
## This example has duplicate points, so avoid cv = TRUE

  stopifnot(cars.spl $ w == table(cars$speed)) # weights = multiplicities
  utils::str(cars.spl, digits.d = 5, vec.len = 6)
  cars.spl$fit

lines(cars.spl, col = "blue")
ss10 <- smooth.spline(cars[,"speed"], cars[,"dist"], df = 10)
lines(ss10, lty = 2, col = "red")
legend(5,120,c(paste("default [C.V.] => df =",round(cars.spl$df,1)),
               "s( * , df = 10)"), col = c("blue","red"), lty = 1:2,
       bg = 'bisque')


## Residual (Tukey Anscombe) plot:
plot(residuals(cars.spl) ~ fitted(cars.spl))
abline(h = 0, col = "gray")

## consistency check:
stopifnot(all.equal(cars$dist,
                    fitted(cars.spl) + residuals(cars.spl)))
## The chosen inner knots in original x-scale :
with(cars.spl$fit, min + range * knot[-c(1:3, nk+1 +1:3)]) # == unique(cars$speed)

## Visualize the behavior of  .nknots.smspl()
nKnots <- Vectorize(.nknots.smspl) ; c.. <- adjustcolor("gray20",.5)
curve(nKnots, 1, 250, n=250)
abline(0,1, lty=2, col=c..); text(90,90,"y = x", col=c.., adj=-.25)
abline(h=100,lty=2); abline(v=200, lty=2)

n <- c(1:799, seq(800, 3490, by=10), seq(3500, 10000, by = 50))
plot(n, nKnots(n), type="l", main = "Vectorize(.nknots.smspl) (n)")
abline(0,1, lty=2, col=c..); text(180,180,"y = x", col=c..)
n0 <- c(50, 200, 800, 3200); c0 <- adjustcolor("blue3", .5)
lines(n0, nKnots(n0), type="h", col=c0)
axis(1, at=n0, line=-2, col.ticks=c0, col=NA, col.axis=c0)
axis(4, at=.nknots.smspl(10000), line=-.5, col=c..,col.axis=c.., las=1)

##-- artificial example
y18 <- c(1:3, 5, 4, 7:3, 2*(2:5), rep(10, 4))
xx  <- seq(1, length(y18), length.out = 201)
(s2   <- smooth.spline(y18)) # GCV
(s02  <- smooth.spline(y18, spar = 0.2))
(s02. <- smooth.spline(y18, spar = 0.2, cv = NA))
plot(y18, main = deparse(s2$call), col.main = 2)
lines(s2, col = "gray"); lines(predict(s2, xx), col = 2)
lines(predict(s02, xx), col = 3); mtext(deparse(s02$call), col = 3)

## Specifying 'lambda' instead of usual spar :
(s2. <- smooth.spline(y18, lambda = s2$lambda, tol = s2$tol))


stopifnot(identical(
    with(s2$fit, min + range * knot[-c(1:3, nk+1+1:3)]),
    as.numeric(1:18)),
    with(cars.spl$fit, min + range * knot[-c(1:3, nk+1+1:3)]) == unique(cars$speed))

nD <- c("spar", "ratio", "iparms", "call"); nn <- setdiff(names(s2), nD)
stopifnot(all.equal(s2[nn], s2.[nn], tolerance = 7e-7), # seen 6.86e-8
          all.equal(predict(s02 , xx),
		    predict(s02., xx), tolerance = 1e-15))

\donttest{
## The following shows the problematic behavior of 'spar' searching:
(s2  <- smooth.spline(y18, control =
                      list(trace = TRUE, tol = 1e-6, low = -1.5)))
(s2m <- smooth.spline(y18, cv = TRUE, control =
                      list(trace = TRUE, tol = 1e-6, low = -1.5)))
## both above do quite similarly (Df = 8.5 +- 0.2)
}
