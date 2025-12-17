#? stdlib
`fft` <- function (z, inverse = FALSE) 
.Call(C_fft, z, inverse)
