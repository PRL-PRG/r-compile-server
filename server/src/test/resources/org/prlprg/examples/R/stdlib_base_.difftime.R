#? stdlib
`.difftime` <- function (xx, units, cl = "difftime") 
{
    class(xx) <- cl
    attr(xx, "units") <- units
    xx
}
