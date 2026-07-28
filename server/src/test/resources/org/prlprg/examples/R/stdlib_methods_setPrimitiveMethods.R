#? stdlib
`setPrimitiveMethods` <- function (f, fdef, code, generic, mlist = get(".Methods", envir = environment(generic))) 
.Call(C_R_M_setPrimitiveMethods, f, fdef, code, generic, mlist)
