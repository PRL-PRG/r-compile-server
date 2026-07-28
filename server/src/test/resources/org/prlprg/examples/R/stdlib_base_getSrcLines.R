#? stdlib
`getSrcLines` <- function (srcfile, first, last) 
{
    if (first > last) 
        return(character())
    if (inherits(srcfile, "srcfilealias")) 
        srcfile <- srcfile$original
    if (inherits(srcfile, "srcfilecopy")) {
        if (is.null(srcfile$fixedNewlines)) {
            lines <- srcfile$lines
            if (any(grepl("\n", lines, fixed = TRUE, useBytes = TRUE))) 
                srcfile$lines <- unlist(strsplit(sub("$", "\n", 
                  as.character(lines)), "\n"))
            srcfile$fixedNewlines <- TRUE
        }
        last <- min(last, length(srcfile$lines))
        if (first > last) 
            return(character())
        else return(srcfile$lines[first:last])
    }
    if (!.isOpen(srcfile)) 
        on.exit(close(srcfile))
    conn <- open(srcfile, first)
    lines <- readLines(conn, n = last - first + 1L, warn = FALSE)
    if (!is.null(Enc <- srcfile$Enc) && !(Enc %in% c("unknown", 
        "native.enc"))) 
        lines <- iconv(lines, "", Enc)
    srcfile$line <- first + length(lines)
    return(lines)
}
