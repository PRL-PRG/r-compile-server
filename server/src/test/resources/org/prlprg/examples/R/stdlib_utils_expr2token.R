#? stdlib
`expr2token` <- function (x, ok = c("<-", "=", "<<-", "assign", "setGeneric", 
    "setGroupGeneric", "setMethod", "setClass", "setClassUnion"), 
    extended = TRUE) 
{
    id <- ""
    value <- if ((length(x) > 1L) && (length(token <- as.character(x[[2L]])) == 
        1L) && (length(id <- as.character(x[[1L]])) == 1L) && 
        (id %in% ok)) 
        token
    else character(0L)
    if (extended && identical(id, "setMethod")) {
        sig <- tryCatch(eval(x[[3L]]), error = identity)
        if (!inherits(sig, "error") && is.character(sig)) 
            value <- paste(c(value, sig), collapse = ",")
    }
    value
}
