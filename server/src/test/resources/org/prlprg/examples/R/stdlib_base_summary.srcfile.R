#? stdlib
`summary.srcfile` <- function (object, ...) 
{
    cat(utils:::.normalizePath(object$filename, object$wd), "\n")
    if (inherits(object$timestamp, "POSIXt")) 
        cat("Timestamp: ", format(object$timestamp, usetz = TRUE), 
            "\n", sep = "")
    cat("Encoding: \"", object$encoding, "\"", sep = "")
    if (!is.null(object$Enc) && object$Enc != object$encoding && 
        object$Enc != "unknown") 
        cat(", re-encoded to \"", object$Enc, "\"", sep = "")
    cat("\n")
    invisible(object)
}
