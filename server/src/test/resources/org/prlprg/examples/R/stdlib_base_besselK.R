#? stdlib
`besselK` <- function (x, nu, expon.scaled = FALSE) 
{
    .Internal(besselK(x, nu, 1 + as.logical(expon.scaled)))
}
