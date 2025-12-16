#? stdlib
`Pair` <- function (x, y) 
{
    pp <- cbind(x, y)
    class(pp) <- "Pair"
    pp
}

# Examples
