#? stdlib
`file` <- function (description = "", open = "", blocking = TRUE, encoding = getOption("encoding"), 
    raw = FALSE, method = getOption("url.method", "default")) 
{
    .Internal(file(description, open, blocking, encoding, method, 
        raw))
}
