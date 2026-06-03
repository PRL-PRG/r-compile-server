#? stdlib
`rep.Date` <- function (x, ...) 
{
    .Date(NextMethod(), oldClass(x))
}
