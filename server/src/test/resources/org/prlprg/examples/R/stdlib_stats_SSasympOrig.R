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
