#? stdlib
`.undebugMethod` <- function (fun, signature) 
{
    if (!isdebugged(fun, signature)) {
        warning("method is not being debugged")
    }
    else {
        if (is.primitive(fun)) 
            fun <- getGeneric(fun)
        untrace(fun, signature = signature)
    }
}
