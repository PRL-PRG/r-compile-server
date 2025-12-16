#? stdlib
`read.socket` <- function (socket, maxlen = 256L, loop = FALSE) 
{
    repeat {
        rval <- .Call(C_sockread, socket$socket, maxlen)
        if (nzchar(rval) || !loop) 
            break
    }
    rval
}

# Examples
finger <- function(user, host = "localhost", port = 79, print = TRUE)
{
    if (!is.character(user))
        stop("user name must be a string")
    user <- paste(user,"\r\n")
    socket <- make.socket(host, port)
    on.exit(close.socket(socket))
    write.socket(socket, user)
    output <- character(0)
    repeat{
        ss <- read.socket(socket)
        if (ss == "") break
        output <- paste(output, ss)
    }
    close.socket(socket)
    if (print) cat(output)
    invisible(output)
}


