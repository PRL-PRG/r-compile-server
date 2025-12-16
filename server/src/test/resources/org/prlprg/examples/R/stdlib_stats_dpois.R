#? stdlib
`dpois` <- function (x, lambda, log = FALSE) 
.Call(C_dpois, x, lambda, log)
