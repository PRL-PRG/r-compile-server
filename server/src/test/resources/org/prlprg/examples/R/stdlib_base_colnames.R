#? stdlib
`colnames` <- function (x, do.NULL = TRUE, prefix = "col") 
{
    if (is.data.frame(x) && do.NULL) 
        names(x)
    else dimnames(x)[[2L]] %||% if (do.NULL) 
        NULL
    else {
        nc <- NCOL(x)
        if (nc > 0L) 
            paste0(prefix, seq_len(nc))
        else character()
    }
}
