#? stdlib
`optimHess` <- function (par, fn, gr = NULL, ..., control = list()) 
{
    fn1 <- function(par) fn(par, ...)
    gr1 <- if (!is.null(gr)) 
        function(par) gr(par, ...)
    npar <- length(par)
    con <- list(fnscale = 1, parscale = rep.int(1, npar), ndeps = rep.int(0.001, 
        npar))
    con[(names(control))] <- control
    .External2(C_optimhess, par, fn1, gr1, con)
}
