#? stdlib
`write.ctags` <- function (src, tokens, startlines, lines, nchars, ..., shorten.lines = NULL) 
{
    tag.lines <- sprintf("%s\t%s\t%d\n", tokens, src, startlines)
    cat(tag.lines, sep = "", ...)
}
