#? stdlib
`rhyper` <- function (nn, m, n, k) 
.Call(C_rhyper, nn, m, n, k)
