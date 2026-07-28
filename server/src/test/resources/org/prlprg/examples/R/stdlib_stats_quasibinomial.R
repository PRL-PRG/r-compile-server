#? stdlib
`quasibinomial` <- function (link = "logit") 
{
    linktemp <- substitute(link)
    if (!is.character(linktemp)) 
        linktemp <- deparse(linktemp)
    okLinks <- c("logit", "probit", "cloglog", "cauchit", "log")
    family <- "quasibinomial"
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
    structure(list(family = family, link = linktemp, linkfun = stats$linkfun, 
        linkinv = stats$linkinv, variance = function(mu) mu * 
            (1 - mu), dev.resids = function(y, mu, wt) .Call(C_binomial_dev_resids, 
            y, mu, wt), aic = function(y, n, mu, wt, dev) NA, 
        mu.eta = stats$mu.eta, initialize = binomInitialize(family), 
        validmu = function(mu) all(is.finite(mu)) && all(0 < 
            mu & mu < 1), valideta = stats$valideta, dispersion = NA_real_), 
        class = "family")
}
