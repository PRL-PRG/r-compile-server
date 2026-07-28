#? stdlib
`dbinom` <- function (x, size, prob, log = FALSE) 
.Call(C_dbinom, x, size, prob, log)
