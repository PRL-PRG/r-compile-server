#? stdlib
`lower.tri` <- function (x, diag = FALSE) 
{
    d <- dim(x)
    if (length(d) != 2L) 
        d <- dim(as.matrix(x))
    if (diag) 
        .row(d) >= .col(d)
    else .row(d) > .col(d)
}

# Examples
(m2 <- matrix(1:20, 4, 5))
lower.tri(m2)
m2[lower.tri(m2)] <- NA
m2

