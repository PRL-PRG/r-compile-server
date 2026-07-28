#? stdlib
`RweaveChunkPrefix` <- function (options) 
{
    if (!is.null(options$label)) {
        if (options$prefix) 
            paste0(options$prefix.string, "-", options$label)
        else options$label
    }
    else paste0(options$prefix.string, "-", formatC(options$chunknr, 
        flag = "0", width = 3))
}
