#? stdlib
`phyper` <- function (q, m, n, k, lower.tail = TRUE, log.p = FALSE) 
.Call(C_phyper, q, m, n, k, lower.tail, log.p)
