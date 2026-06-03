#? stdlib
`D` <- function (expr, name) 
.External(C_doD, expr, name)
