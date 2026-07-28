#? stdlib
`SSasympOff` <- structure(function (input, Asym, lrc, c0) 
{
    .expr1 <- exp(lrc)
    .expr3 <- input - c0
    .expr5 <- exp(((-.expr1) * .expr3))
    .expr6 <- 1 - .expr5
    .value <- Asym * .expr6
    .actualArgs <- as.list(match.call()[c("Asym", "lrc", "c0")])
    if (all(vapply(.actualArgs, is.name, NA))) {
        .grad <- array(0, c(length(.value), 3L), list(NULL, c("Asym", 
            "lrc", "c0")))
        .grad[, "Asym"] <- .expr6
        .grad[, "lrc"] <- Asym * (.expr5 * (.expr1 * .expr3))
        .grad[, "c0"] <- -(Asym * (.expr5 * .expr1))
        dimnames(.grad) <- list(NULL, .actualArgs)
        attr(.value, "gradient") <- .grad
    }
    .value
}, initial = function (mCall, data, LHS, ...) 
{
    xy <- sortedXyData(mCall[["input"]], LHS, data)
    if (nrow(xy) < 4) {
        stop("too few distinct input values to fit the 'asympOff' model")
    }
    xy$ydiff <- abs(xy$y - NLSstRtAsymptote(xy))
    xy <- data.frame(xy)
    lrc <- log(-coef(lm(log(ydiff) ~ x, data = xy))[[2L]])
    pars <- coef(nls(y ~ cbind(1, exp(-exp(lrc) * x)), data = xy, 
        start = list(lrc = lrc), algorithm = "plinear", ...))
    setNames(c(pars[[2L]], pars[["lrc"]], exp(-pars[[1L]]) * 
        log(-pars[[3L]]/pars[[2L]])), mCall[c("Asym", "lrc", 
        "c0")])
}, pnames = c("Asym", "lrc", "c0"), class = "selfStart")

# Examples
CO2.Qn1 <- CO2[CO2$Plant == "Qn1", ]
SSasympOff(CO2.Qn1$conc, 32, -4, 43)  # response only
local({  Asym <- 32; lrc <- -4; c0 <- 43
  SSasympOff(CO2.Qn1$conc, Asym, lrc, c0) # response and gradient
})
getInitial(uptake ~ SSasympOff(conc, Asym, lrc, c0), data = CO2.Qn1)
## Initial values are in fact the converged values
fm1 <- nls(uptake ~ SSasympOff(conc, Asym, lrc, c0), data = CO2.Qn1)
summary(fm1)

## Visualize the SSasympOff()  model  parametrization :

  xx <- seq(0.25, 8,  by=1/16)
  yy <- 5 * (1 -  exp(-(xx - 3/4)*0.4))
  stopifnot( all.equal(yy, SSasympOff(xx, Asym = 5, lrc = log(0.4), c0 = 3/4)) )
  require(graphics)
  op <- par(mar = c(0, 0, 4.0, 0))
  plot(xx, yy, type = "l", axes = FALSE, ylim = c(-.5,6), xlim = c(-1, 8),
       xlab = "", ylab = "", lwd = 2,
       main = "Parameters in the SSasympOff model")
  mtext(quote(list(phi[1] == "Asym", phi[2] == "lrc", phi[3] == "c0")))
  usr <- par("usr")
  arrows(usr[1], 0, usr[2], 0, length = 0.1, angle = 25)
  arrows(0, usr[3], 0, usr[4], length = 0.1, angle = 25)
  text(usr[2] - 0.2, 0.1, "x", adj = c(1, 0))
  text(     -0.1, usr[4], "y", adj = c(1, 1))
  abline(h = 5, lty = 3)
  arrows(-0.8, c(2.1, 2.9),
         -0.8, c(0  , 5  ), length = 0.1, angle = 25)
  text  (-0.8, 2.5, quote(phi[1]))
  segments(3/4, -.2, 3/4, 1.6, lty = 2)
  text    (3/4,    c(-.3, 1.7), quote(phi[3]))
  arrows(c(1.1, 1.4), -.15,
         c(3/4, 7/4), -.15, length = 0.07, angle = 25)
  text    (3/4 + 1/2, -.15, quote(1))
  segments(c(3/4, 7/4, 7/4), c(0, 0, 2),   # 5 * exp(log(0.4)) = 2
           c(7/4, 7/4, 3/4), c(0, 2, 0),  lty = 2, lwd = 2)
  text(      7/4 +.1, 2./2, quote(phi[1]*e^phi[2]), adj = c(0, .5))
  par(op)

