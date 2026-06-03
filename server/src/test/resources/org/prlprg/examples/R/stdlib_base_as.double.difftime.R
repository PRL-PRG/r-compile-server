#? stdlib
`as.double.difftime` <- function (x, units = "auto", ...) 
{
    if (units != "auto") 
        units(x) <- units
    as.vector(x, "double")
}
