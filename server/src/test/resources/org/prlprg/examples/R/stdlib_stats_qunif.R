#? stdlib
`qunif` <- function (p, min = 0, max = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_qunif, p, min, max, lower.tail, log.p)
