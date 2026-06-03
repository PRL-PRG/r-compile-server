#? stdlib
`mvfft` <- function (z, inverse = FALSE) 
.Call(C_mvfft, z, inverse)
