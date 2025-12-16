#? stdlib
`punif` <- function (q, min = 0, max = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_punif, q, min, max, lower.tail, log.p)
