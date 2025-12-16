#? stdlib
`vcov.mlm` <- function (object, complete = TRUE, names = FALSE, ...) 
{
    so <- summary.mlm(object, ny = 1L, names = names)[[1L]]
    kronecker(estVar(object), .vcov.aliased(so$aliased, so$cov.unscaled, 
        complete = complete), make.dimnames = TRUE)
}
