#? stdlib
`tidy_validate_R_httpd_path` <- function (path) 
{
    y <- tryCatch(httpd(path, query = NULL), error = identity)
    if (inherits(y, "error")) 
        return(y)
    if (!is.null(f <- y$file)) {
        if (is.null(y$"content-type")) 
            tidy_validate(f)
        else NULL
    }
    else if (!is.null(payload <- y$payload)) {
        f <- tempfile()
        on.exit(unlink(f))
        writeLines(payload, f)
        tidy_validate(f)
    }
    else NULL
}
