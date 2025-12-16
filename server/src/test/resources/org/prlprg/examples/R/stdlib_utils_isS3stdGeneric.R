#? stdlib
`isS3stdGeneric` <- function (f) 
{
    bdexpr <- body(if (methods::is(f, "traceable")) 
        f@original
    else f)
    while (is.call(bdexpr) && bdexpr[[1L]] == quote(`{`)) bdexpr <- bdexpr[[2L]]
    ret <- is.call(bdexpr) && bdexpr[[1L]] == quote(UseMethod)
    if (ret) 
        names(ret) <- bdexpr[[2L]]
    ret
}

# Examples
