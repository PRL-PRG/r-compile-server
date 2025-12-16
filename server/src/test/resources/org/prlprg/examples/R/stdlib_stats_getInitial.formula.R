#? stdlib
`getInitial.formula` <- function (object, data, ...) 
{
    attr(data, "parameters") %||% {
        len <- length(object)
        if (len == 1L) 
            stop("argument 'object' has an impossible length")
        LHS <- if (len == 3L) 
            object[[2L]]
        RHS <- object[[len]]
        if (!is.call(RHS)) 
            stop("right-hand side of formula is not a call")
        func <- eval(RHS[[1L]], environment(object))
        getInitial(func, data, mCall = as.list(match.call(func, 
            call = RHS)), LHS = LHS, ...)
    }
}
