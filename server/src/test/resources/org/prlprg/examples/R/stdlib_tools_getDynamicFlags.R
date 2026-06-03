#? stdlib
`getDynamicFlags` <- function (block) 
{
    flag <- attr(block, "dynamicFlag")
    if (is.null(flag)) 
        c(`#ifdef` = FALSE, `\\Sexpr` = FALSE, build = FALSE, 
            install = FALSE, render = FALSE)
    else c(`#ifdef` = flag%%2L > 0L, `\\Sexpr` = (flag%/%2L)%%2L > 
        0L, build = (flag%/%4L)%%2L > 0L, install = (flag%/%8L)%%2L > 
        0L, render = (flag%/%16L)%%2L > 0L)
}
