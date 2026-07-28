#? stdlib
`makeUserAgent` <- function (format = TRUE) 
{
    agent <- getOption("HTTPUserAgent")
    if (is.null(agent)) {
        return(NULL)
    }
    if (length(agent) != 1L) 
        stop(gettextf("%s option must be a length one character vector or NULL", 
            sQuote("HTTPUserAgent")), domain = NA)
    if (format) 
        paste0("User-Agent: ", agent[1L], "\r\n")
    else agent[1L]
}
