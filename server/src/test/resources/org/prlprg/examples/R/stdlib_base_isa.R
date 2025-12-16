#? stdlib
`isa` <- function (x, what) 
{
    if (isS4(x)) 
        methods::is(x, what)
    else all(class(x) %in% what)
}
