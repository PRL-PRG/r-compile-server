#? stdlib
`pbinom` <- function (q, size, prob, lower.tail = TRUE, log.p = FALSE) 
.Call(C_pbinom, q, size, prob, lower.tail, log.p)
