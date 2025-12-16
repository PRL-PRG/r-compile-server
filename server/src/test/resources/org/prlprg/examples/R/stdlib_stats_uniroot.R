#? stdlib
`uniroot` <- function (f, interval, ..., lower = min(interval), upper = max(interval), 
    f.lower = f(lower, ...), f.upper = f(upper, ...), extendInt = c("no", 
        "yes", "downX", "upX"), check.conv = FALSE, tol = .Machine$double.eps^0.25, 
    maxiter = 1000, trace = 0) 
{
    if (!missing(interval) && length(interval) != 2L) 
        stop("'interval' must be a vector of length 2")
    if (!is.numeric(lower) || !is.numeric(upper) || lower >= 
        upper) 
        stop("lower < upper  is not fulfilled")
    if (is.na(f.lower)) 
        stop("f.lower = f(lower) is NA")
    if (is.na(f.upper)) 
        stop("f.upper = f(upper) is NA")
    Sig <- switch(match.arg(extendInt), yes = NULL, downX = -1, 
        no = 0, upX = 1, stop("invalid 'extendInt'; please report"))
    truncate <- function(x) pmax.int(pmin(x, .Machine$double.xmax), 
        -.Machine$double.xmax)
    f.low. <- truncate(f.lower)
    f.upp. <- truncate(f.upper)
    doX <- (is.null(Sig) && f.low. * f.upp. > 0 || is.numeric(Sig) && 
        (Sig * f.low. > 0 || Sig * f.upp. < 0))
    if (doX) {
        if (trace) 
            cat(sprintf("search in [%g,%g]%s", lower, upper, 
                if (trace >= 2) 
                  "\n"
                else " ... "))
        Delta <- function(u) 0.01 * pmax(1e-04, abs(u))
        it <- 0L
        if (is.null(Sig)) {
            delta <- Delta(c(lower, upper))
            while (isTRUE(f.lower * f.upper > 0) && any(iF <- is.finite(c(lower, 
                upper)))) {
                if ((it <- it + 1L) > maxiter) 
                  stop(gettextf("no sign change found in %d iterations", 
                    it - 1), domain = NA)
                if (iF[1]) {
                  ol <- lower
                  of <- f.lower
                  if (is.na(f.lower <- f(lower <- lower - delta[1], 
                    ...))) {
                    lower <- ol
                    f.lower <- of
                    delta[1] <- delta[1]/4
                  }
                }
                if (iF[2]) {
                  ol <- upper
                  of <- f.upper
                  if (is.na(f.upper <- f(upper <- upper + delta[2], 
                    ...))) {
                    upper <- ol
                    f.upper <- of
                    delta[2] <- delta[2]/4
                  }
                }
                if (trace >= 2) 
                  cat(sprintf(" .. modified lower,upper: (%15g,%15g)\n", 
                    lower, upper))
                delta <- 2 * delta
            }
        }
        else {
            delta <- Delta(lower)
            while (isTRUE(Sig * f.lower > 0)) {
                if ((it <- it + 1L) > maxiter) 
                  stop(gettextf("no sign change found in %d iterations", 
                    it - 1), domain = NA)
                f.lower <- f(lower <- lower - delta, ...)
                if (trace >= 2) 
                  cat(sprintf(" .. modified lower: %g\n", lower))
                delta <- 2 * delta
            }
            delta <- Delta(upper)
            while (isTRUE(Sig * f.upper < 0)) {
                if ((it <- it + 1L) > maxiter) 
                  stop(gettextf("no sign change found in %d iterations", 
                    it - 1), domain = NA)
                f.upper <- f(upper <- upper + delta, ...)
                if (trace >= 2) 
                  cat(sprintf(" .. modified upper: %g\n", upper))
                delta <- 2 * delta
            }
        }
        if (trace && trace < 2) 
            cat(sprintf("extended to [%g, %g] in %d steps\n", 
                lower, upper, it))
    }
    if (!isTRUE(sign(f.lower) * sign(f.upper) <= 0)) 
        stop(if (doX) 
            "did not succeed extending the interval endpoints for f(lower) * f(upper) <= 0"
        else "f() values at end points not of opposite sign")
    if (doX && it) {
        f.low. <- truncate(f.lower)
        f.upp. <- truncate(f.upper)
    }
    if (check.conv) {
        val <- tryCatch(.External2(C_zeroin2, function(arg) f(arg, 
            ...), lower, upper, f.low., f.upp., tol, as.integer(maxiter)), 
            warning = function(w) w)
        if (inherits(val, "warning")) 
            stop("convergence problem in zero finding: ", conditionMessage(val))
    }
    else {
        val <- .External2(C_zeroin2, function(arg) f(arg, ...), 
            lower, upper, f.low., f.upp., tol, as.integer(maxiter))
    }
    iter <- as.integer(val[2L])
    if (iter < 0) {
        (if (check.conv) 
            stop
        else warning)(sprintf(ngettext(maxiter, "_NOT_ converged in %d iteration", 
            "_NOT_ converged in %d iterations"), maxiter), domain = NA)
        iter <- maxiter
    }
    if (doX) 
        iter <- iter + it
    else it <- NA_integer_
    list(root = val[1L], f.root = f(val[1L], ...), iter = iter, 
        init.it = it, estim.prec = val[3L])
}

