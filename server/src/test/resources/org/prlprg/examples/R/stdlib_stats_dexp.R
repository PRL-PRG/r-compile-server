#? stdlib
`dexp` <- function (x, rate = 1, log = FALSE) 
.Call(C_dexp, x, 1/rate, log)
