#? stdlib
`SSbiexp` <- structure(function (input, A1, lrc1, A2, lrc2) 
{
    .expr1 <- exp(lrc1)
    .expr4 <- exp(((-.expr1) * input))
    .expr6 <- exp(lrc2)
    .expr9 <- exp(((-.expr6) * input))
    .value <- (A1 * .expr4) + (A2 * .expr9)
    .actualArgs <- as.list(match.call()[c("A1", "lrc1", "A2", 
        "lrc2")])
    if (all(vapply(.actualArgs, is.name, NA))) {
        .grad <- array(0, c(length(.value), 4L), list(NULL, c("A1", 
            "lrc1", "A2", "lrc2")))
        .grad[, "A1"] <- .expr4
        .grad[, "lrc1"] <- -(A1 * (.expr4 * (.expr1 * input)))
        .grad[, "A2"] <- .expr9
        .grad[, "lrc2"] <- -(A2 * (.expr9 * (.expr6 * input)))
        dimnames(.grad) <- list(NULL, .actualArgs)
        attr(.value, "gradient") <- .grad
    }
    .value
}, initial = function (mCall, data, LHS, ...) 
{
    xy <- sortedXyData(mCall[["input"]], LHS, data)
    if (nrow(xy) < 5) {
        stop("too few distinct input values to fit a biexponential")
    }
    ndistinct <- nrow(xy)
    nlast <- max(3, round(ndistinct/2))
    dlast <- xy[(ndistinct + 1 - nlast):ndistinct, ]
    pars2 <- coef(lm(log(y) ~ x, data = dlast))
    lrc2 <- log(abs(pars2[2L]))
    xy[["res"]] <- xy[["y"]] - exp(pars2[1L]) * exp(-exp(lrc2) * 
        xy[["x"]])
    dfirst <- xy[1L:(ndistinct - nlast), ]
    pars1 <- coef(lm(log(abs(res)) ~ x, data = dfirst))
    lrc1 <- log(abs(pars1[2L]))
    pars <- coef(nls(y ~ cbind(exp(-exp(lrc1) * x), exp(-exp(lrc2) * 
        x)), data = xy, start = list(lrc1 = lrc1, lrc2 = lrc2), 
        algorithm = "plinear", ...))
    setNames(pars[c(3L, 1L, 4L, 2L)], mCall[c("A1", "lrc1", "A2", 
        "lrc2")])
}, pnames = c("A1", "lrc1", "A2", "lrc2"), class = "selfStart")

# Examples
Indo.1 <- Indometh[Indometh$Subject == 1, ]
SSbiexp( Indo.1$time, 3, 1, 0.6, -1.3 )  # response only
A1 <- 3; lrc1 <- 1; A2 <- 0.6; lrc2 <- -1.3
SSbiexp( Indo.1$time, A1, lrc1, A2, lrc2 ) # response and gradient
print(getInitial(conc ~ SSbiexp(time, A1, lrc1, A2, lrc2), data = Indo.1),
      digits = 5)
## Initial values are in fact the converged values
fm1 <- nls(conc ~ SSbiexp(time, A1, lrc1, A2, lrc2), data = Indo.1)
summary(fm1)

## Show the model components visually
  require(graphics)

  xx <- seq(0, 5, length.out = 101)
  y1 <- 3.5 * exp(-4*xx)
  y2 <- 1.5 * exp(-xx)
  plot(xx, y1 + y2, type = "l", lwd=2, ylim = c(-0.2,6), xlim = c(0, 5),
       main = "Components of the SSbiexp model")
  lines(xx, y1, lty = 2, col="tomato"); abline(v=0, h=0, col="gray40")
  lines(xx, y2, lty = 3, col="blue2" )
  legend("topright", c("y1+y2", "y1 = 3.5 * exp(-4*x)", "y2 = 1.5 * exp(-x)"),
         lty=1:3, col=c("black","tomato","blue2"), bty="n")
  axis(2, pos=0, at = c(3.5, 1.5), labels = c("A1","A2"), las=2)

## and how you could have got their sum via SSbiexp():
  ySS <- SSbiexp(xx, 3.5, log(4), 1.5, log(1))
  ##                      ---          ---
  stopifnot(all.equal(y1+y2, ySS, tolerance = 1e-15))

## Show a no-noise example
datN <- data.frame(time = (0:600)/64)
datN$conc <- predict(fm1, newdata=datN)
plot(conc ~ time, data=datN) # perfect, no noise
\dontdiff{
## Fails by default (scaleOffset=0) on most platforms {also after increasing maxiter !}

try( # maxiter=10: store less garbage
        nls(conc ~ SSbiexp(time, A1, lrc1, A2, lrc2), data = datN,
            trace=TRUE, control = list(maxiter = 10)) )
fmX1 <- nls(conc ~ SSbiexp(time, A1, lrc1, A2, lrc2), data = datN,
            control = list(scaleOffset=1))
fmX  <- nls(conc ~ SSbiexp(time, A1, lrc1, A2, lrc2), data = datN,
            control = list(scaleOffset=1, printEval=TRUE, tol=1e-11, nDcentral=TRUE), trace=TRUE)
all.equal(coef(fm1), coef(fmX1), tolerance=0) # ... rel.diff.: 1.57e-6
all.equal(coef(fm1), coef(fmX),  tolerance=0) # ... rel.diff.: 1.03e-12
}
stopifnot(all.equal(coef(fm1), coef(fmX1), tolerance = 6e-6),
          all.equal(coef(fm1), coef(fmX ), tolerance = 1e-11))

