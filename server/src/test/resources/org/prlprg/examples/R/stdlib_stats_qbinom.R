#? stdlib
`qbinom` <- function (p, size, prob, lower.tail = TRUE, log.p = FALSE) 
.Call(C_qbinom, p, size, prob, lower.tail, log.p)
