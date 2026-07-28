#? stdlib
`as.character.condition` <- function (x, ...) 
{
    msg <- conditionMessage(x)
    call <- conditionCall(x)
    cl <- class(x)[1L]
    if (!is.null(call)) 
        paste0(cl, " in ", deparse(call, nlines = 1L), ": ", 
            msg, "\n")
    else paste0(cl, ": ", msg, "\n")
}
