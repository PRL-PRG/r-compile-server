#? stdlib
`print.DLLInfoList` <- function (x, ...) 
{
    if (length(x)) {
        m <- data.frame(Filename = sapply(x, function(x) x[["path"]]), 
            `Dynamic Lookup` = sapply(x, function(x) x[["dynamicLookup"]]))
        print(m, ...)
    }
    invisible(x)
}
