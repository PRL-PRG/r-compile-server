#? stdlib
`relist.default` <- function (flesh, skeleton = attr(flesh, "skeleton")) 
{
    result <- flesh
    names(result) <- names(skeleton)
    result
}
