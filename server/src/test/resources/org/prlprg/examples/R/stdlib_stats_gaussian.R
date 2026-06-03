#? stdlib
`gaussian` <- function (link = "identity") 
{
    linktemp <- substitute(link)
    if (!is.character(linktemp)) 
        linktemp <- deparse(linktemp)
    okLinks <- c("inverse", "log", "identity")
    family <- "gaussian"
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
        linkinv = stats$linkinv, variance = function(mu) rep.int(1, 
            length(mu)), dev.resids = function(y, mu, wt) wt * 
            ((y - mu)^2), aic = function(y, n, mu, wt, dev) {
            nobs <- length(y)
            nobs * (log(dev/nobs * 2 * pi) + 1) + 2 - sum(log(wt))
        }, mu.eta = stats$mu.eta, initialize = expression({
            n <- rep.int(1, nobs)
            if (is.null(etastart) && is.null(start) && is.null(mustart) && 
                ((family$link == "inverse" && any(y == 0)) || 
                  (family$link == "log" && any(y <= 0)))) stop("cannot find valid starting values: please specify some")
            mustart <- y
        }), validmu = function(mu) TRUE, valideta = stats$valideta, 
        dispersion = NA_real_), class = "family")
}
