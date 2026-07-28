#? stdlib
`I` <- function (x) 
{
    class(x) <- unique.default(c("AsIs", oldClass(x)))
    x
}
