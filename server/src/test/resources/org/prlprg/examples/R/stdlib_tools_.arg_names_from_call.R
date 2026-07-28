#? stdlib
`.arg_names_from_call` <- function (x) 
{
    y <- as.character(x)
    if (!is.null(nx <- names(x))) {
        ind <- which(nzchar(nx))
        y[ind] <- nx[ind]
    }
    y
}
