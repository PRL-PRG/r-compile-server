#? stdlib
`print.check_package_code_syntax` <- function (x, ...) 
{
    first <- TRUE
    for (i in seq_along(x)) {
        if (!first) 
            writeLines("")
        else first <- FALSE
        xi <- x[[i]]
        if (length(xi$Error)) {
            msg <- gsub("\n", "\n  ", sub("[^:]*: *", "", xi$Error), 
                perl = TRUE, useBytes = TRUE)
            writeLines(c(sprintf("Error in file '%s':", xi$File), 
                paste0("  ", msg)))
        }
        if (len <- length(xi$Warnings)) 
            writeLines(c(sprintf(ngettext(len, "Warning in file %s:", 
                "Warnings in file %s:"), sQuote(xi$File)), paste0("  ", 
                gsub("\n\n", "\n  ", xi$Warnings, perl = TRUE, 
                  useBytes = TRUE))))
    }
    invisible(x)
}
