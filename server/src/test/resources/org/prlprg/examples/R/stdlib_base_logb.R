#? stdlib
`logb` <- function (x, base = exp(1)) 
if (missing(base)) log(x) else log(x, base)
