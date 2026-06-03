#? stdlib
`url.show` <- function (url, title = url, file = tempfile(), delete.file = TRUE, 
    method, ...) 
{
    if (download.file(url, destfile = file, method = method, 
        mode = "w")) 
        stop("transfer failure")
    file.show(file, delete.file = delete.file, title = title, 
        ...)
}

# Examples


