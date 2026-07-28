#? stdlib
`formatOL` <- function (x, type = "arabic", offset = 0, start = 1, width = 0.9 * 
    getOption("width")) 
{
    if (!length(x)) 
        return(character())
    type_tokens <- c("1", "A", "a", "I", "i")
    type_full_names <- c("arabic", "Alph", "alph", "Roman", "roman")
    type <- match.arg(type, c(type_tokens, type_full_names))
    if (nchar(type, "b") > 1L) 
        type <- type_tokens[match(type, type_full_names)]
    len <- length(x)
    labels <- seq.int(start[1L], length.out = len)
    upper <- labels[len]
    if (type %in% c("A", "a")) {
        if (upper > 26L) 
            stop(gettextf("too many list items (at most up to %d)", 
                26L), domain = NA)
        labels <- if (type == "A") 
            LETTERS[labels]
        else letters[labels]
    }
    else if (type %in% c("I", "i")) {
        if (upper > 3999L) 
            stop(gettextf("too many list items (at most up to %d)", 
                3999L), domain = NA)
        labels <- as.character(as.roman(labels))
        if (type == "i") 
            labels <- tolower(labels)
    }
    .format_rl_table(sprintf("%s.", labels), x, offset, width)
}
