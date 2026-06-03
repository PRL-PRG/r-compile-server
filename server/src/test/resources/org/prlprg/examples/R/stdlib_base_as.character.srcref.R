#? stdlib
`as.character.srcref` <- function (x, useSource = TRUE, to = x, ...) 
{
    srcfile <- attr(x, "srcfile")
    if (!missing(to)) {
        if (!identical(srcfile, attr(to, "srcfile"))) 
            stop("'x' and 'to' must refer to same file")
        x[c(3L, 4L, 6L, 8L)] <- to[c(3L, 4L, 6L, 8L)]
    }
    if (!is.null(srcfile) && !inherits(srcfile, "srcfile")) {
        cat("forcing class on")
        print(utils::str(srcfile))
        class(srcfile) <- c("srcfilealias", "srcfile")
    }
    if (useSource) {
        if (inherits(srcfile, "srcfilecopy") || inherits(srcfile, 
            "srcfilealias")) 
            lines <- try(getSrcLines(srcfile, x[7L], x[8L]), 
                TRUE)
        else lines <- try(getSrcLines(srcfile, x[1L], x[3L]), 
            TRUE)
    }
    if (!useSource || inherits(lines, "try-error")) 
        lines <- paste0("<srcref: file \"", srcfile$filename, 
            "\" chars ", x[1L], ":", x[5L], " to ", x[3L], ":", 
            x[6L], ">")
    else if (length(lines)) {
        enc <- Encoding(lines)
        Encoding(lines) <- "bytes"
        if (length(lines) < x[3L] - x[1L] + 1L) 
            x[4L] <- .Machine$integer.max
        lines[length(lines)] <- substring(lines[length(lines)], 
            1L, x[4L])
        lines[1L] <- substring(lines[1L], x[2L])
        Encoding(lines) <- enc
    }
    lines
}
