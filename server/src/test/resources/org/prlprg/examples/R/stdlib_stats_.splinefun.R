#? stdlib
`.splinefun` <- function (x, z) 
.Call(C_SplineEval, x, z)
