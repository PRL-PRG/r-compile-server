#? stdlib
`make.socket` <- function (host = "localhost", port, fail = TRUE, server = FALSE) 
{
    if (length(port <- as.integer(port)) != 1L) 
        stop("'port' must be integer of length 1")
    if (length(host <- as.character(host)) != 1L) 
        stop("'host' must be character of length 1")
    if (!server) {
        socket <- .Call(C_sockconnect, port, host)
    }
    else {
        if (host != "localhost") 
            stop("can only receive calls on local machine")
        tmp <- .Call(C_sockopen, port)
        socket <- .Call(C_socklisten, tmp)
        host <- attr(socket, "host")
        .Call(C_sockclose, tmp)
    }
    if (socket <= 0) {
        if (fail) 
            stop("socket not established")
        else warning("socket not established")
    }
    rval <- list(socket = socket, host, port = port)
    class(rval) <- "socket"
    rval
}

# Examples
daytime <- function(host = "localhost"){
    a <- make.socket(host, 13)
    on.exit(close.socket(a))
    read.socket(a)
}
## Official time (UTC) from US Naval Observatory


