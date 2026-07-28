#? stdlib
`round.Date` <- function (x, ...) 
{
    .Date(NextMethod(), oldClass(x))
}
