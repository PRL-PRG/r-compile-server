#? stdlib
`SSgompertz` <- structure(function (x, Asym, b2, b3) 
{
    .expr2 <- b3^x
    .expr4 <- exp(-b2 * .expr2)
    .value <- Asym * .expr4
    .actualArgs <- as.list(match.call()[c("Asym", "b2", "b3")])
    if (all(vapply(.actualArgs, is.name, NA))) {
        .grad <- array(0, c(length(.value), 3L), list(NULL, c("Asym", 
            "b2", "b3")))
        .grad[, "Asym"] <- .expr4
        .grad[, "b2"] <- -Asym * (.expr4 * .expr2)
        .grad[, "b3"] <- -Asym * (.expr4 * (b2 * (b3^(x - 1) * 
            x)))
        dimnames(.grad) <- list(NULL, .actualArgs)
        attr(.value, "gradient") <- .grad
    }
    .value
}, initial = function (mCall, data, LHS, ...) 
{
    xy <- sortedXyData(mCall[["x"]], LHS, data)
    if (nrow(xy) < 4) {
        stop("too few distinct input values to fit the Gompertz model")
    }
    xyL <- xy
    xyL$y <- log(abs(xyL$y))
    pars <- NLSstAsymptotic(xyL)
    pars <- coef(nls(y ~ exp(-b2 * b3^x), data = xy, start = c(b2 = pars[["b1"]], 
        b3 = exp(-exp(pars[["lrc"]]))), algorithm = "plinear", 
        ...))
    setNames(pars[c(".lin", "b2", "b3")], mCall[c("Asym", "b2", 
        "b3")])
}, pnames = c("Asym", "b2", "b3"), class = "selfStart")

# Examples
DNase.1 <- subset(DNase, Run == 1)
SSgompertz(log(DNase.1$conc), 4.5, 2.3, 0.7)  # response only
local({  Asym <- 4.5; b2 <- 2.3; b3 <- 0.7
  SSgompertz(log(DNase.1$conc), Asym, b2, b3) # response _and_ gradient
})
print(getInitial(density ~ SSgompertz(log(conc), Asym, b2, b3),
                 data = DNase.1), digits = 5)
## Initial values are in fact the converged values
fm1 <- nls(density ~ SSgompertz(log(conc), Asym, b2, b3),
           data = DNase.1)
summary(fm1)
plot(density ~ log(conc), DNase.1, # xlim = c(0, 21),
     main = "SSgompertz() fit to DNase.1")
ux <- par("usr")[1:2]; x <- seq(ux[1], ux[2], length.out=250)
lines(x, do.call(SSgompertz, c(list(x=x), coef(fm1))), col = "red", lwd=2)
As <- coef(fm1)[["Asym"]]; abline(v = 0, h = 0, lty = 3)
axis(2, at= exp(-coef(fm1)[["b2"]]), quote(e^{-b[2]}), las=1, pos=0)

