#? stdlib
`dunif` <- function (x, min = 0, max = 1, log = FALSE) 
.Call(C_dunif, x, min, max, log)
