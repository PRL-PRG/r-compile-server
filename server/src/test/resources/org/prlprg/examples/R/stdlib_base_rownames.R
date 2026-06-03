#? stdlib
`rownames` <- function (x, do.NULL = TRUE, prefix = "row") 
{
    dimnames(x)[[1L]] %||% if (do.NULL) 
        NULL
    else {
        nr <- NROW(x)
        if (nr > 0L) 
            paste0(prefix, seq_len(nr))
        else character()
    }
}
