#? stdlib
`sigma.mlm` <- function (object, ...) 
sqrt(colSums(object$residuals^2)/object$df.residual)
