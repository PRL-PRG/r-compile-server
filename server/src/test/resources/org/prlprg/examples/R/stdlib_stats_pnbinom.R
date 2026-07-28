#? stdlib
`pnbinom` <- function (q, size, prob, mu, lower.tail = TRUE, log.p = FALSE) 
{
    if (!missing(mu)) {
        if (!missing(prob)) 
            stop("'prob' and 'mu' both specified")
        .Call(C_pnbinom_mu, q, size, mu, lower.tail, log.p)
    }
    else .Call(C_pnbinom, q, size, prob, lower.tail, log.p)
}
