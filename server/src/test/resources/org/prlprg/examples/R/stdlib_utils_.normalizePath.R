#? stdlib
`.normalizePath` <- function (path, wd) 
{
    if (!missing(wd) && !is.null(wd)) {
        oldwd <- setwd(wd)
        on.exit(setwd(oldwd))
    }
    suppressWarnings(normalizePath(path))
}
