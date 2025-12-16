#? stdlib
`ppois` <- function (q, lambda, lower.tail = TRUE, log.p = FALSE) 
.Call(C_ppois, q, lambda, lower.tail, log.p)
