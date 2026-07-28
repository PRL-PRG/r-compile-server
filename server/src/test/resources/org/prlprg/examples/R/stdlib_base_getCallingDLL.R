#? stdlib
`getCallingDLL` <- function (f = sys.function(-1), doStop = FALSE) 
{
    e <- environment(f)
    if (!isNamespace(e)) {
        if (doStop) 
            stop("function is not in a namespace, so cannot locate associated DLL")
        else return(NULL)
    }
    if (is.null(r <- getCallingDLLe(e)) && doStop) 
        stop("looking for DLL for native routine call, but no DLLs in namespace of call")
    r
}

# Examples
if(exists("ansari.test"))
   getCallingDLL(ansari.test)

