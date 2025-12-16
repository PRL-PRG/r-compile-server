#? stdlib
`dnbinom` <- function (x, size, prob, mu, log = FALSE) 
{
    if (!missing(mu)) {
        if (!missing(prob)) 
            stop("'prob' and 'mu' both specified")
        .Call(C_dnbinom_mu, x, size, mu, log)
    }
    else .Call(C_dnbinom, x, size, prob, log)
}
