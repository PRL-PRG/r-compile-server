#? stdlib
`make.link` <- function (link) 
{
    switch(link, logit = {
        linkfun <- function(mu) .Call(C_logit_link, mu)
        linkinv <- function(eta) .Call(C_logit_linkinv, eta)
        mu.eta <- function(eta) .Call(C_logit_mu_eta, eta)
        valideta <- function(eta) TRUE
    }, probit = {
        linkfun <- function(mu) qnorm(mu)
        linkinv <- function(eta) {
            thresh <- -qnorm(.Machine$double.eps)
            eta <- pmin(pmax(eta, -thresh), thresh)
            pnorm(eta)
        }
        mu.eta <- function(eta) pmax(dnorm(eta), .Machine$double.eps)
        valideta <- function(eta) TRUE
    }, cauchit = {
        linkfun <- function(mu) qcauchy(mu)
        linkinv <- function(eta) {
            thresh <- -qcauchy(.Machine$double.eps)
            eta <- pmin(pmax(eta, -thresh), thresh)
            pcauchy(eta)
        }
        mu.eta <- function(eta) pmax(dcauchy(eta), .Machine$double.eps)
        valideta <- function(eta) TRUE
    }, cloglog = {
        linkfun <- function(mu) log(-log(1 - mu))
        linkinv <- function(eta) pmax(pmin(-expm1(-exp(eta)), 
            1 - .Machine$double.eps), .Machine$double.eps)
        mu.eta <- function(eta) {
            eta <- pmin(eta, 700)
            pmax(exp(eta) * exp(-exp(eta)), .Machine$double.eps)
        }
        valideta <- function(eta) TRUE
    }, identity = {
        linkfun <- function(mu) mu
        linkinv <- function(eta) eta
        mu.eta <- function(eta) rep.int(1, length(eta))
        valideta <- function(eta) TRUE
    }, log = {
        linkfun <- function(mu) log(mu)
        linkinv <- function(eta) pmax(exp(eta), .Machine$double.eps)
        mu.eta <- function(eta) pmax(exp(eta), .Machine$double.eps)
        valideta <- function(eta) TRUE
    }, sqrt = {
        linkfun <- function(mu) sqrt(mu)
        linkinv <- function(eta) eta^2
        mu.eta <- function(eta) 2 * eta
        valideta <- function(eta) all(is.finite(eta)) && all(eta > 
            0)
    }, `1/mu^2` = {
        linkfun <- function(mu) 1/mu^2
        linkinv <- function(eta) 1/sqrt(eta)
        mu.eta <- function(eta) -1/(2 * eta^1.5)
        valideta <- function(eta) all(is.finite(eta)) && all(eta > 
            0)
    }, inverse = {
        linkfun <- function(mu) 1/mu
        linkinv <- function(eta) 1/eta
        mu.eta <- function(eta) -1/(eta^2)
        valideta <- function(eta) all(is.finite(eta)) && all(eta != 
            0)
    }, stop(gettextf("%s link not recognised", sQuote(link)), 
        domain = NA))
    environment(linkfun) <- environment(linkinv) <- environment(mu.eta) <- environment(valideta) <- asNamespace("stats")
    structure(list(linkfun = linkfun, linkinv = linkinv, mu.eta = mu.eta, 
        valideta = valideta, name = link), class = "link-glm")
}

# Examples
utils::str(make.link("logit"))

