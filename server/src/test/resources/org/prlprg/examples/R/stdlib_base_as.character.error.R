#? stdlib
`as.character.error` <- function (x, ...) 
{
    msg <- conditionMessage(x)
    call <- conditionCall(x)
    if (!is.null(call)) 
        paste0("Error in ", deparse(call, nlines = 1L), ": ", 
            msg, "\n")
    else paste0("Error: ", msg, "\n")
}
