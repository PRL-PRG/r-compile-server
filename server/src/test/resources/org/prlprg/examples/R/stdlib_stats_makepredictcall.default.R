#? stdlib
`makepredictcall.default` <- function (var, call) 
{
    if (as.character(call)[1L] != "scale") 
        return(call)
    if (!is.null(z <- attr(var, "scaled:center"))) 
        call$center <- z
    if (!is.null(z <- attr(var, "scaled:scale"))) 
        call$scale <- z
    call
}
