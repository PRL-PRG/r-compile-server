#? stdlib
`dlnorm` <- function (x, meanlog = 0, sdlog = 1, log = FALSE) 
.Call(C_dlnorm, x, meanlog, sdlog, log)
