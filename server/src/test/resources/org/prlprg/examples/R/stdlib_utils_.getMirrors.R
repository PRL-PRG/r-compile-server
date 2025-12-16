#? stdlib
`.getMirrors` <- function (url, local.file, all, local.only) 
{
    m <- NULL
    if (!local.only) {
        f <- tempfile()
        on.exit(unlink(f))
        m <- tryCatch({
            m <- download.file(url, destfile = f, quiet = TRUE)
            if (m != 0L) 
                stop(gettextf("'download.file()' error code '%d'", 
                  m))
            read.csv(f, as.is = TRUE, encoding = "UTF-8")
        }, error = function(err) {
            warning(gettextf("failed to download mirrors file (%s); using local file '%s'", 
                conditionMessage(err), local.file), call. = FALSE, 
                immediate. = TRUE)
            NULL
        })
    }
    if (is.null(m)) 
        m <- read.csv(local.file, as.is = TRUE, encoding = "UTF-8")
    if (!all) 
        m <- m[as.logical(m$OK), ]
    m
}
