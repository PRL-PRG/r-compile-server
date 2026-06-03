#? stdlib
`integrate` <- function (f, lower, upper, ..., subdivisions = 100L, rel.tol = .Machine$double.eps^0.25, 
    abs.tol = rel.tol, stop.on.error = TRUE, keep.xy = FALSE, 
    aux = NULL) 
{
    f <- match.fun(f)
    ff <- function(x) f(x, ...)
    limit <- as.integer(subdivisions)
    if (limit < 1L || (abs.tol <= 0 && rel.tol < max(50 * .Machine$double.eps, 
        5e-29))) 
        stop("invalid parameter values")
    stopifnot(length(lower) == 1, length(upper) == 1)
    if (is.finite(lower) && is.finite(upper)) {
        wk <- .External(C_call_dqags, ff, rho = environment(), 
            as.double(lower), as.double(upper), as.double(abs.tol), 
            as.double(rel.tol), limit = limit)
    }
    else {
        if (is.na(lower) || is.na(upper)) 
            stop("a limit is NA or NaN")
        if (is.finite(lower)) {
            inf <- 1L
            bound <- lower
        }
        else if (is.finite(upper)) {
            inf <- -1L
            bound <- upper
        }
        else {
            inf <- 2L
            bound <- 0
        }
        wk <- .External(C_call_dqagi, ff, rho = environment(), 
            as.double(bound), inf, as.double(abs.tol), as.double(rel.tol), 
            limit = limit)
    }
    res <- wk[c("value", "abs.error", "subdivisions")]
    res$message <- switch(wk$ierr + 1L, "OK", "maximum number of subdivisions reached", 
        "roundoff error was detected", "extremely bad integrand behaviour", 
        "roundoff error is detected in the extrapolation table", 
        "the integral is probably divergent", "the input is invalid")
    if (wk$ierr == 6L || (wk$ierr > 0L && stop.on.error)) 
        stop(res$message)
    res$call <- match.call()
    class(res) <- "integrate"
    res
}

# Examples
integrate(dnorm, -1.96, 1.96)
integrate(dnorm, -Inf, Inf)

## a slowly-convergent integral
integrand <- function(x) {1/((x+1)*sqrt(x))}
integrate(integrand, lower = 0, upper = Inf)

## don't do this if you really want the integral from 0 to Inf
integrate(integrand, lower = 0, upper = 10)
integrate(integrand, lower = 0, upper = 100000)
integrate(integrand, lower = 0, upper = 1000000, stop.on.error = FALSE)

## some functions do not handle vector input properly
f <- function(x) 2.0
try(integrate(f, 0, 1))
integrate(Vectorize(f), 0, 1)  ## correct
integrate(function(x) rep(2.0, length(x)), 0, 1)  ## correct

## integrate can fail if misused
integrate(dnorm, 0, 2)
integrate(dnorm, 0, 20)
integrate(dnorm, 0, 200)
integrate(dnorm, 0, 2000)
integrate(dnorm, 0, 20000) ## fails on many systems
integrate(dnorm, 0, Inf)   ## works
tools::assertError(
integrate(dnorm, 0:1, 20) #-> error!
## "silently" gave  integrate(dnorm, 0, 20)  in earlier versions of R
 , verbose=TRUE)

