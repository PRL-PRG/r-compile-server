#? stdlib
`file_path_as_absolute` <- function (x) 
{
    if (length(x) != 1L) 
        stop("'x' must be a single character string")
    if (!file.exists(epath <- path.expand(x))) 
        stop(gettextf("file '%s' does not exist", x), domain = NA)
    normalizePath(epath, "/", TRUE)
}
