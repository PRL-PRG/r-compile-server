#? stdlib
`.lm.fit` <- function (x, y, tol = 1e-07) 
.Call(C_Cdqrls, x, y, tol, check = TRUE)
