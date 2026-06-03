#? stdlib
`upper.tri` <- function (x, diag = FALSE) 
{
    d <- dim(x)
    if (length(d) != 2L) 
        d <- dim(as.matrix(x))
    if (diag) 
        .row(d) <= .col(d)
    else .row(d) < .col(d)
}
