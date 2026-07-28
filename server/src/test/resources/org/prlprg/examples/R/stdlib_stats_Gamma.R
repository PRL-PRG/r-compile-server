#? stdlib
`Gamma` <- function (link = "inverse") 
{
    linktemp <- substitute(link)
    if (!is.character(linktemp)) 
        linktemp <- deparse(linktemp)
    okLinks <- c("inverse", "log", "identity")
    family <- "Gamma"
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
    variance <- function(mu) mu^2
    validmu <- function(mu) all(is.finite(mu)) && all(mu > 0)
    dev.resids <- function(y, mu, wt) -2 * wt * (log(ifelse(y == 
        0, 1, y/mu)) - (y - mu)/mu)
    aic <- function(y, n, mu, wt, dev) {
        n <- sum(wt)
        disp <- dev/n
        -2 * sum(dgamma(y, 1/disp, scale = mu * disp, log = TRUE) * 
            wt) + 2
    }
    initialize <- expression({
        if (any(y <= 0)) stop("non-positive values not allowed for the 'Gamma' family")
        n <- rep.int(1, nobs)
        mustart <- y
    })
    simfun <- function(object, nsim) {
        wts <- object$prior.weights
        if (any(wts != 1)) 
            message("using weights as shape parameters")
        ftd <- fitted(object)
        shape <- MASS::gamma.shape(object)$alpha * wts
        rgamma(nsim * length(ftd), shape = shape, rate = shape/ftd)
    }
    structure(list(family = family, link = linktemp, linkfun = stats$linkfun, 
        linkinv = stats$linkinv, variance = variance, dev.resids = dev.resids, 
        aic = aic, mu.eta = stats$mu.eta, initialize = initialize, 
        validmu = validmu, valideta = stats$valideta, simulate = simfun, 
        dispersion = NA_real_), class = "family")
}
