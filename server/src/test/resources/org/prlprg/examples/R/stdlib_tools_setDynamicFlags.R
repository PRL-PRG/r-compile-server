#? stdlib
`setDynamicFlags` <- function (block, flags) 
{
    flag <- sum(flags * c(1L, 2L, 4L, 8L, 16L))
    if (flag == 0L) 
        flag <- NULL
    attr(block, "dynamicFlag") <- flag
    block
}
