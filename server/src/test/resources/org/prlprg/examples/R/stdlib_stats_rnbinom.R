#? stdlib
`rnbinom` <- function (n, size, prob, mu) 
{
    if (!missing(mu)) {
        if (!missing(prob)) 
            stop("'prob' and 'mu' both specified")
        .Call(C_rnbinom_mu, n, size, mu)
    }
    else .Call(C_rnbinom, n, size, prob)
}
