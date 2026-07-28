#? stdlib
`write.etags` <- function (src, tokens, startlines, lines, nchars, ..., shorten.lines = c("token", 
    "simple", "none")) 
{
    shorten.lines <- match.arg(shorten.lines)
    offsets <- (cumsum(nchars + 1L) - (nchars + 1L))[startlines]
    lines <- switch(shorten.lines, none = lines, simple = sapply(strsplit(lines, 
        "function", fixed = TRUE), `[`, 1), token = mapply(shorten.to.string, 
        lines, tokens))
    tag.lines <- paste(sprintf("%s\177%s\001%d,%d", lines, tokens, 
        startlines, as.integer(offsets)), collapse = "\n")
    tagsize <- nchar(tag.lines, type = "bytes") + 1L
    cat("\f\n", src, ",", tagsize, "\n", tag.lines, "\n", sep = "", 
        ...)
}
