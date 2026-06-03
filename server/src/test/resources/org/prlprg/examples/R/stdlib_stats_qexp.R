#? stdlib
`qexp` <- function (p, rate = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_qexp, p, 1/rate, lower.tail, log.p)
