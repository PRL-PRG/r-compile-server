#? stdlib
`inverse.gaussian` <- function (link = "1/mu^2") 
{
    linktemp <- substitute(link)
    if (!is.character(linktemp)) 
        linktemp <- deparse(linktemp)
    family <- "inverse.gaussian"
    okLinks <- c("inverse", "log", "identity", "1/mu^2")
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
    variance <- function(mu) mu^3
    dev.resids <- function(y, mu, wt) wt * ((y - mu)^2)/(y * 
        mu^2)
    aic <- function(y, n, mu, wt, dev) sum(wt) * (1 + log(dev/sum(wt) * 
        2 * pi)) + 3 * sum(log(y) * wt) + 2
    initialize <- expression({
        if (any(y <= 0)) stop("positive values only are allowed for the 'inverse.gaussian' family")
        n <- rep.int(1, nobs)
        mustart <- y
    })
    validmu <- function(mu) TRUE
    simfun <- function(object, nsim) {
        if (!requireNamespace("SuppDists", quietly = TRUE)) 
            stop("need CRAN package 'SuppDists' for simulation from the 'inverse.gaussian' family")
        wts <- object$prior.weights
        if (any(wts != 1)) 
            message("using weights as inverse variances")
        ftd <- fitted(object)
        SuppDists::rinvGauss(nsim * length(ftd), nu = ftd, lambda = wts/summary(object)$dispersion)
    }
    structure(list(family = family, link = linktemp, linkfun = stats$linkfun, 
        linkinv = stats$linkinv, variance = variance, dev.resids = dev.resids, 
        aic = aic, mu.eta = stats$mu.eta, initialize = initialize, 
        validmu = validmu, valideta = stats$valideta, simulate = simfun, 
        dispersion = NA_real_), class = "family")
}
