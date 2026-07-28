#? stdlib
`pgeom` <- function (q, prob, lower.tail = TRUE, log.p = FALSE) 
.Call(C_pgeom, q, prob, lower.tail, log.p)
