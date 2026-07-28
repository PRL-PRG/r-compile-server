#? stdlib
`qlnorm` <- function (p, meanlog = 0, sdlog = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_qlnorm, p, meanlog, sdlog, lower.tail, log.p)
