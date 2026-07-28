#? stdlib
`SSfpl` <- structure(function (input, A, B, xmid, scal) 
{
    .expr1 <- B - A
    .expr2 <- xmid - input
    .expr4 <- exp(.e2 <- .expr2/scal)
    .expr5 <- 1 + .expr4
    .value <- A + .expr1/.expr5
    .actualArgs <- as.list(match.call()[c("A", "B", "xmid", "scal")])
    if (all(vapply(.actualArgs, is.name, NA))) {
        .expr8 <- 1/.expr5
        .expr13 <- .expr5^2
        .grad <- array(0, c(length(.value), 4L), list(NULL, c("A", 
            "B", "xmid", "scal")))
        .grad[, "A"] <- 1 - .expr8
        .grad[, "B"] <- .expr8
        .grad[, "xmid"] <- -(xm <- .expr1 * .expr4/scal/.expr13)
        .grad[, "scal"] <- xm * .e2
        dimnames(.grad) <- list(NULL, .actualArgs)
        attr(.value, "gradient") <- .grad
    }
    .value
}, initial = function (mCall, data, LHS, ...) 
{
    xy <- sortedXyData(mCall[["input"]], LHS, data)
    if (nrow(xy) < 5) {
        stop("too few distinct input values to fit a four-parameter logistic")
    }
    rng <- range(xy$y)
    drng <- diff(rng)
    xy$prop <- (xy$y - rng[1L] + 0.05 * drng)/(1.1 * drng)
    ir <- as.vector(coef(lm(x ~ I(log(prop/(1 - prop))), data = xy)))
    pars <- as.vector(coef(nls(y ~ cbind(1, 1/(1 + exp((xmid - 
        x)/exp(lscal)))), data = xy, start = list(xmid = ir[1L], 
        lscal = log(abs(ir[2L]))), algorithm = "plinear", ...)))
    setNames(c(pars[3L], pars[3L] + pars[4L], pars[1L], exp(pars[2L])), 
        nm = mCall[c("A", "B", "xmid", "scal")])
}, pnames = c("A", "B", "xmid", "scal"), class = "selfStart")

# Examples
Chick.1 <- ChickWeight[ChickWeight$Chick == 1, ]
SSfpl(Chick.1$Time, 13, 368, 14, 6)  # response only
local({
  A <- 13; B <- 368; xmid <- 14; scal <- 6
  SSfpl(Chick.1$Time, A, B, xmid, scal) # response _and_ gradient
})
print(getInitial(weight ~ SSfpl(Time, A, B, xmid, scal), data = Chick.1),
      digits = 5)
## Initial values are in fact the converged values
fm1 <- nls(weight ~ SSfpl(Time, A, B, xmid, scal), data = Chick.1)
summary(fm1)

## Visualizing the  SSfpl()  parametrization
  xx <- seq(-0.5, 5, length.out = 101)
  yy <- 1 + 4 / (1 + exp((2-xx))) # == SSfpl(xx, *) :
  stopifnot( all.equal(yy, SSfpl(xx, A = 1, B = 5, xmid = 2, scal = 1)) )
  require(graphics)
  op <- par(mar = c(0, 0, 3.5, 0))
  plot(xx, yy, type = "l", axes = FALSE, ylim = c(0,6), xlim = c(-1, 5),
       xlab = "", ylab = "", lwd = 2,
       main = "Parameters in the SSfpl model")
  mtext(quote(list(phi[1] == "A", phi[2] == "B", phi[3] == "xmid", phi[4] == "scal")))
  usr <- par("usr")
  arrows(usr[1], 0, usr[2], 0, length = 0.1, angle = 25)
  arrows(0, usr[3], 0, usr[4], length = 0.1, angle = 25)
  text(usr[2] - 0.2, 0.1, "x", adj = c(1, 0))
  text(     -0.1, usr[4], "y", adj = c(1, 1))
  abline(h = c(1, 5), lty = 3)
  arrows(-0.8, c(2.1, 2.9),
         -0.8, c(0,   5  ), length = 0.1, angle = 25)
  text  (-0.8, 2.5, quote(phi[1]))
  arrows(-0.3, c(1/4, 3/4),
         -0.3, c(0,   1  ), length = 0.07, angle = 25)
  text  (-0.3, 0.5, quote(phi[2]))
  text(2, -.1, quote(phi[3]))
  segments(c(2,3,3), c(0,3,4), # SSfpl(x = xmid = 2) = 3
           c(2,3,2), c(3,4,3),    lty = 2, lwd = 0.75)
  arrows(c(2.3, 2.7), 3,
         c(2.0, 3  ), 3, length = 0.08, angle = 25)
  text(      2.5,     3, quote(phi[4])); text(3.1, 3.5, "1")
  par(op)

