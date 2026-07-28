#? stdlib
`.source_assignments` <- function (file, envir, enc = NA) 
{
    oop <- options(topLevelEnvironment = envir, keep.source = FALSE)
    on.exit(options(oop))
    assignmentSymbols <- c("<-", "=")
    con <- if (!is.na(enc) && (Sys.getlocale("LC_CTYPE") %notin% 
        c("C", "POSIX"))) {
        on.exit(close(con), add = TRUE)
        file(file, encoding = enc)
    }
    else file
    exprs <- parse(n = -1L, file = con)
    exprs <- exprs[lengths(exprs) > 0L]
    for (e in exprs) {
        if (is.call(e) && as.character(e[[1L]])[1L] %in% assignmentSymbols) 
            tryCatch(eval(e, envir), error = identity)
    }
    invisible()
}
