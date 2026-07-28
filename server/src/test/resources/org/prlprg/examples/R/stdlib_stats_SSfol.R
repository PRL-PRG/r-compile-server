#? stdlib
`SSfol` <- structure(function (Dose, input, lKe, lKa, lCl) 
{
    .expr4 <- Dose * exp((lKe + lKa) - lCl)
    .expr5 <- exp(lKe)
    .expr8 <- exp(-.expr5 * input)
    .expr9 <- exp(lKa)
    .expr12 <- exp(-.expr9 * input)
    .expr14 <- .expr4 * (.expr8 - .expr12)
    .expr15 <- .expr9 - .expr5
    .expr16 <- .expr14/.expr15
    .expr23 <- .expr15^2
    .value <- .expr16
    .actualArgs <- as.list(match.call()[c("lKe", "lKa", "lCl")])
    if (all(vapply(.actualArgs, is.name, NA))) {
        .grad <- array(0, c(length(.value), 3L), list(NULL, c("lKe", 
            "lKa", "lCl")))
        .grad[, "lKe"] <- (.expr14 - .expr4 * (.expr8 * (.expr5 * 
            input)))/.expr15 + .expr14 * .expr5/.expr23
        .grad[, "lKa"] <- (.expr14 + .expr4 * (.expr12 * (.expr9 * 
            input)))/.expr15 - .expr14 * .expr9/.expr23
        .grad[, "lCl"] <- -.expr16
        dimnames(.grad) <- list(NULL, .actualArgs)
        attr(.value, "gradient") <- .grad
    }
    .value
}, initial = function (mCall, data, LHS, ...) 
{
    data <- data.frame(data)
    resp <- eval(LHS, data)
    input <- eval(mCall[["input"]], data)
    Dose <- eval(mCall[["Dose"]], data)
    n <- length(resp)
    if (length(input) != n) 
        stop("must have length of response = length of second argument to 'SSfol'")
    if (n < 4) 
        stop("must have at least 4 observations to fit an 'SSfol' model")
    rmaxind <- which.max(resp)
    lKe <- if (rmaxind == n) 
        -2.5
    else log((log(resp[rmaxind]) - log(resp[n]))/(input[n] - 
        input[rmaxind]))
    cond.lin <- nls(resp ~ (exp(-input * exp(lKe)) - exp(-input * 
        exp(lKa))) * Dose, data = list(resp = resp, input = input, 
        Dose = Dose, lKe = lKe), start = list(lKa = lKe + 1), 
        algorithm = "plinear", ...)
    pars <- coef(cond.lin)
    cond.lin <- nls(resp ~ (Dose * (exp(-input * exp(lKe)) - 
        exp(-input * exp(lKa))))/(exp(lKa) - exp(lKe)), data = data.frame(list(resp = resp, 
        input = input, Dose = Dose)), start = list(lKa = pars[["lKa"]], 
        lKe = lKe), algorithm = "plinear", ...)
    pars <- coef(cond.lin)
    lKa <- pars[["lKa"]]
    lKe <- pars[["lKe"]]
    setNames(c(lKe, lKa, lKe + lKa - log(pars[[3L]])), c("lKe", 
        "lKa", "lCl"))
}, pnames = c("lKe", "lKa", "lCl"), class = "selfStart")

# Examples
Theoph.1 <- Theoph[ Theoph$Subject == 1, ]
with(Theoph.1, SSfol(Dose, Time, -2.5, 0.5, -3)) # response only
with(Theoph.1, local({  lKe <- -2.5; lKa <- 0.5; lCl <- -3
  SSfol(Dose, Time, lKe, lKa, lCl) # response _and_ gradient
}))
getInitial(conc ~ SSfol(Dose, Time, lKe, lKa, lCl), data = Theoph.1)
## Initial values are in fact the converged values
fm1 <- nls(conc ~ SSfol(Dose, Time, lKe, lKa, lCl), data = Theoph.1)
summary(fm1)

