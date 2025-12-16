#? stdlib
`.isOpen` <- function (srcfile) 
{
    conn <- srcfile$conn
    return(!is.null(conn) && isOpen(conn))
}
