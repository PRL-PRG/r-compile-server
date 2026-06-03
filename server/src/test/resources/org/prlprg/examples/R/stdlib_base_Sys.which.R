#? stdlib
`Sys.which` <- function (names) 
{
    res <- character(length(names))
    names(res) <- names
    which <- "/usr/bin/which"
    if (!nzchar(which)) {
        warning("'which' was not found on this platform")
        return(res)
    }
    for (i in seq_along(names)) {
        if (is.na(names[i])) {
            res[i] <- NA
            next
        }
        ans <- suppressWarnings(system(paste(which, shQuote(names[i])), 
            intern = TRUE, ignore.stderr = TRUE))
        if (grepl("solaris", R.version$os)) {
            tmp <- strsplit(ans[1], " ", fixed = TRUE)[[1]]
            if (identical(tmp[1:3], c("no", i, "in"))) 
                ans <- ""
        }
        res[i] <- if (length(ans)) 
            ans[1]
        else ""
        if (!file.exists(res[i])) 
            res[i] <- ""
    }
    res
}

# Examples
## the first two are likely to exist everywhere
## texi2dvi exists on most Unix-alikes and under MiKTeX
Sys.which(c("ftp", "ping", "texi2dvi", "this-does-not-exist"))

