#? stdlib
`dweibull` <- function (x, shape, scale = 1, log = FALSE) 
.Call(C_dweibull, x, shape, scale, log)
