#? stdlib
`qpois` <- function (p, lambda, lower.tail = TRUE, log.p = FALSE) 
.Call(C_qpois, p, lambda, lower.tail, log.p)
