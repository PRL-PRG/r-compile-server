#? stdlib
`print.socket` <- function (x, ...) 
{
    if (length(as.integer(x$socket)) != 1L) 
        stop("invalid 'socket' argument")
    cat("Socket connection #", x$socket, "to", x$host, "on port", 
        x$port, "\n")
    invisible(x)
}
