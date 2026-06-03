#? stdlib
`qsignrank` <- function (p, n, lower.tail = TRUE, log.p = FALSE) 
{
    on.exit(.External(C_signrank_free))
    .Call(C_qsignrank, p, n, lower.tail, log.p)
}
