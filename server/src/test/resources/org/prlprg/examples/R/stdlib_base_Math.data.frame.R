#? stdlib
`Math.data.frame` <- function (x, ...) 
{
    mode.ok <- vapply(x, function(x) is.numeric(x) || is.logical(x) || 
        is.complex(x), NA)
    if (all(mode.ok)) {
        x[] <- lapply(X = x, FUN = .Generic, ...)
        return(x)
    }
    else {
        vnames <- names(x)
        if (is.null(vnames)) 
            vnames <- seq_along(x)
        stop("non-numeric-alike variable(s) in data frame: ", 
            paste(vnames[!mode.ok], collapse = ", "))
    }
}
