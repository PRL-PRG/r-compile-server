#? stdlib
`qweibull` <- function (p, shape, scale = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_qweibull, p, shape, scale, lower.tail, log.p)
