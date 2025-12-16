#? stdlib
`open.srcfile` <- function (con, line, ...) 
{
    srcfile <- con
    oldline <- srcfile$line
    if (!is.null(oldline) && oldline > line) 
        close(srcfile)
    conn <- srcfile$conn
    if (is.null(conn)) {
        if (!is.null(srcfile$wd)) {
            olddir <- setwd(srcfile$wd)
            on.exit(setwd(olddir))
        }
        timestamp <- file.mtime(srcfile$filename)
        if (!is.null(srcfile$timestamp) && !is.na(srcfile$timestamp) && 
            (is.na(timestamp) || timestamp != srcfile$timestamp)) 
            warning(gettextf("Timestamp of %s has changed", sQuote(srcfile$filename)), 
                call. = FALSE, domain = NA)
        if (is.null(srcfile$encoding)) 
            encoding <- getOption("encoding")
        else encoding <- srcfile$encoding
        srcfile$conn <- conn <- file(srcfile$filename, open = "rt", 
            encoding = encoding)
        srcfile$line <- 1L
        oldline <- 1L
    }
    else if (!isOpen(conn)) {
        open(conn, open = "rt")
        srcfile$line <- 1
        oldline <- 1L
    }
    if (oldline < line) {
        readLines(conn, line - oldline, warn = FALSE)
        srcfile$line <- line
    }
    invisible(conn)
}
