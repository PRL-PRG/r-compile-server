#? stdlib
`SSweibull` <- structure(function (x, Asym, Drop, lrc, pwr) 
{
    .expr1 <- exp(lrc)
    .expr3 <- x^pwr
    .expr5 <- exp(-(ee <- .expr1 * .expr3))
    .value <- Asym - (De <- Drop * .expr5)
    .actualArgs <- as.list(match.call()[c("Asym", "Drop", "lrc", 
        "pwr")])
    if (all(vapply(.actualArgs, is.name, NA))) {
        .grad <- array(0, c(length(.value), 4L), list(NULL, c("Asym", 
            "Drop", "lrc", "pwr")))
        .grad[, "Asym"] <- 1
        .grad[, "Drop"] <- -.expr5
        .grad[, "lrc"] <- lrc <- De * ee
        .grad[, "pwr"] <- lrc * log(x)
        dimnames(.grad) <- list(NULL, .actualArgs)
        attr(.value, "gradient") <- .grad
    }
    .value
}, initial = function (mCall, data, LHS, ...) 
{
    xy <- sortedXyData(mCall[["x"]], LHS, data)
    if (nrow(xy) < 5) {
        stop("too few distinct input values to fit the Weibull growth model")
    }
    if (any(xy[["x"]] < 0)) {
        stop("all 'x' values must be non-negative to fit the Weibull growth model")
    }
    Rasym <- NLSstRtAsymptote(xy)
    Lasym <- NLSstLfAsymptote(xy)
    pars <- coef(lm(log(-log((Rasym - y)/(Rasym - Lasym))) ~ 
        log(x), data = xy, subset = x > 0))
    setNames(coef(nls(y ~ cbind(1, -exp(-exp(lrc) * x^pwr)), 
        data = xy, start = c(lrc = pars[[1L]], pwr = pars[[2L]]), 
        algorithm = "plinear", ...))[c(3, 4, 1, 2)], mCall[c("Asym", 
        "Drop", "lrc", "pwr")])
}, pnames = c("Asym", "Drop", "lrc", "pwr"), class = "selfStart")

# Examples
Chick.6 <- subset(ChickWeight, (Chick == 6) & (Time > 0))
SSweibull(Chick.6$Time, 160, 115, -5.5, 2.5)   # response only
local({ Asym <- 160; Drop <- 115; lrc <- -5.5; pwr <- 2.5
  SSweibull(Chick.6$Time, Asym, Drop, lrc, pwr) # response _and_ gradient
})

\dontdiff{getInitial(weight ~ SSweibull(Time, Asym, Drop, lrc, pwr), data = Chick.6)}
## Initial values are in fact the converged values
fm1 <- nls(weight ~ SSweibull(Time, Asym, Drop, lrc, pwr), data = Chick.6)
summary(fm1)

## Data and Fit:
plot(weight ~ Time, Chick.6, xlim = c(0, 21), main = "SSweibull() fit to Chick.6")
ux <- par("usr")[1:2]; x <- seq(ux[1], ux[2], length.out=250)
lines(x, do.call(SSweibull, c(list(x=x), coef(fm1))), col = "red", lwd=2)
As <- coef(fm1)[["Asym"]]; abline(v = 0, h = c(As, As - coef(fm1)[["Drop"]]), lty = 3)

