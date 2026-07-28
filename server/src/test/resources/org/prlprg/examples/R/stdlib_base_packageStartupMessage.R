#? stdlib
`packageStartupMessage` <- function (..., domain = NULL, appendLF = TRUE) 
{
    call <- sys.call()
    msg <- .makeMessage(..., domain = domain, appendLF = appendLF)
    message(.packageStartupMessage(msg, call))
}
