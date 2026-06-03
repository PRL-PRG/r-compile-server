#? stdlib
`dgeom` <- function (x, prob, log = FALSE) 
.Call(C_dgeom, x, prob, log)
