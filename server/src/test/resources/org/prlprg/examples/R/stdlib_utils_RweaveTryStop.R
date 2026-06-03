#? stdlib
`RweaveTryStop` <- function (err, options) 
{
    if (inherits(err, "try-error")) {
        cat("\n")
        msg <- paste(" chunk", options$chunknr)
        if (!is.null(options$label)) 
            msg <- paste0(msg, " (label = ", options$label, ")")
        msg <- paste(msg, "\n")
        stop(msg, err, call. = FALSE)
    }
}
