#? stdlib
`qhyper` <- function (p, m, n, k, lower.tail = TRUE, log.p = FALSE) 
.Call(C_qhyper, p, m, n, k, lower.tail, log.p)
