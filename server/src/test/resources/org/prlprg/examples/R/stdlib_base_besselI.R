#? stdlib
`besselI` <- function (x, nu, expon.scaled = FALSE) 
{
    .Internal(besselI(x, nu, 1 + as.logical(expon.scaled)))
}
