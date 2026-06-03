#? stdlib
`dumpMethods` <- function (f, file = "", signature = NULL, methods = findMethods(f, 
    where = where), where = topenv(parent.frame())) 
{
    if (length(signature) > 0) 
        warning("argument 'signature' is not meaningful with the current implementation and is ignored \n(extract a subset of the methods list instead)")
    closeit <- TRUE
    isSTDOUT <- FALSE
    if (is.character(file)) {
        if (!(isSTDOUT <- file == "")) 
            file <- file(file, "w")
    }
    else if (inherits(file, "connection")) {
        if (!isOpen(file)) 
            open(file, "w")
        else closeit <- FALSE
    }
    else stop("'file' must be a character string or a connection")
    if (!isSTDOUT) {
        sink(file)
        on.exit({
            sink()
            if (closeit) close(file)
        })
    }
    sigs <- methods@signatures
    for (i in seq_along(methods)) dumpMethod(f, sigs[[i]], file = "", 
        def = methods[[i]])
}
