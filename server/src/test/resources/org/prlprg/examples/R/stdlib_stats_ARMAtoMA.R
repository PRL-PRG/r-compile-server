#? stdlib
`ARMAtoMA` <- function (ar = numeric(), ma = numeric(), lag.max) 
.Call(C_ARMAtoMA, as.double(ar), as.double(ma), as.integer(lag.max))

# Examples
ARMAtoMA(c(1.0, -0.25), 1.0, 10)
## Example from Brockwell & Davis (1991, p.92)
## answer (1 + 3*n)*2^(-n)
n <- 1:10; (1 + 3*n)*2^(-n)

