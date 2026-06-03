#? stdlib
`socketConnection` <- function (host = "localhost", port, server = FALSE, blocking = FALSE, 
    open = "a+", encoding = getOption("encoding"), timeout = getOption("timeout"), 
    options = getOption("socketOptions")) 
.Internal(socketConnection(host, port, server, blocking, open, 
    encoding, timeout, options))
