#? stdlib
`dumpMethod` <- function (f, signature = character(), file = defaultDumpName(f, 
    signature), where = topenv(parent.frame()), def = getMethod(f, 
    signature, where = where, optional = TRUE)) 
{
    if (!is.function(def)) 
        def <- getMethod(f, character(), where = where, optional = TRUE)
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
    cat("setMethod(\"", f, "\", ", deparse(signature), ",\n", 
        sep = "")
    dput(def@.Data)
    cat(")\n", sep = "")
    if (!isSTDOUT) {
        on.exit()
        sink()
        if (closeit) 
            close(file)
    }
    invisible(file)
}
