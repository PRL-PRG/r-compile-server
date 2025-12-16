#? stdlib
`binomial` <- function (link = "logit") 
{
    linktemp <- substitute(link)
    if (!is.character(linktemp)) 
        linktemp <- deparse(linktemp)
    okLinks <- c("logit", "probit", "cloglog", "cauchit", "log")
    family <- "binomial"
    if (linktemp %in% okLinks) 
        stats <- make.link(linktemp)
    else if (is.character(link)) {
        stats <- make.link(link)
        linktemp <- link
    }
    else {
        if (inherits(link, "link-glm")) {
            stats <- link
            if (!is.null(stats$name)) 
                linktemp <- stats$name
        }
        else {
            stop(gettextf("link \"%s\" not available for %s family; available links are %s", 
                linktemp, family, paste(sQuote(okLinks), collapse = ", ")), 
                domain = NA)
        }
    }
    variance <- function(mu) mu * (1 - mu)
    validmu <- function(mu) all(is.finite(mu)) && all(mu > 0 & 
        mu < 1)
    dev.resids <- function(y, mu, wt) .Call(C_binomial_dev_resids, 
        y, mu, wt)
    aic <- function(y, n, mu, wt, dev) {
        m <- if (any(n > 1)) 
            n
        else wt
        -2 * sum(ifelse(m > 0, (wt/m), 0) * dbinom(round(m * 
            y), round(m), mu, log = TRUE))
    }
    simfun <- function(object, nsim) {
        ftd <- fitted(object)
        n <- length(ftd)
        ntot <- n * nsim
        wts <- object$prior.weights
        if (any(wts%%1 != 0)) 
            stop("cannot simulate from non-integer prior.weights")
        if (!is.null(m <- object$model)) {
            y <- model.response(m)
            if (is.factor(y)) {
                yy <- factor(1 + rbinom(ntot, size = 1, prob = ftd), 
                  labels = levels(y))
                split(yy, rep(seq_len(nsim), each = n))
            }
            else if (is.matrix(y) && ncol(y) == 2) {
                yy <- vector("list", nsim)
                for (i in seq_len(nsim)) {
                  Y <- rbinom(n, size = wts, prob = ftd)
                  YY <- cbind(Y, wts - Y)
                  colnames(YY) <- colnames(y)
                  yy[[i]] <- YY
                }
                yy
            }
            else rbinom(ntot, size = wts, prob = ftd)/wts
        }
        else rbinom(ntot, size = wts, prob = ftd)/wts
    }
    structure(list(family = family, link = linktemp, linkfun = stats$linkfun, 
        linkinv = stats$linkinv, variance = variance, dev.resids = dev.resids, 
        aic = aic, mu.eta = stats$mu.eta, initialize = binomInitialize(family), 
        validmu = validmu, valideta = stats$valideta, simulate = simfun, 
        dispersion = 1), class = "family")
}
