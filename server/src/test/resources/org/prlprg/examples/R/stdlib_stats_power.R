#? stdlib
`power` <- function (lambda = 1) 
{
    if (!is.numeric(lambda) || is.na(lambda)) 
        stop("invalid argument 'lambda'")
    if (lambda <= 0) 
        return(make.link("log"))
    if (lambda == 1) 
        return(make.link("identity"))
    linkfun <- function(mu) mu^lambda
    linkinv <- function(eta) pmax(eta^(1/lambda), .Machine$double.eps)
    mu.eta <- function(eta) pmax((1/lambda) * eta^(1/lambda - 
        1), .Machine$double.eps)
    valideta <- function(eta) all(is.finite(eta)) && all(eta > 
        0)
    link <- paste0("mu^", round(lambda, 3))
    structure(list(linkfun = linkfun, linkinv = linkinv, mu.eta = mu.eta, 
        valideta = valideta, name = link), class = "link-glm")
}

# Examples
power()
quasi(link = power(1/3))[c("linkfun", "linkinv")]

