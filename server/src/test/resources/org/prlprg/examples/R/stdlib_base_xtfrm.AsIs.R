#? stdlib
`xtfrm.AsIs` <- function (x) 
{
    cl <- oldClass(x)
    oldClass(x) <- cl[cl != "AsIs"]
    NextMethod("xtfrm")
}
