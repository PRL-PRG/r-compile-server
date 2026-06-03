#? stdlib
`diffinv` <- function (x, ...) 
{
    UseMethod("diffinv")
}

# Examples
s <- 1:10
d <- diff(s)
diffinv(d, xi = 1)

