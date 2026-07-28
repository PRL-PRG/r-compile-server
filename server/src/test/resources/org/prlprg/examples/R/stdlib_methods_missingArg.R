#? stdlib
`missingArg` <- function (symbol, envir = parent.frame(), eval = FALSE) 
.Call(C_R_missingArg, if (eval) symbol else substitute(symbol), 
    envir)
