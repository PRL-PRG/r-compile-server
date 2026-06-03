#? stdlib
`pexp` <- function (q, rate = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_pexp, q, 1/rate, lower.tail, log.p)
