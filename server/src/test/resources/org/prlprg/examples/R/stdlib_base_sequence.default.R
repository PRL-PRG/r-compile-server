#? stdlib
`sequence.default` <- function (nvec, from = 1L, by = 1L, ...) 
{
    .Internal(sequence(as.integer(nvec), as.integer(from), as.integer(by)))
}
