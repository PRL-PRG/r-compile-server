#? stdlib
`nls` <- function (formula, data = parent.frame(), start, control = nls.control(), 
    algorithm = c("default", "plinear", "port"), trace = FALSE, 
    subset, weights, na.action, model = FALSE, lower = -Inf, 
    upper = Inf, ...) 
{
    formula <- as.formula(formula)
    algorithm <- match.arg(algorithm)
    if (!is.list(data) && !is.environment(data)) 
        stop("'data' must be a list or an environment")
    mf <- cl <- match.call()
    varNames <- all.vars(formula)
    if (length(formula) == 2L) {
        formula[[3L]] <- formula[[2L]]
        formula[[2L]] <- 0
    }
    form2 <- formula
    form2[[2L]] <- 0
    varNamesRHS <- all.vars(form2)
    mWeights <- missing(weights)
    pnames <- if (missing(start)) {
        names(attr(data, "parameters")) %||% if (is.call(cll <- formula[[length(formula)]])) {
            func <- eval(cll[[1L]], environment(formula))
            if (!is.null(pn <- attr(func, "pnames"))) 
                as.character(as.list(match.call(func, call = cll))[-1L][pn])
        }
    }
    else names(start)
    env <- environment(formula) %||% parent.frame()
    if (length(pnames)) 
        varNames <- varNames[is.na(match(varNames, pnames))]
    lenVar <- function(var) tryCatch(length(eval(as.name(var), 
        data, env)), error = function(e) -1L)
    if (length(varNames)) {
        n <- vapply(varNames, lenVar, 0)
        if (any(not.there <- n == -1L)) {
            nnn <- names(n[not.there])
            if (missing(start)) {
                if (algorithm == "plinear") 
                  stop("no starting values specified")
                warning("No starting values specified for some parameters.\n", 
                  "Initializing ", paste(sQuote(nnn), collapse = ", "), 
                  " to '1.'.\n", "Consider specifying 'start' or using a selfStart model", 
                  domain = NA)
                start <- setNames(as.list(rep_len(1, length(nnn))), 
                  nnn)
                varNames <- varNames[i <- is.na(match(varNames, 
                  nnn))]
                n <- n[i]
            }
            else stop(gettextf("parameters without starting value in 'data': %s", 
                paste(nnn, collapse = ", ")), domain = NA)
        }
    }
    else {
        if (length(pnames) && any((np <- sapply(pnames, lenVar)) == 
            -1)) {
            message(sprintf(ngettext(sum(np == -1), "fitting parameter %s without any variables", 
                "fitting parameters %s without any variables"), 
                paste(sQuote(pnames[np == -1]), collapse = ", ")), 
                domain = NA)
            n <- integer()
        }
        else stop("no parameters to fit")
    }
    respLength <- length(eval(formula[[2L]], data, env))
    if (length(n) > 0L) {
        varIndex <- n%%respLength == 0
        if (is.list(data) && diff(range(n[names(n) %in% names(data)])) > 
            0) {
            mf <- data
            if (!missing(subset)) 
                warning("argument 'subset' will be ignored")
            if (!missing(na.action)) 
                warning("argument 'na.action' will be ignored")
            if (missing(start)) 
                start <- getInitial(formula, data = mf, control = control, 
                  trace = trace)
            startEnv <- new.env(hash = FALSE, parent = environment(formula))
            for (i in names(start)) startEnv[[i]] <- start[[i]]
            rhs <- eval(formula[[3L]], data, startEnv)
            n <- NROW(rhs)
            wts <- if (mWeights) 
                rep_len(1, n)
            else eval(substitute(weights), data, environment(formula))
        }
        else {
            vNms <- varNames[varIndex]
            if (any(nEQ <- vNms != make.names(vNms))) 
                vNms[nEQ] <- paste0("`", vNms[nEQ], "`")
            mf$formula <- as.formula(paste("~", paste(vNms, collapse = "+")), 
                env = environment(formula))
            mf$start <- mf$control <- mf$algorithm <- mf$trace <- mf$model <- NULL
            mf$lower <- mf$upper <- NULL
            mf[[1L]] <- quote(stats::model.frame)
            mf <- eval.parent(mf)
            n <- nrow(mf)
            mf <- as.list(mf)
            wts <- if (!mWeights) 
                model.weights(mf)
            else rep_len(1, n)
        }
        if (any(wts < 0 | is.na(wts))) 
            stop("missing or negative weights not allowed")
    }
    else {
        varIndex <- logical()
        mf <- list(0)
        wts <- numeric()
    }
    if (missing(start)) 
        start <- getInitial(formula, data = mf, control = control, 
            trace = trace)
    for (var in varNames[!varIndex]) mf[[var]] <- eval(as.name(var), 
        data, env)
    varNamesRHS <- varNamesRHS[varNamesRHS %in% varNames[varIndex]]
    ctrl <- nls.control()
    if (!missing(control)) {
        control <- as.list(control)
        ctrl[names(control)] <- control
    }
    scOff <- ctrl$scaleOffset
    nDcntr <- ctrl$nDcentral
    m <- switch(algorithm, plinear = nlsModel.plinear(formula, 
        mf, start, wts, scaleOffset = scOff, nDcentral = nDcntr), 
        port = nlsModel(formula, mf, start, wts, upper, scaleOffset = scOff, 
            nDcentral = nDcntr), default = nlsModel(formula, 
            mf, start, wts, scaleOffset = scOff, nDcentral = nDcntr))
    if (algorithm != "port") {
        if (!identical(lower, -Inf) || !identical(upper, +Inf)) {
            warning("upper and lower bounds ignored unless algorithm = \"port\"")
            cl$lower <- NULL
            cl$upper <- NULL
        }
        convInfo <- .Call(C_nls_iter, m, ctrl, trace)
        nls.out <- list(m = m, convInfo = convInfo, data = substitute(data), 
            call = cl)
    }
    else {
        pfit <- nls_port_fit(m, start, lower, upper, control, 
            trace, give.v = TRUE)
        iv <- pfit[["iv"]]
        msg.nls <- port_msg(iv[1L])
        conv <- (iv[1L] %in% 3:6)
        if (!conv) {
            msg <- paste("Convergence failure:", msg.nls)
            if (ctrl$warnOnly) 
                warning(msg)
            else stop(msg)
        }
        v. <- port_get_named_v(pfit[["v"]])
        cInfo <- list(isConv = conv, finIter = iv[31L], finTol = v.[["NREDUC"]], 
            nEval = c(`function` = iv[6L], gradient = iv[30L]), 
            stopCode = iv[1L], stopMessage = msg.nls)
        cl$lower <- lower
        cl$upper <- upper
        nls.out <- list(m = m, data = substitute(data), call = cl, 
            convInfo = cInfo, convergence = as.integer(!conv), 
            message = msg.nls)
    }
    nls.out$call$algorithm <- algorithm
    nls.out$call$control <- ctrl
    nls.out$call$trace <- trace
    nls.out$na.action <- attr(mf, "na.action")
    nls.out$dataClasses <- attr(attr(mf, "terms"), "dataClasses")[varNamesRHS]
    if (model) 
        nls.out$model <- mf
    if (!mWeights) 
        nls.out$weights <- wts
    nls.out$control <- control
    class(nls.out) <- "nls"
    nls.out
}

