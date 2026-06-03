#? stdlib
`xtfrm.numeric_version` <- function (x) 
{
    x <- .encode_numeric_version(x)
    NextMethod("xtfrm")
}
