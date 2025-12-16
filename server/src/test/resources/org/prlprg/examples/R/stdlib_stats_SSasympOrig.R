#? stdlib
`SSasympOrig` <- structure(function (input, Asym, lrc) 
{
    .expr1 <- exp(lrc)
    .expr4 <- exp(((-.expr1) * input))
    .expr5 <- 1 - .expr4
    .value <- Asym * .expr5
    .actualArgs <- as.list(match.call()[c("Asym", "lrc")])
    if (all(vapply(.actualArgs, is.name, NA))) {
        .grad <- array(0, c(length(.value), 2L), list(NULL, c("Asym", 
            "lrc")))
        .grad[, "Asym"] <- .expr5
        .grad[, "lrc"] <- Asym * (.expr4 * (.expr1 * input))
        dimnames(.grad) <- list(NULL, .actualArgs)
        attr(.value, "gradient") <- .grad
    }
    .value
}, initial = function (mCall, data, LHS, ...) 
{
    xy <- sortedXyData(mCall[["input"]], LHS, data)
    if (nrow(xy) < 3) {
        stop("too few distinct input values to fit the 'asympOrig' model")
    }
    A0 <- NLSstRtAsymptote(xy)
    lrc <- log(abs(mean(log(1 - xy$y/A0)/xy$x, na.rm = TRUE)))
    xy <- data.frame(xy)
    pars <- coef(nls(y ~ 1 - exp(-exp(lrc) * x), data = xy, start = list(lrc = lrc), 
        algorithm = "plinear", ...))
    setNames(pars[c(".lin", "lrc")], mCall[c("Asym", "lrc")])
}, pnames = c("Asym", "lrc"), class = "selfStart")

# Examples\donttest{
Lob.329 <- Loblolly[ Loblolly$Seed == "329", ]
SSasympOrig(Lob.329$age, 100, -3.2)  # response only
local({   Asym <- 100; lrc <- -3.2
  SSasympOrig(Lob.329$age, Asym, lrc) # response and gradient
})
getInitial(height ~ SSasympOrig(age, Asym, lrc), data = Lob.329)
## Initial values are in fact the converged values
fm1 <- nls(height ~ SSasympOrig(age, Asym, lrc), data = Lob.329)
summary(fm1)
}

## Visualize the SSasympOrig()  model  parametrization :

  xx <- seq(0, 5, length.out = 101)
  yy <- 5 * (1- exp(-xx * log(2)))
  stopifnot( all.equal(yy, SSasympOrig(xx, Asym = 5, lrc = log(log(2)))) )

  require(graphics)
  op <- par(mar = c(0, 0, 3.5, 0))
  plot(xx, yy, type = "l", axes = FALSE, ylim = c(0,5), xlim = c(-1/4, 5),
       xlab = "", ylab = "", lwd = 2,
       main = quote("Parameters in the SSasympOrig model"~~ f[phi](x)))
  mtext(quote(list(phi[1] == "Asym", phi[2] == "lrc")))
  usr <- par("usr")
  arrows(usr[1], 0, usr[2], 0, length = 0.1, angle = 25)
  arrows(0, usr[3], 0, usr[4], length = 0.1, angle = 25)
  text(usr[2] - 0.2, 0.1, "x", adj = c(1, 0))
  text(   -0.1,   usr[4], "y", adj = c(1, 1))
  abline(h = 5, lty = 3)
  axis(2, at = 5*c(1/2,1), labels= expression(frac(phi[1],2), phi[1]), pos=0, las=1)
  arrows(c(.3,.7), 5/2,
         c(0, 1 ), 5/2, length = 0.08, angle = 25)
  text(   0.5,     5/2, quote(t[0.5]))
  text(   1 +.4,   5/2,
       quote({f(t[0.5]) == frac(phi[1],2)}~{} %=>% {}~~{t[0.5] == frac(log(2), e^{phi[2]})}),
       adj = c(0, 0.5))
  par(op)

