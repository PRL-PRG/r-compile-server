#? stdlib
`.S3method` <- function (generic, class, method) 
{
    if (missing(method)) 
        method <- paste(generic, class, sep = ".")
    method <- match.fun(method)
    registerS3method(generic, class, method, envir = parent.frame())
    invisible(NULL)
}
