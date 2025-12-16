#? stdlib
`HoltWinters` <- function (x, alpha = NULL, beta = NULL, gamma = NULL, seasonal = c("additive", 
    "multiplicative"), start.periods = 2, l.start = NULL, b.start = NULL, 
    s.start = NULL, optim.start = c(alpha = 0.3, beta = 0.1, 
        gamma = 0.1), optim.control = list()) 
{
    x <- as.ts(x)
    seasonal <- match.arg(seasonal)
    f <- frequency(x)
    if (!is.null(alpha) && (alpha == 0)) 
        stop("cannot fit models without level ('alpha' must not be 0 or FALSE)")
    if (!is.null(abg <- c(alpha, beta, gamma)) && any(abg < 0 | 
        abg > 1)) 
        stop("'alpha', 'beta' and 'gamma' must be within the unit interval")
    if (is.null(gamma) || gamma > 0) {
        if (seasonal == "multiplicative" && any(x == 0)) 
            stop("data must be non-zero for multiplicative Holt-Winters")
        if (start.periods < 2) 
            stop("need at least 2 periods to compute seasonal start values")
    }
    if (!is.null(gamma) && is.logical(gamma) && !gamma) {
        expsmooth <- !is.null(beta) && is.logical(beta) && !beta
        if (is.null(l.start)) 
            l.start <- if (expsmooth) 
                x[1L]
            else x[2L]
        if (is.null(b.start)) 
            if (is.null(beta) || !is.logical(beta) || beta) 
                b.start <- x[2L] - x[1L]
        start.time <- 3 - expsmooth
        s.start <- 0
    }
    else {
        start.time <- f + 1
        wind <- start.periods * f
        st <- decompose(ts(x[1L:wind], start = start(x), frequency = f), 
            seasonal)
        if (is.null(l.start) || is.null(b.start)) {
            dat <- na.omit(st$trend)
            cf <- coef(.lm.fit(x = cbind(1, seq_along(dat)), 
                y = dat))
            if (is.null(l.start)) 
                l.start <- cf[1L]
            if (is.null(b.start)) 
                b.start <- cf[2L]
        }
        if (is.null(s.start)) 
            s.start <- st$figure
    }
    lenx <- as.integer(length(x))
    if (is.na(lenx)) 
        stop("invalid length(x)")
    len <- lenx - start.time + 1
    hw <- function(alpha, beta, gamma) .C(C_HoltWinters, as.double(x), 
        lenx, as.double(max(min(alpha, 1), 0)), as.double(max(min(beta, 
            1), 0)), as.double(max(min(gamma, 1), 0)), as.integer(start.time), 
        as.integer(!+(seasonal == "multiplicative")), as.integer(f), 
        as.integer(!is.logical(beta) || beta), as.integer(!is.logical(gamma) || 
            gamma), a = as.double(l.start), b = as.double(b.start), 
        s = as.double(s.start), SSE = as.double(0), level = double(len + 
            1L), trend = double(len + 1L), seasonal = double(len + 
            f))
    if (is.null(gamma)) {
        if (is.null(alpha)) {
            if (is.null(beta)) {
                error <- function(p) hw(p[1L], p[2L], p[3L])$SSE
                sol <- optim(optim.start, error, method = "L-BFGS-B", 
                  lower = c(0, 0, 0), upper = c(1, 1, 1), control = optim.control)
                if (sol$convergence || any(sol$par < 0 | sol$par > 
                  1)) {
                  if (sol$convergence > 50) {
                    warning(gettextf("optimization difficulties: %s", 
                      sol$message), domain = NA)
                  }
                  else stop("optimization failure")
                }
                alpha <- sol$par[1L]
                beta <- sol$par[2L]
                gamma <- sol$par[3L]
            }
            else {
                error <- function(p) hw(p[1L], beta, p[2L])$SSE
                sol <- optim(c(optim.start["alpha"], optim.start["gamma"]), 
                  error, method = "L-BFGS-B", lower = c(0, 0), 
                  upper = c(1, 1), control = optim.control)
                if (sol$convergence || any(sol$par < 0 | sol$par > 
                  1)) {
                  if (sol$convergence > 50) {
                    warning(gettextf("optimization difficulties: %s", 
                      sol$message), domain = NA)
                  }
                  else stop("optimization failure")
                }
                alpha <- sol$par[1L]
                gamma <- sol$par[2L]
            }
        }
        else {
            if (is.null(beta)) {
                error <- function(p) hw(alpha, p[1L], p[2L])$SSE
                sol <- optim(c(optim.start["beta"], optim.start["gamma"]), 
                  error, method = "L-BFGS-B", lower = c(0, 0), 
                  upper = c(1, 1), control = optim.control)
                if (sol$convergence || any(sol$par < 0 | sol$par > 
                  1)) {
                  if (sol$convergence > 50) {
                    warning(gettextf("optimization difficulties: %s", 
                      sol$message), domain = NA)
                  }
                  else stop("optimization failure")
                }
                beta <- sol$par[1L]
                gamma <- sol$par[2L]
            }
            else {
                error <- function(p) hw(alpha, beta, p)$SSE
                gamma <- optimize(error, lower = 0, upper = 1)$minimum
            }
        }
    }
    else {
        if (is.null(alpha)) {
            if (is.null(beta)) {
                error <- function(p) hw(p[1L], p[2L], gamma)$SSE
                sol <- optim(c(optim.start["alpha"], optim.start["beta"]), 
                  error, method = "L-BFGS-B", lower = c(0, 0), 
                  upper = c(1, 1), control = optim.control)
                if (sol$convergence || any(sol$par < 0 | sol$par > 
                  1)) {
                  if (sol$convergence > 50) {
                    warning(gettextf("optimization difficulties: %s", 
                      sol$message), domain = NA)
                  }
                  else stop("optimization failure")
                }
                alpha <- sol$par[1L]
                beta <- sol$par[2L]
            }
            else {
                error <- function(p) hw(p, beta, gamma)$SSE
                alpha <- optimize(error, lower = 0, upper = 1)$minimum
            }
        }
        else {
            if (is.null(beta)) {
                error <- function(p) hw(alpha, p, gamma)$SSE
                beta <- optimize(error, lower = 0, upper = 1)$minimum
            }
        }
    }
    final.fit <- hw(alpha, beta, gamma)
    fitted <- ts(cbind(xhat = final.fit$level[-len - 1], level = final.fit$level[-len - 
        1], trend = if (!is.logical(beta) || beta) 
        final.fit$trend[-len - 1], season = if (!is.logical(gamma) || 
        gamma) 
        final.fit$seasonal[1L:len]), start = start(lag(x, k = 1 - 
        start.time)), frequency = frequency(x))
    if (!is.logical(beta) || beta) 
        fitted[, 1] <- fitted[, 1] + fitted[, "trend"]
    if (!is.logical(gamma) || gamma) 
        fitted[, 1] <- if (seasonal == "multiplicative") 
            fitted[, 1] * fitted[, "season"]
        else fitted[, 1] + fitted[, "season"]
    structure(list(fitted = fitted, x = x, alpha = alpha, beta = beta, 
        gamma = gamma, coefficients = c(a = final.fit$level[len + 
            1], b = if (!is.logical(beta) || beta) final.fit$trend[len + 
            1], s = if (!is.logical(gamma) || gamma) final.fit$seasonal[len + 
            1L:f]), seasonal = seasonal, SSE = final.fit$SSE, 
        call = match.call()), class = "HoltWinters")
}

# Examples
od <- options(digits = 5)
require(graphics)

## Seasonal Holt-Winters
(m <- HoltWinters(co2))
plot(m)
plot(fitted(m))

(m <- HoltWinters(AirPassengers, seasonal = "mult"))
plot(m)

## Non-Seasonal Holt-Winters
x <- uspop + rnorm(uspop, sd = 5)
m <- HoltWinters(x, gamma = FALSE)
plot(m)

## Exponential Smoothing
m2 <- HoltWinters(x, gamma = FALSE, beta = FALSE)
lines(fitted(m2)[,1], col = 3)
options(od)

