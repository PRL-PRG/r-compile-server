#? stdlib
`.format_rl_table` <- function (labels, x, offset = 0, width = 0.9 * getOption("width"), 
    sep = " ") 
{
    labels <- format(labels, justify = "right")
    len <- length(x)
    delta <- nchar(labels[1L], "width") + offset
    x <- strwrap(x, width = width - delta - nchar(sep, "width"), 
        simplify = FALSE)
    nlines <- cumsum(lengths(x))
    prefix <- rep.int(strrep(" ", delta), nlines[len])
    prefix[1L + c(0L, nlines[-len])] <- paste0(strrep(" ", offset), 
        labels)
    paste(prefix, unlist(x), sep = sep)
}
