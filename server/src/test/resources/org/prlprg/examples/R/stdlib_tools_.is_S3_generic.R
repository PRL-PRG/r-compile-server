#? stdlib
`.is_S3_generic` <- function (fname, envir, mustMatch = TRUE) 
{
    f <- suppressMessages(get(fname, envir = envir, inherits = FALSE))
    if (!is.function(f)) 
        return(FALSE)
    isUMEbrace <- function(e) {
        for (ee in as.list(e[-1L])) if (nzchar(res <- isUME(ee))) 
            return(res)
        ""
    }
    isUMEif <- function(e) {
        if (length(e) == 3L) 
            isUME(e[[3L]])
        else {
            if (nzchar(res <- isUME(e[[3L]]))) 
                res
            else if (nzchar(res <- isUME(e[[4L]]))) 
                res
            else ""
        }
    }
    isUME <- function(e) {
        if (is.call(e) && (is.name(e[[1L]]) || is.character(e[[1L]]))) {
            switch(as.character(e[[1L]]), UseMethod = as.character(e[[2L]]), 
                `{` = isUMEbrace(e), `if` = isUMEif(e), "")
        }
        else ""
    }
    res <- isUME(body(f))
    if (mustMatch) 
        res == fname
    else nzchar(res)
}