# Examples\donttest{
require(utils) # for str

## some platforms hit zero exactly on the first step:
## if so the estimated precision is 2/3.
f <- function (x, a) x - a
str(xmin <- uniroot(f, c(0, 1), tol = 0.0001, a = 1/3))

## handheld calculator example: fixed point of cos(.):
uniroot(function(x) cos(x) - x, lower = -pi, upper = pi, tol = 1e-9)$root

str(uniroot(function(x) x*(x^2-1) + .5, lower = -2, upper = 2,
            tol = 0.0001))
str(uniroot(function(x) x*(x^2-1) + .5, lower = -2, upper = 2,
            tol = 1e-10))

## Find the smallest value x for which exp(x) > 0 (numerically):
r <- uniroot(function(x) 1e80*exp(x) - 1e-300, c(-1000, 0), tol = 1e-15)
str(r, digits.d = 15) # around -745, depending on the platform.

exp(r$root)     # = 0, but not for r$root * 0.999...
minexp <- r$root * (1 - 10*.Machine$double.eps)
exp(minexp)     # typically denormalized
}

##--- uniroot() with new interval extension + checking features: --------------

f1 <- function(x) (121 - x^2)/(x^2+1)
f2 <- function(x) exp(-x)*(x - 12)

try(uniroot(f1, c(0,10)))
try(uniroot(f2, c(0, 2)))
##--> error: f() .. end points not of opposite sign

## where as  'extendInt="yes"'  simply first enlarges the search interval:
u1 <- uniroot(f1, c(0,10),extendInt="yes", trace=1)
u2 <- uniroot(f2, c(0,2), extendInt="yes", trace=2)
stopifnot(all.equal(u1$root, 11, tolerance = 1e-5),
          all.equal(u2$root, 12, tolerance = 6e-6))

## The *danger* of interval extension:
## No way to find a zero of a positive function, but
## numerically, f(-|M|) becomes zero :
u3 <- uniroot(exp, c(0,2), extendInt="yes", trace=TRUE)

## Nonsense example (must give an error):
tools::assertCondition( uniroot(function(x) 1, 0:1, extendInt="yes"),
                       "error", verbose=TRUE)

## Convergence checking :
sinc <- function(x) ifelse(x == 0, 1, sin(x)/x)
curve(sinc, -6,18); abline(h=0,v=0, lty=3, col=adjustcolor("gray", 0.8))
tools::assertWarning(
uniroot(sinc, c(0,5), extendInt="yes", maxiter=4) #-> "just" a warning
 , verbose=TRUE)

## now with  check.conv=TRUE, must signal a convergence error :
tools::assertError(
uniroot(sinc, c(0,5), extendInt="yes", maxiter=4, check.conv=TRUE)
 , verbose=TRUE)

### Weibull cumulative hazard (example origin, Ravi Varadhan):
cumhaz <- function(t, a, b) b * (t/b)^a
froot <- function(x, u, a, b) cumhaz(x, a, b) - u

n <- 1000
u <- -log(runif(n))
a <- 1/2
b <- 1
## Find failure times
ru <- sapply(u, function(x)
   uniroot(froot, u=x, a=a, b=b, interval= c(1.e-14, 1e04),
           extendInt="yes")$root)
ru2 <- sapply(u, function(x)
   uniroot(froot, u=x, a=a, b=b, interval= c(0.01,  10),
           extendInt="yes")$root)
stopifnot(all.equal(ru, ru2, tolerance = 6e-6))

r1 <- uniroot(froot, u= 0.99, a=a, b=b, interval= c(0.01, 10),
             extendInt="up")
stopifnot(all.equal(0.99, cumhaz(r1$root, a=a, b=b)))

## An error if 'extendInt' assumes "wrong zero-crossing direction":
tools::assertError(
uniroot(froot, u= 0.99, a=a, b=b, interval= c(0.1, 10), extendInt="down")
 , verbose=TRUE)

