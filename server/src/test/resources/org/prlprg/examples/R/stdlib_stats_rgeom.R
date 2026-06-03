#? stdlib
`rgeom` <- function (n, prob) 
.Call(C_rgeom, n, prob)
