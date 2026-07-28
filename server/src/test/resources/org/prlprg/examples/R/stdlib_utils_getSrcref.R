#? stdlib
`getSrcref` <- function (x) 
{
    if (inherits(x, "srcref")) 
        x
    else if (!is.null(srcref <- attr(x, "srcref")) || is.function(x) && 
        !is.null(srcref <- getSrcref(body(x)))) 
        srcref
    else if (methods::is(x, "MethodDefinition")) 
        getSrcref(unclass(methods::unRematchDefinition(x)))
}
