#? stdlib
`dcauchy` <- function (x, location = 0, scale = 1, log = FALSE) 
.Call(C_dcauchy, x, location, scale, log)
