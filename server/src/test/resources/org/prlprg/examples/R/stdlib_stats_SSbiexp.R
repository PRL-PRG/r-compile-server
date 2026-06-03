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
