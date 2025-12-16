#? stdlib
`open.srcfilecopy` <- function (con, line, ...) 
{
    srcfile <- con
    oldline <- srcfile$line
    if (!is.null(oldline) && oldline > line) 
        close(srcfile)
    conn <- srcfile$conn
    if (is.null(conn)) {
        srcfile$conn <- conn <- textConnection(srcfile$lines, 
            open = "r")
        srcfile$line <- 1L
        oldline <- 1L
    }
    else if (!isOpen(conn)) {
        open(conn, open = "r")
        srcfile$line <- 1L
        oldline <- 1L
    }
    if (oldline < line) {
        readLines(conn, line - oldline, warn = FALSE)
        srcfile$line <- line
    }
    invisible(conn)
}
