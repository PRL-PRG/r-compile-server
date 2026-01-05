#? stdlib
`showNonASCII` <- function (x) 
{
    ind <- .Call(C_nonASCII, x)
    if (any(ind)) {
        message(paste0(which(ind), ": ", iconv(x[ind], "", "ASCII", 
            sub = "byte"), collapse = "\n"), domain = NA)
    }
    invisible(x[ind])
}
