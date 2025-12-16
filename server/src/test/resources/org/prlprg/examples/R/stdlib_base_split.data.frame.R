#? stdlib
`split.data.frame` <- function (x, f, drop = FALSE, ...) 
{
    if (inherits(f, "formula")) 
        f <- .formula2varlist(f, x)
    lapply(split(x = seq_len(nrow(x)), f = f, drop = drop, ...), 
        function(ind) x[ind, , drop = FALSE])
}
