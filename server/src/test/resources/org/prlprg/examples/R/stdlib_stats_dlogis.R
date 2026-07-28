#? stdlib
`dlogis` <- function (x, location = 0, scale = 1, log = FALSE) 
.Call(C_dlogis, x, location, scale, log)