# Examples
od <- options(digits=5)
require(graphics)

DNase1 <- subset(DNase, Run == 1)

## using a selfStart model
fm1DNase1 <- nls(density ~ SSlogis(log(conc), Asym, xmid, scal), DNase1)
summary(fm1DNase1)
## the coefficients only:
coef(fm1DNase1)
## including their SE, etc:
coef(summary(fm1DNase1))

## using conditional linearity
fm2DNase1 <- nls(density ~ 1/(1 + exp((xmid - log(conc))/scal)),
                 data = DNase1,
                 start = list(xmid = 0, scal = 1),
                 algorithm = "plinear")
summary(fm2DNase1)

## without conditional linearity
fm3DNase1 <- nls(density ~ Asym/(1 + exp((xmid - log(conc))/scal)),
                 data = DNase1,
                 start = list(Asym = 3, xmid = 0, scal = 1))
summary(fm3DNase1)

## using Port's nl2sol algorithm
fm4DNase1 <- nls(density ~ Asym/(1 + exp((xmid - log(conc))/scal)),
                 data = DNase1,
                 start = list(Asym = 3, xmid = 0, scal = 1),
                 algorithm = "port")
summary(fm4DNase1)

## weighted nonlinear regression
Treated <- Puromycin[Puromycin$state == "treated", ]
weighted.MM <- function(resp, conc, Vm, K)
{
    ## Purpose: exactly as white book p. 451 -- RHS for nls()
    ##  Weighted version of Michaelis-Menten model
    ## ----------------------------------------------------------
    ## Arguments: 'y', 'x' and the two parameters (see book)
    ## ----------------------------------------------------------
    ## Author: Martin Maechler, Date: 23 Mar 2001

    pred <- (Vm * conc)/(K + conc)
    (resp - pred) / sqrt(pred)
}

Pur.wt <- nls( ~ weighted.MM(rate, conc, Vm, K), data = Treated,
              start = list(Vm = 200, K = 0.1))
summary(Pur.wt)

## Passing arguments using a list that can not be coerced to a data.frame
lisTreat <- with(Treated,
                 list(conc1 = conc[1], conc.1 = conc[-1], rate = rate))

weighted.MM1 <- function(resp, conc1, conc.1, Vm, K)
{
     conc <- c(conc1, conc.1)
     pred <- (Vm * conc)/(K + conc)
    (resp - pred) / sqrt(pred)
}
Pur.wt1 <- nls( ~ weighted.MM1(rate, conc1, conc.1, Vm, K),
               data = lisTreat, start = list(Vm = 200, K = 0.1))
