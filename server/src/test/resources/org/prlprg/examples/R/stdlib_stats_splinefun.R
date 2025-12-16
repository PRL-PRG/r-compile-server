#? stdlib
`splinefun` <- function (x, y = NULL, method = c("fmm", "periodic", "natural", 
    "monoH.FC", "hyman"), ties = mean) 
{
    x <- regularize.values(x, y, ties, missing(ties))
    y <- x$y
    x <- x$x
    nx <- length(x)
    if (is.na(nx)) 
        stop(gettextf("invalid value of %s", "length(x)"), domain = NA)
    if (nx == 0) 
        stop("zero non-NA points")
    method <- match.arg(method)
    if (method == "periodic" && y[1L] != y[nx]) {
        warning("spline: first and last y values differ - using y[1L] for both")
        y[nx] <- y[1L]
    }
    if (method == "monoH.FC") {
        n1 <- nx - 1L
        dy <- y[-1L] - y[-nx]
        dx <- x[-1L] - x[-nx]
        Sx <- dy/dx
        m <- c(Sx[1L], (Sx[-1L] + Sx[-n1])/2, Sx[n1])
        m <- .Call(C_monoFC_m, m, Sx)
        return(splinefunH0(x0 = x, y0 = y, m = m, dx = dx))
    }
    iMeth <- match(method, c("periodic", "natural", "fmm", "monoH.FC", 
        "hyman"))
    if (iMeth == 5L) {
        dy <- diff(y)
        if (!(all(dy >= 0) || all(dy <= 0))) 
            stop("'y' must be increasing or decreasing")
    }
    z <- .Call(C_SplineCoef, min(3L, iMeth), x, y)
    if (iMeth == 5L) 
        z <- spl_coef_conv(hyman_filter(z))
    rm(x, y, nx, method, iMeth, ties)
    function(x, deriv = 0L) {
        deriv <- as.integer(deriv)
        if (deriv < 0L || deriv > 3L) 
            stop("'deriv' must be between 0 and 3")
        if (deriv > 0L) {
            z0 <- double(z$n)
            z[c("y", "b", "c")] <- switch(deriv, list(y = z$b, 
                b = 2 * z$c, c = 3 * z$d), list(y = 2 * z$c, 
                b = 6 * z$d, c = z0), list(y = 6 * z$d, b = z0, 
                c = z0))
            z[["d"]] <- z0
        }
        res <- .splinefun(x, z)
        if (deriv > 0 && z$method == 2 && any(ind <- x <= z$x[1L])) 
            res[ind] <- ifelse(deriv == 1, z$y[1L], 0)
        res
    }
}

# Examples
require(graphics)

op <- par(mfrow = c(2,1), mgp = c(2,.8,0), mar = 0.1+c(3,3,3,1))
n <- 9
x <- 1:n
y <- rnorm(n)
plot(x, y, main = paste("spline[fun](.) through", n, "points"))
lines(spline(x, y))
lines(spline(x, y, n = 201), col = 2)

y <- (x-6)^2
plot(x, y, main = "spline(.) -- 3 methods")
lines(spline(x, y, n = 201), col = 2)
lines(spline(x, y, n = 201, method = "natural"), col = 3)
lines(spline(x, y, n = 201, method = "periodic"), col = 4)
legend(6, 25, c("fmm","natural","periodic"), col = 2:4, lty = 1)

y <- sin((x-0.5)*pi)
f <- splinefun(x, y)
ls(envir = environment(f))
splinecoef <- get("z", envir = environment(f))
curve(f(x), 1, 10, col = "green", lwd = 1.5)
points(splinecoef, col = "purple", cex = 2)
curve(f(x, deriv = 1), 1, 10, col = 2, lwd = 1.5)
curve(f(x, deriv = 2), 1, 10, col = 2, lwd = 1.5, n = 401)
curve(f(x, deriv = 3), 1, 10, col = 2, lwd = 1.5, n = 401)
par(op)

## Manual spline evaluation --- demo the coefficients :
.x <- splinecoef$x
u <- seq(3, 6, by = 0.25)
(ii <- findInterval(u, .x))
dx <- u - .x[ii]
f.u <- with(splinecoef,
            y[ii] + dx*(b[ii] + dx*(c[ii] + dx* d[ii])))
