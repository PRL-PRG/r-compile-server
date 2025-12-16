#? stdlib
`rtags.file` <- function (src, ofile = "", append = FALSE, write.fun = write.etags) 
{
    elist <- parse(src, srcfile = srcfile(src))
    if (length(elist) == 0) 
        return(invisible())
    lines <- readLines(src)
    tokens <- lapply(elist, expr2token)
    startlines <- sapply(attr(elist, "srcref"), `[`, 1L)
    if (length(tokens) != length(startlines)) 
        stop("length mismatch: bug in code!", domain = NA)
    keep <- lengths(tokens) == 1L
    if (!any(keep)) 
        return(invisible())
    tokens <- unlist(tokens[keep])
    startlines <- startlines[keep]
    write.fun(src = src, tokens = tokens, startlines = startlines, 
        lines = lines[startlines], nchars = nchar(lines, type = "bytes"), 
        file = ofile, append = append)
}
