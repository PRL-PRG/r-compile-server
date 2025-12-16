#? stdlib
`close.srcfile` <- function (con, ...) 
{
    srcfile <- con
    conn <- srcfile$conn
    if (is.null(conn)) 
        return()
    else {
        close(conn)
        rm(list = c("conn", "line"), envir = srcfile)
    }
}
