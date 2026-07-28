#? stdlib
`vcov.nls` <- function (object, ...) 
{
    sm <- summary(object)
    sm$cov.unscaled * sm$sigma^2
}
