#? stdlib
`.makeMessage` <- function (..., domain = NULL, appendLF = FALSE) 
{
    msg <- if (...length()) {
        args <- lapply(list(...), as.character)
        if (is.null(domain) || !is.na(domain)) 
            args <- .Internal(gettext(domain, unlist(args), TRUE))
        paste(args, collapse = "")
    }
    else ""
    if (appendLF) 
        paste0(msg, "\n")
    else msg
}
