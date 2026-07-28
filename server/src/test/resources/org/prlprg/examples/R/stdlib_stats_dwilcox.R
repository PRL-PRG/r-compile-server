#? stdlib
`dwilcox` <- function (x, m, n, log = FALSE) 
{
    on.exit(.External(C_wilcox_free))
    .Call(C_dwilcox, x, m, n, log)
}
