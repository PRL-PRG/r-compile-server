#? stdlib
`Axis` <- function (x = NULL, at = NULL, ..., side, labels = NULL) 
{
    if (!is.null(x)) 
        UseMethod("Axis", x)
    else if (!is.null(at)) 
        UseMethod("Axis", at)
    else axis(side = side, at = at, labels = labels, ...)
}

# Examples
