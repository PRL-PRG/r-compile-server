#? stdlib
`simpleLoess` <- function (y, x, weights, span = 0.75, degree = 2L, parametric = FALSE, 
    drop.square = FALSE, normalize = TRUE, statistics = "approximate", 
    surface = "interpolate", cell, iterations, iterTrace, trace.hat) 
{
    D <- as.integer(NCOL(x))
    if (is.na(D)) 
        stop("invalid NCOL(X)")
    if (D > 4) 
        stop("only 1-4 predictors are allowed")
    N <- as.integer(NROW(x))
    if (is.na(N)) 
        stop("invalid NROW(X)")
    if (!N || !D) 
        stop("invalid 'x'")
    if (length(y) != N) 
        stop("invalid 'y'")
    x <- as.matrix(x)
    storage.mode(x) <- "double"
    storage.mode(y) <- "double"
    storage.mode(weights) <- "double"
    max.kd <- max(N, 200L)
    robust <- rep_len(1, N)
    if (normalize && D > 1L) {
        trim <- ceiling(0.1 * N)
        divisor <- sqrt(apply(apply(x, 2L, sort)[seq(trim + 1, 
            N - trim), , drop = FALSE], 2L, var))
        x <- x/rep(divisor, rep_len(N, D))
    }
    else divisor <- 1
    sum.drop.sqr <- sum(drop.square)
    sum.parametric <- sum(parametric)
    nonparametric <- sum(!parametric)
    order.parametric <- order(parametric)
    x <- x[, order.parametric]
    order.drop.sqr <- (2L - drop.square)[order.parametric]
    if (degree == 1L && sum.drop.sqr) 
        stop("specified the square of a factor predictor to be dropped when degree = 1")
    if (D == 1L && sum.drop.sqr) 
        stop("specified the square of a predictor to be dropped with only one numeric predictor")
    if (sum.parametric == D) 
        stop("specified parametric for all predictors")
    if (length(span) != 1L) 
        stop("invalid argument 'span'")
    if (length(cell) != 1L) 
        stop("invalid argument 'cell'")
    if (length(degree) != 1L) 
        stop("invalid argument 'degree'")
    if (surface == "interpolate" && statistics == "approximate") 
        statistics <- if (trace.hat == "exact") 
            "1.approx"
        else "2.approx"
    surf.stat <- paste(surface, statistics, sep = "/")
    do.rob <- (iterations > 1L)
    if (!do.rob && iterTrace) {
        warning(sprintf(gettext("iterTrace = %d is not obeyed since iterations = %d"), 
            iterTrace, iterations))
        iterTrace <- FALSE
    }
    no.st <- (statistics == "none")
    if (iterTrace) 
        wRSS <- NA
    for (j in seq_len(iterations)) {
        no.st <- (statistics == "none")
        z <- .C(C_loess_raw, y, x, if (no.st) 1 else weights, 
            if (no.st) weights * robust else 1, D, N, as.double(span), 
            as.integer(degree), as.integer(nonparametric), as.integer(order.drop.sqr), 
            as.integer(sum.drop.sqr), as.double(span * cell), 
            as.character(surf.stat), fitted.values = double(N), 
            parameter = integer(7L), a = integer(max.kd), xi = double(max.kd), 
            vert = double(2L * D), vval = double((D + 1L) * max.kd), 
            diagonal = double(N), trL = double(1L), delta1 = double(1L), 
            delta2 = double(1L), as.integer(surf.stat == "interpolate/exact"))
        fitted <- z$fitted.values
        fitted.residuals <- y - fitted
        if (j < iterations) {
            if (iterTrace) 
                old.rob <- robust
            robust <- .Fortran(C_lowesw, fitted.residuals, N, 
                robust = double(N), integer(N))$robust
        }
        if (j == 1) {
            trace.hat.out <- z$trL
            one.delta <- z$delta1
            two.delta <- z$delta2
            if (do.rob) {
                statistics <- "none"
                surf.stat <- paste(surface, statistics, sep = "/")
                no.st <- TRUE
            }
        }
        if (iterTrace) {
            oSS <- wRSS
            wRSS <- sum(weights * fitted.residuals^2)
            del.SS <- abs(oSS - wRSS)/(if (wRSS == 0) 
                1
            else wRSS)
            d.rob.w <- if (j < iterations) 
                sum(abs(old.rob - robust))/sum(robust)
            else NA
            cat(sprintf("iter.%2d: wRSS=%#14.9g, rel. changes: (SS=%#9.4g, rob.wgts=%#9.4g)\n", 
                j, wRSS, del.SS, d.rob.w))
            if (iterTrace >= 2 && j < iterations) {
                cat("robustness weights:\n")
                print(quantile(robust, probs = (0:8)/8), digits = 3)
            }
        }
    }
    if (surface == "interpolate") {
        pars <- setNames(z$parameter, c("d", "n", "vc", "nc", 
            "nv", "liv", "lv"))
        enough <- (D + 1L) * pars[["nv"]]
        fit.kd <- list(parameter = pars, a = z$a[1L:pars[4L]], 
            xi = z$xi[1L:pars[4L]], vert = z$vert, vval = z$vval[1L:enough])
    }
    if (do.rob) {
        pseudovalues <- .Fortran(C_lowesp, N, as.double(y), fitted, 
            as.double(weights), as.double(robust), integer(N), 
            pseudovalues = double(N))$pseudovalues
        zz <- .C(C_loess_raw, pseudovalues, x, weights, weights, 
            D, N, as.double(span), as.integer(degree), as.integer(nonparametric), 
            as.integer(order.drop.sqr), as.integer(sum.drop.sqr), 
            as.double(span * cell), as.character(surf.stat), 
            fitted = double(N), parameter = integer(7L), a = integer(max.kd), 
            xi = double(max.kd), vert = double(2L * D), vval = double((D + 
                1L) * max.kd), diagonal = double(N), trL = double(1L), 
            delta1 = double(1L), delta2 = double(1L), 0L)[["fitted"]]
        pseudo.resid <- pseudovalues - zz
    }
    sum.squares <- if (do.rob) 
        sum(weights * pseudo.resid^2)
    else sum(weights * fitted.residuals^2)
    enp <- one.delta + 2 * trace.hat.out - N
    s <- sqrt(sum.squares/one.delta)
    structure(class = "loess", list(n = N, fitted = fitted, residuals = fitted.residuals, 
        enp = enp, s = s, one.delta = one.delta, two.delta = two.delta, 
        trace.hat = trace.hat.out, divisor = divisor, robust = robust, 
        pars = list(span = span, degree = degree, normalize = normalize, 
            parametric = parametric, drop.square = drop.square, 
            surface = surface, cell = cell, family = if (iterations <= 
                1L) "gaussian" else "symmetric", trace.hat = trace.hat, 
            iterations = iterations), kd = if (surface == "interpolate") fit.kd))
}
