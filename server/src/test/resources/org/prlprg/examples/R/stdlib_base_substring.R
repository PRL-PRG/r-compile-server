#? stdlib
`substring` <- function (text, first, last = 1000000L) 
{
    if (!is.character(text)) 
        text <- as.character(text)
    n <- max(lt <- length(text), length(first), length(last))
    if (lt && lt < n) 
        text <- rep_len(text, length.out = n)
    .Internal(substr(text, as.integer(first), as.integer(last)))
}
