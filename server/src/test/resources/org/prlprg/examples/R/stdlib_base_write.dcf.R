#? stdlib
`write.dcf` <- function (x, file = "", append = FALSE, useBytes = FALSE, indent = 0.1 * 
    getOption("width"), width = 0.9 * getOption("width"), keep.white = NULL) 
{
    if (file == "") 
        file <- stdout()
    else if (is.character(file)) {
        file <- file(file, if (append) 
            "a"
        else "w")
        on.exit(close(file))
    }
    if (!inherits(file, "connection")) 
        stop("'file' must be a character string or connection")
    escape_paragraphs <- function(s) gsub("\n \\.([^\n])", "\n  .\\1", 
        gsub("\n[ \t]*\n", "\n .\n ", s, perl = TRUE, useBytes = TRUE), 
        perl = TRUE, useBytes = TRUE)
    fmt <- function(tag, val, fold = TRUE) {
        s <- if (fold) 
            formatDL(rep.int(tag, length(val)), val, style = "list", 
                width = width, indent = indent)
        else {
            sprintf("%s: %s", tag, gsub("\n([^[:blank:]])", "\n \\1", 
                val))
        }
        escape_paragraphs(s)
    }
    if (!is.data.frame(x)) 
        x <- as.data.frame(x, optional = TRUE, stringsAsFactors = FALSE)
    nmx <- names(x)
    out <- matrix("", nrow(x), ncol(x))
    foldable <- is.na(match(nmx, keep.white))
    for (j in seq_along(x)) {
        xj <- x[[j]]
        if (is.atomic(xj)) {
            i <- !is.na(xj)
            out[i, j] <- fmt(nmx[j], xj[i], foldable[j])
        }
        else {
            nmxj <- nmx[j]
            fold <- foldable[j]
            i <- !vapply(xj, function(s) (length(s) == 1L) && 
                is.na(s), NA)
            out[i, j] <- vapply(xj[i], function(s) {
                paste(fmt(nmxj, s, fold), collapse = "\n")
            }, "")
        }
    }
    out <- t(out)
    is_not_empty <- nzchar(out)
    eor <- character(sum(is_not_empty))
    if (length(eor)) {
        eor[which(diff(c(col(out))[is_not_empty]) >= 1L)] <- "\n"
    }
    writeLines(paste0(c(out[is_not_empty]), eor), file, useBytes = useBytes)
}
