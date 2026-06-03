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
