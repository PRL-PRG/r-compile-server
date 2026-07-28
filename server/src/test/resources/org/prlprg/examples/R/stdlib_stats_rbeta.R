#? stdlib
`rbeta` <- function (n, shape1, shape2, ncp = 0) 
{
    if (missing(ncp)) 
        .Call(C_rbeta, n, shape1, shape2)
    else {
        X <- rchisq(n, 2 * shape1, ncp = ncp)
        X/(X + rchisq(n, 2 * shape2))
    }
}
