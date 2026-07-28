#? stdlib
`pnorm` <- function (q, mean = 0, sd = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_pnorm, q, mean, sd, lower.tail, log.p)
