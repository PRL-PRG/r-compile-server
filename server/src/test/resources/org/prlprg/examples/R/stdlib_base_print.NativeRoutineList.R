#? stdlib
`print.NativeRoutineList` <- function (x, ...) 
{
    if (length(x)) {
        m <- data.frame(numParameters = sapply(x, function(x) x$numParameters), 
            row.names = sapply(x, function(x) x$name))
        print(m, ...)
    }
    invisible(x)
}