stopifnot(all.equal(coef(Pur.wt), coef(Pur.wt1)))

## Chambers and Hastie (1992) Statistical Models in S  (p. 537):
## If the value of the right side [of formula] has an attribute called
## 'gradient' this should be a matrix with the number of rows equal
## to the length of the response and one column for each parameter.

weighted.MM.grad <- function(resp, conc1, conc.1, Vm, K)
{
  conc <- c(conc1, conc.1)

  K.conc <- K+conc
  dy.dV <- conc/K.conc
  dy.dK <- -Vm*dy.dV/K.conc
  pred <- Vm*dy.dV
  pred.5 <- sqrt(pred)
  dev <- (resp - pred) / pred.5
  Ddev <- -0.5*(resp+pred)/(pred.5*pred)
  attr(dev, "gradient") <- Ddev * cbind(Vm = dy.dV, K = dy.dK)
  dev
}

Pur.wt.grad <- nls( ~ weighted.MM.grad(rate, conc1, conc.1, Vm, K),
                   data = lisTreat, start = list(Vm = 200, K = 0.1))

rbind(coef(Pur.wt), coef(Pur.wt1), coef(Pur.wt.grad))

## In this example, there seems no advantage to providing the gradient.
## In other cases, there might be.


## The two examples below show that you can fit a model to
## artificial data with noise but not to artificial data
## without noise.
x <- 1:10
y <- 2*x + 3                            # perfect fit
## terminates in an error, because convergence cannot be confirmed:
try(nls(y ~ a + b*x, start = list(a = 0.12345, b = 0.54321)))
## adjusting the convergence test by adding 'scaleOffset' to its denominator RSS:
nls(y ~ a + b*x, start = list(a = 0.12345, b = 0.54321),
    control = list(scaleOffset = 1, printEval=TRUE))
## Alternatively jittering the "too exact" values, slightly:
set.seed(27)
yeps <- y + rnorm(length(y), sd = 0.01) # added noise
nls(yeps ~ a + b*x, start = list(a = 0.12345, b = 0.54321))


## the nls() internal cheap guess for starting values can be sufficient:
x <- -(1:100)/10
y <- 100 + 10 * exp(x / 2) + rnorm(x)/10
nlmod <- nls(y ~  Const + A * exp(B * x))

plot(x,y, main = "nls(*), data, true function and fit, n=100")
curve(100 + 10 * exp(x / 2), col = 4, add = TRUE)
lines(x, predict(nlmod), col = 2)


## Here, requiring close convergence, must use more accurate numerical differentiation,
## as this typically gives Error: "step factor .. reduced below 'minFactor' .."
\dontdiff{
try(nlm1 <- update(nlmod, control = list(tol = 1e-7)))
o2 <- options(digits = 10) # more accuracy for 'trace'
## central differencing works here typically (PR#18165: not converging on *some*):
ctr2 <- nls.control(nDcentral=TRUE, tol = 8e-8, # <- even smaller than above
   warnOnly =
        TRUE || # << work around; e.g. needed on some ATLAS-Lapack setups
        (grepl("^aarch64.*linux", R.version$platform) && grepl("^NixOS", osVersion)
              ))
(nlm2 <- update(nlmod, control = ctr2, trace = TRUE)); options(o2)
## --> convergence tolerance  4.997e-8 (in 11 iter.)
}

## The muscle dataset in MASS is from an experiment on muscle
## contraction on 21 animals.  The observed variables are Strip
## (identifier of muscle), Conc (Cacl concentration) and Length
## (resulting length of muscle section).
\dontdiff{
if(requireNamespace("MASS", quietly = TRUE)) withAutoprint({
## The non linear model considered is
##       Length = alpha + beta*exp(-Conc/theta) + error
## where theta is constant but alpha and beta may vary with Strip.

with(MASS::muscle, table(Strip)) # 2, 3 or 4 obs per strip

## We first use the plinear algorithm to fit an overall model,
## ignoring that alpha and beta might vary with Strip.
musc.1 <- nls(Length ~ cbind(1, exp(-Conc/th)), MASS::muscle,
              start = list(th = 1), algorithm = "plinear")
summary(musc.1)

## Then we use nls' indexing feature for parameters in non-linear
## models to use the conventional algorithm to fit a model in which
## alpha and beta vary with Strip.  The starting values are provided
## by the previously fitted model.
## Note that with indexed parameters, the starting values must be
## given in a list (with names):
b <- coef(musc.1)
musc.2 <- nls(Length ~ a[Strip] + b[Strip]*exp(-Conc/th), MASS::muscle,
              start = list(a = rep(b[2], 21), b = rep(b[3], 21), th = b[1]))
summary(musc.2)
})
}
options(od)

