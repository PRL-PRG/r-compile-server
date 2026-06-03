#? stdlib
`.fileDesc` <- function (file) 
{
    if (is.character(file)) {
        if (nzchar(file)) 
            paste(" to the file", sQuote(file))
        else " to the standard output connection"
    }
    else if (inherits(file, "connection")) 
        paste(" to the connection", sQuote(summary(file)$description))
    else ""
}