stopifnot(all.equal(f(u), f.u))

## An example with ties (non-unique  x values):
set.seed(1); x <- round(rnorm(30), 1); y <- sin(pi * x) + rnorm(30)/10
plot(x, y, main = "spline(x,y)  when x has ties")
lines(spline(x, y, n = 201), col = 2)
## visualizes the non-unique ones:
tx <- table(x); mx <- as.numeric(names(tx[tx > 1]))
ry <- matrix(unlist(tapply(y, match(x, mx), range, simplify = FALSE)),
             ncol = 2, byrow = TRUE)
segments(mx, ry[, 1], mx, ry[, 2], col = "blue", lwd = 2)

## Another example with sorted x, but ties:
set.seed(8); x <- sort(round(rnorm(30), 1)); y <- round(sin(pi * x) + rnorm(30)/10, 3)
summary(diff(x) == 0) # -> 7 duplicated x-values
str(spline(x, y, n = 201, ties="ordered")) # all '$y' entries are NaN
## The default (ties=mean) is ok, but most efficient to use instead is
sxyo <- spline(x, y, n = 201, ties= list("ordered", mean))
sapply(sxyo, summary)# all fine now
plot(x, y, main = "spline(x,y, ties=list(\"ordered\", mean))  for when x has ties")
lines(sxyo, col="blue")

## An example of monotone interpolation
n <- 20
set.seed(11)
x. <- sort(runif(n)) ; y. <- cumsum(abs(rnorm(n)))
plot(x., y.)
curve(splinefun(x., y.)(x), add = TRUE, col = 2, n = 1001)
curve(splinefun(x., y., method = "monoH.FC")(x), add = TRUE, col = 3, n = 1001)
curve(splinefun(x., y., method = "hyman")   (x), add = TRUE, col = 4, n = 1001)
legend("topleft",
       paste0("splinefun( \"", c("fmm", "monoH.FC", "hyman"), "\" )"),
       col = 2:4, lty = 1, bty = "n")

## and one from Fritsch and Carlson (1980), Dougherty et al (1989)
x. <- c(7.09, 8.09, 8.19, 8.7, 9.2, 10, 12, 15, 20)
f <- c(0, 2.76429e-5, 4.37498e-2, 0.169183, 0.469428, 0.943740,
       0.998636, 0.999919, 0.999994)
s0 <- splinefun(x., f)
s1 <- splinefun(x., f, method = "monoH.FC")
s2 <- splinefun(x., f, method = "hyman")
plot(x., f, ylim = c(-0.2, 1.2))
curve(s0(x), add = TRUE, col = 2, n = 1001) -> m0
curve(s1(x), add = TRUE, col = 3, n = 1001)
curve(s2(x), add = TRUE, col = 4, n = 1001)
legend("right",
       paste0("splinefun( \"", c("fmm", "monoH.FC", "hyman"), "\" )"),
       col = 2:4, lty = 1, bty = "n")

## they seem identical, but are not quite:
xx <- m0$x
plot(xx, s1(xx) - s2(xx), type = "l",  col = 2, lwd = 2,
     main = "Difference   monoH.FC - hyman"); abline(h = 0, lty = 3)

x <- xx[xx < 10.2] ## full range: x <- xx .. does not show enough
ccol <- adjustcolor(2:4, 0.8)
matplot(x, cbind(s0(x, deriv = 2), s1(x, deriv = 2), s2(x, deriv = 2))^2,
        lwd = 2, col = ccol, type = "l", ylab = quote({{f*second}(x)}^2),
        main = expression({{f*second}(x)}^2 ~" for the three 'splines'"))
legend("topright",
       paste0("splinefun( \"", c("fmm", "monoH.FC", "hyman"), "\" )"),
       lwd = 2, col  =  ccol, lty = 1:3, bty = "n")
## --> "hyman" has slightly smaller  Integral f''(x)^2 dx  than "FC",
## here, and both are 'much worse' than the regular fmm spline.

