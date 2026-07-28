#? stdlib
`Negate` <- function (f) 
{
    f <- match.fun(f)
    function(...) !f(...)
}
