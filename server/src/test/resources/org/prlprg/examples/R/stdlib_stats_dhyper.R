#? stdlib
`dhyper` <- function (x, m, n, k, log = FALSE) 
.Call(C_dhyper, x, m, n, k, log)
