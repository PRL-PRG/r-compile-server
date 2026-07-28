#? stdlib
`argsAnywhere` <- function (x) 
{
    if (tryCatch(!is.character(x), error = function(e) TRUE)) 
        x <- as.character(substitute(x))
    fs <- getAnywhere(x)
    if (sum(!fs$dups) == 0L) 
        return(NULL)
    if (sum(!fs$dups) > 1L) 
        sapply(fs$objs[!fs$dups], function(f) if (is.function(f)) 
            args(f))
    else args(fs$objs[[1L]])
}
