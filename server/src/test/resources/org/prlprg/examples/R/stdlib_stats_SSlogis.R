#? stdlib
`SSlogis` <- structure(function (input, Asym, xmid, scal) 
{
    .expr1 <- xmid - input
    .expr3 <- exp(.e2 <- .expr1/scal)
    .expr4 <- 1 + .expr3
    .value <- Asym/.expr4
    .actualArgs <- as.list(match.call()[c("Asym", "xmid", "scal")])
    if (all(vapply(.actualArgs, is.name, NA))) {
        .expr10 <- .expr4^2
        .grad <- array(0, c(length(.value), 3L), list(NULL, c("Asym", 
            "xmid", "scal")))
        .grad[, "Asym"] <- 1/.expr4
        .grad[, "xmid"] <- -(xm <- Asym * .expr3/scal/.expr10)
        .grad[, "scal"] <- xm * .e2
        dimnames(.grad) <- list(NULL, .actualArgs)
        attr(.value, "gradient") <- .grad
    }
    .value
}, initial = function (mCall, data, LHS, ...) 
{
    xy <- sortedXyData(mCall[["input"]], LHS, data)
    if (nrow(xy) < 4) {
        stop("too few distinct input values to fit a logistic model")
    }
    z <- xy[["y"]]
    rng <- range(z)
    dz <- diff(rng)
    z <- (z - rng[1L] + 0.05 * dz)/(1.1 * dz)
    xy[["z"]] <- log(z/(1 - z))
    aux <- coef(lm(x ~ z, xy))
    pars <- coef(nls(y ~ 1/(1 + exp((xmid - x)/scal)), data = xy, 
        start = list(xmid = aux[[1L]], scal = aux[[2L]]), algorithm = "plinear", 
        ...))
    setNames(pars[c(".lin", "xmid", "scal")], mCall[c("Asym", 
        "xmid", "scal")])
}, pnames = c("Asym", "xmid", "scal"), class = "selfStart")
