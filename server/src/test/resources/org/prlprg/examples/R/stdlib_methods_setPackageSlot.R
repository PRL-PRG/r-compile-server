#? stdlib
`setPackageSlot` <- function (x, value) 
{
    packageSlot(x) <- value
    x
}
