#? stdlib
`dynamicHelpURL` <- function (path, port = httpdPort()) 
paste0("http://127.0.0.1:", port, path)
