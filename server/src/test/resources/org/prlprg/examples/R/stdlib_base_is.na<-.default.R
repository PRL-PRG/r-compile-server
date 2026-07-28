#? stdlib
`is.na<-.default` <- function (x, value) 
{
    x[value] <- NA
    x
}
