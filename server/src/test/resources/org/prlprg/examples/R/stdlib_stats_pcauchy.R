#? stdlib
`pcauchy` <- function (q, location = 0, scale = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_pcauchy, q, location, scale, lower.tail, log.p)
