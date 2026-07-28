#? stdlib
`format.check_package_datalist` <- function (x, ...) 
{
    fmt <- function(s) .strwrap22(s, " ")
    c(character(), if (length(y <- x$n12)) c("Data files in 'datalist' not in 'data' directory:", 
        fmt(y)), if (length(y <- x$n21)) c("Data files in 'data' directory not in 'datalist':", 
        fmt(y)), if (length(y <- x$e12)) c("Data objects in 'datalist' not in 'data' directory:", 
        fmt(y)), if (length(y <- x$e21)) c("Data objects in 'data' directory not in 'datalist':", 
        fmt(y)))
}
