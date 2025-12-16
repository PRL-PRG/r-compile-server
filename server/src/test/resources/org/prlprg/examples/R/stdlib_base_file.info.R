#? stdlib
`file.info` <- function (..., extra_cols = TRUE) 
{
    res <- .Internal(file.info(fn <- c(...), extra_cols))
    res$mtime <- .POSIXct(res$mtime)
    res$ctime <- .POSIXct(res$ctime)
    res$atime <- .POSIXct(res$atime)
    class(res) <- "data.frame"
    attr(res, "row.names") <- fn
    res
}

# Examples
ncol(finf <- file.info(dir()))  # at least six
\donttest{finf # the whole list}
## Those that are more than 100 days old :
finf <- file.info(dir(), extra_cols = FALSE)
finf[difftime(Sys.time(), finf[,"mtime"], units = "days") > 100 , 1:4]

file.info("no-such-file-exists")

\donttest{## E.g., for R-core, in a R-devel version:
if(Sys.info()[["sysname"]] == "Linux") 
    sort(file.mtime(file.path(R.home("bin"),
                             c("",
                               file.path(c("", "exec"), "R")))
         ))
}
