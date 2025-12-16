#? stdlib
`socketAccept` <- function (socket, blocking = FALSE, open = "a+", encoding = getOption("encoding"), 
    timeout = getOption("timeout"), options = getOption("socketOptions")) 
.Internal(socketAccept(socket, blocking, open, encoding, timeout, 
    options))
