#? stdlib
`psignrank` <- function (q, n, lower.tail = TRUE, log.p = FALSE) 
{
    on.exit(.External(C_signrank_free))
    .Call(C_psignrank, q, n, lower.tail, log.p)
}
