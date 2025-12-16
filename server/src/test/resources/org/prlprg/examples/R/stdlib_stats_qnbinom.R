#? stdlib
`qnbinom` <- function (p, size, prob, mu, lower.tail = TRUE, log.p = FALSE) 
{
    if (!missing(mu)) {
        if (!missing(prob)) 
            stop("'prob' and 'mu' both specified")
        .Call(C_qnbinom_mu, p, size, mu, lower.tail, log.p)
    }
    else .Call(C_qnbinom, p, size, prob, lower.tail, log.p)
}
