#? stdlib
`qcauchy` <- function (p, location = 0, scale = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_qcauchy, p, location, scale, lower.tail, log.p)
