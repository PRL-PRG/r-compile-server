#? stdlib
`qnorm` <- function (p, mean = 0, sd = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_qnorm, p, mean, sd, lower.tail, log.p)
