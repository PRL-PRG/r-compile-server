#? stdlib
`as.vector.factor` <- function (x, mode = "any") 
{
    if (mode == "list") 
        as.list(x)
    else if (mode == "any" || mode == "character" || mode == 
        "logical") 
        as.vector(levels(x)[x], mode)
    else as.vector(unclass(x), mode)
}
