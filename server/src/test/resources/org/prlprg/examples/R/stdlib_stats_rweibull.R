#? stdlib
`rweibull` <- function (n, shape, scale = 1) 
.Call(C_rweibull, n, shape, scale)
