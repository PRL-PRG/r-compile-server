#? stdlib
`print.condition` <- function (x, ...) 
{
    msg <- conditionMessage(x)
    call <- conditionCall(x)
    cl <- class(x)[1L]
    if (!is.null(call)) 
        cat("<", cl, " in ", deparse(call), ": ", msg, ">\n", 
            sep = "")
    else cat("<", cl, ": ", msg, ">\n", sep = "")
    invisible(x)
}
