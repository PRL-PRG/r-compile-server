#? stdlib
`[[.numeric_version` <- function (x, ..., exact = NA) 
{
    if (...length() < 2L) 
        structure(list(unclass(x)[[..., exact = exact]]), class = oldClass(x))
    else unclass(x)[[..1, exact = exact]][..2]
}
