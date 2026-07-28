#? stdlib
`pwilcox` <- function (q, m, n, lower.tail = TRUE, log.p = FALSE) 
{
    on.exit(.External(C_wilcox_free))
    .Call(C_pwilcox, q, m, n, lower.tail, log.p)
}
