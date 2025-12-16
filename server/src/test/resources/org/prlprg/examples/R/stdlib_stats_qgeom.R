#? stdlib
`qgeom` <- function (p, prob, lower.tail = TRUE, log.p = FALSE) 
.Call(C_qgeom, p, prob, lower.tail, log.p)
