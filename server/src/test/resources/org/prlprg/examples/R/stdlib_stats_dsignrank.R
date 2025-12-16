#? stdlib
`dsignrank` <- function (x, n, log = FALSE) 
{
    on.exit(.External(C_signrank_free))
    .Call(C_dsignrank, x, n, log)
}
