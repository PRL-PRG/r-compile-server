#? stdlib
`print.warnings` <- function (x, tags, header = ngettext(n, "Warning message:\n", 
    "Warning messages:\n"), ...) 
{
    if (n <- length(x)) {
        if (length(header)) 
            cat(header)
        if (missing(tags) || length(tags) == 0) 
            tags <- if (n == 1L) 
                ""
            else paste0(seq_len(n), ": ")
        else if (length(tags <- as.character(tags)) != n) 
            stop("'tags' must be a character vector of the same length as 'x'")
        msgs <- names(x)
        for (i in seq_len(n)) {
            out <- if (length(x[[i]])) {
                temp <- deparse(x[[i]], width.cutoff = 50L, nlines = 2L)
                sm <- strsplit(msgs[i], "\n")[[1L]]
                nl <- if (nchar(tags[i], "w") + nchar(temp[1L], 
                  "w") + nchar(sm[1L], "w") <= 75L) 
                  " "
                else "\n  "
                paste0(tags[i], "In ", temp[1L], if (length(temp) > 
                  1L) 
                  " ...", " :", nl, msgs[i])
            }
            else paste0(tags[i], msgs[i])
            do.call("cat", c(list(out), attr(x, "dots"), fill = TRUE))
        }
    }
    invisible(x)
}
