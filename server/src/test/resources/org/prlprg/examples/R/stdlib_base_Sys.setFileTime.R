#? stdlib
`Sys.setFileTime` <- function (path, time) 
{
    if (!is.character(path)) 
        stop("invalid 'path' argument")
    time <- as.POSIXct(time)
    if (anyNA(time)) 
        stop("invalid 'time' argument")
    .Internal(setFileTime(path, time))
}
