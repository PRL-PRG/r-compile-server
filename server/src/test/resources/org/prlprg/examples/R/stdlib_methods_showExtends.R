#? stdlib
`showExtends` <- function (ext, printTo = stdout()) 
{
    what <- names(ext)
    how <- character(length(ext))
    for (i in seq_along(ext)) {
        eli <- el(ext, i)
        if (is(eli, "SClassExtension")) {
            how[i] <- if (length(eli@by)) 
                paste("by class", paste0("\"", eli@by, "\", distance ", 
                  eli@distance, collapse = ", "))
            else if (isTRUE(eli@dataPart)) 
                "from data part"
            else "directly"
            if (!eli@simple) {
                if (is.function(eli@test) && !isTRUE(body(eli@test))) {
                  how[i] <- paste0(how[i], if (is.function(eli@coerce)) 
                    ", with explicit test and coerce"
                  else ", with explicit test")
                }
                else if (is.function(eli@coerce)) 
                  how[i] <- paste0(how[i], ", with explicit coerce")
            }
        }
    }
    if (isFALSE(printTo)) 
        list(what = what, how = how)
    else if (all(!nzchar(how)) || all(how == "directly")) {
        what <- paste0("\"", what, "\"")
        if (length(what) > 1L) 
            what <- c(paste0(what[-length(what)], ","), what[[length(what)]])
        cat(file = printTo, what, fill = TRUE)
    }
    else cat(file = printTo, "\n", paste0("Class \"", what, "\", ", 
        how, "\n"), sep = "")
}
