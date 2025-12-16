#? stdlib
`.approxfun` <- function (x, y, v, method, yleft, yright, f, na.rm = TRUE) 
.Call(C_Approx, x, y, v, method, yleft, yright, f, na.rm)
