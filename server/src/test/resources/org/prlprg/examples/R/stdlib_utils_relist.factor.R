#? stdlib
`relist.factor` <- function (flesh, skeleton = attr(flesh, "skeleton")) 
{
    as.factor(levels(skeleton)[flesh])
}
