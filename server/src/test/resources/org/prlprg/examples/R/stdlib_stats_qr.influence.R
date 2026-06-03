#? stdlib
`qr.influence` <- function (qr, res, tol = 10 * .Machine$double.eps) 
.Call(C_influence, qr, res, tol)
