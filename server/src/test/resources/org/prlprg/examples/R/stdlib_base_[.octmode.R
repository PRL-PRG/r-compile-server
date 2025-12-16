#? stdlib
`[.octmode` <- function (x, i) 
{
    cl <- oldClass(x)
    y <- NextMethod("[")
    oldClass(y) <- cl
    y
}
