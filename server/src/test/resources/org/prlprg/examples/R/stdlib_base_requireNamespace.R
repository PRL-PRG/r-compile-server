#? stdlib
`requireNamespace` <- function (package, ..., quietly = FALSE) 
{
    package <- as.character(package)[[1L]]
    ns <- .Internal(getRegisteredNamespace(package))
    res <- TRUE
    if (is.null(ns)) {
        if (!quietly) 
            packageStartupMessage(gettextf("Loading required namespace: %s", 
                package), domain = NA)
        value <- tryCatch(loadNamespace(package, ...), error = function(e) e)
        if (inherits(value, "error")) {
            if (!quietly) {
                msg <- conditionMessage(value)
                cat("Failed with error:  ", sQuote(msg), "\n", 
                  file = stderr(), sep = "")
                .Internal(printDeferredWarnings())
            }
            res <- FALSE
        }
    }
    invisible(res)
}
