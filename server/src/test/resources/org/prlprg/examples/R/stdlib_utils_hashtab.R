#? stdlib
`hashtab` <- function (type = c("identical", "address"), size) 
{
    K <- if (missing(size)) 
        3
    else ceiling(log2(2 * size))
    type <- match.arg(type)
    .External(C_hashtab_Ext, type, K)
}
