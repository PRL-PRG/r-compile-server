#? stdlib
`plnorm` <- function (q, meanlog = 0, sdlog = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_plnorm, q, meanlog, sdlog, lower.tail, log.p)
