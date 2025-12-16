#? stdlib
`pweibull` <- function (q, shape, scale = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_pweibull, q, shape, scale, lower.tail, log.p)
