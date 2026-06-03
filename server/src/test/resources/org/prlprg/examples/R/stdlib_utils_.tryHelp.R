#? stdlib
`.tryHelp` <- function (topic, package = NULL) 
{
    h <- tryCatch(do.call(help, list(topic, package = package)), 
        error = identity)
    if (inherits(h, "error") || !length(h)) 
        NULL
    else h
}
