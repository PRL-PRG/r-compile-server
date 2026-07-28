#? stdlib
`is.na<-.numeric_version` <- function (x, value) 
{
    x[value] <- list(integer())
    x
}
