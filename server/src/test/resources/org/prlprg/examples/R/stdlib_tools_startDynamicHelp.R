#? stdlib
`startDynamicHelp` <- function (start = TRUE) 
{
    if (nzchar(Sys.getenv("R_DISABLE_HTTPD"))) {
        httpdPort(-1L)
        warning("httpd server disabled by R_DISABLE_HTTPD", immediate. = TRUE)
        utils::flush.console()
        return(invisible(httpdPort()))
    }
    port <- httpdPort()
    if (is.na(start)) {
        if (port <= 0L) 
            return(startDynamicHelp(TRUE))
        return(invisible(port))
    }
    if (start && port) {
        if (port > 0L) 
            stop("server already running")
        else stop("server could not be started on an earlier attempt")
    }
    if (!start && (port <= 0L)) 
        stop("no running server to stop")
    if (start) {
        utils::flush.console()
        OK <- FALSE
        ports <- getOption("help.ports")
        if (is.null(ports)) {
            ports <- 10000 + 22000 * ((stats::runif(10) + unclass(Sys.time())/300)%%1)
        }
        ports <- as.integer(ports)
        if (all(ports == 0)) 
            return(invisible(0))
        message("starting httpd help server ...", appendLF = FALSE)
        for (i in seq_along(ports)) {
            status <- .Call(C_startHTTPD, "127.0.0.1", ports[i])
            if (status == 0L) {
                OK <- TRUE
                httpdPort(ports[i])
                break
            }
            if (status != -2L) 
                break
        }
        if (OK) {
            message(" done")
            utils::flush.console()
        }
        else {
            warning("failed to start the httpd server", immediate. = TRUE)
            utils::flush.console()
            httpdPort(-1L)
        }
    }
    else {
        .Call(C_stopHTTPD)
        httpdPort(0L)
    }
    invisible(httpdPort())
}

# Examples
