#? stdlib
`quasi` <- function (link = "identity", variance = "constant") 
{
    linktemp <- substitute(link)
    if (!is.character(linktemp)) 
        linktemp <- deparse(linktemp)
    if (linktemp %in% c("logit", "probit", "cloglog", "identity", 
        "inverse", "log", "1/mu^2", "sqrt")) 
        stats <- make.link(linktemp)
    else if (is.character(link)) {
        stats <- make.link(link)
        linktemp <- link
    }
    else {
        stats <- link
        linktemp <- stats$name %||% deparse(linktemp)
    }
    maybeV <- is.character(vtemp <- substitute(variance)) || 
        (is.symbol(vtemp) && (vtemp == quote(mu) || vtemp == 
            quote(constant))) || (is.call(vtemp) && (length(vtemp) == 
        2L && vtemp == quote(mu(1 - mu))) || (length(vtemp) == 
        3L && (vtemp == quote(mu^2) || vtemp == quote(mu^3))))
    if (!maybeV && (is.list(variance) && !anyNA(match(c("varfun", 
        "validmu"), names(variance))))) 
        variance_nm <- NA
    else {
        if (!is.character(vtemp)) 
            vtemp <- deparse(vtemp)
        variance_nm <- vtemp <- gsub(" ", "", vtemp, fixed = TRUE)
        switch(vtemp, constant = {
            varfun <- function(mu) rep.int(1, length(mu))
            dev.resids <- function(y, mu, wt) wt * ((y - mu)^2)
            validmu <- function(mu) TRUE
            initialize <- expression({
                n <- rep.int(1, nobs)
                mustart <- y
            })
        }, `mu(1-mu)` = {
            varfun <- function(mu) mu * (1 - mu)
            validmu <- function(mu) all(mu > 0) && all(mu < 1)
            dev.resids <- function(y, mu, wt) .Call(C_binomial_dev_resids, 
                y, mu, wt)
            initialize <- expression({
                n <- rep.int(1, nobs)
                mustart <- pmax(0.001, pmin(0.999, y))
            })
        }, mu = {
            varfun <- function(mu) mu
            validmu <- function(mu) all(mu > 0)
            dev.resids <- function(y, mu, wt) 2 * wt * (y * log(ifelse(y == 
                0, 1, y/mu)) - (y - mu))
            initialize <- expression({
                n <- rep.int(1, nobs)
                mustart <- y + 0.1 * (y == 0)
            })
        }, `mu^2` = {
            varfun <- function(mu) mu^2
            validmu <- function(mu) all(mu > 0)
            dev.resids <- function(y, mu, wt) pmax(-2 * wt * 
                (log(ifelse(y == 0, 1, y)/mu) - (y - mu)/mu), 
                0)
            initialize <- expression({
                n <- rep.int(1, nobs)
                mustart <- y + 0.1 * (y == 0)
            })
        }, `mu^3` = {
            varfun <- function(mu) mu^3
            validmu <- function(mu) all(mu > 0)
            dev.resids <- function(y, mu, wt) wt * ((y - mu)^2)/(y * 
                mu^2)
            initialize <- expression({
                n <- rep.int(1, nobs)
                mustart <- y + 0.1 * (y == 0)
            })
        }, variance_nm <- NA)
    }
    if (is.na(variance_nm)) {
        if (is.character(variance)) 
            stop(gettextf("'variance' \"%s\" is invalid: possible values are \"mu(1-mu)\", \"mu\", \"mu^2\", \"mu^3\" and \"constant\"", 
                vtemp), domain = NA)
        varfun <- variance$varfun
        validmu <- variance$validmu
        dev.resids <- variance$dev.resids
        initialize <- variance$initialize
        variance_nm <- variance$name
    }
    aic <- function(y, n, mu, wt, dev) NA
    structure(list(family = "quasi", link = linktemp, linkfun = stats$linkfun, 
        linkinv = stats$linkinv, variance = varfun, dev.resids = dev.resids, 
        aic = aic, mu.eta = stats$mu.eta, initialize = initialize, 
        validmu = validmu, valideta = stats$valideta, varfun = variance_nm, 
        dispersion = NA_real_), class = "family")
}
