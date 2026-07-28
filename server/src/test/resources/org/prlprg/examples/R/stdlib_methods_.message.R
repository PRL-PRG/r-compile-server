#? stdlib
`.message` <- function (..., domain = NULL, appendLF = TRUE) 
{
    text <- paste0(..., collapse = "")
    lines <- strwrap(text, width = max(20, 7 * getOption("width")%/%8))
    message(paste(lines, collapse = "\n"), domain = domain, appendLF = appendLF)
}
