#? stdlib
`SweaveReadFile` <- function (file, syntax, encoding = "") 
{
    f <- file[1L]
    bf <- basename(f)
    df <- dirname(f)
    if (!file.exists(f)) {
        f <- list.files(df, full.names = TRUE, pattern = paste0(bf, 
            syntax$extension))
        if (length(f) == 0L) 
            stop(gettextf("no Sweave file with name %s found", 
                sQuote(file[1L])), domain = NA)
        else if (length(f) > 1L) 
            stop(paste(sprintf(ngettext(length(f), "%d Sweave file for basename %s found", 
                "%d Sweave files for basename %s found", domain = "R-utils"), 
                length(f), sQuote(file[1L])), paste(":\n         ", 
                f, collapse = "")), domain = NA)
    }
    text <- readLines(f[1L], warn = FALSE)
    srcLinenum <- seq_along(text)
    if (encoding != "bytes") {
        enc <- tools:::.getVignetteEncoding(text, default = if (identical(encoding, 
            "")) 
            NA
        else encoding)
        if (enc == "non-ASCII") {
            enc <- if (nzchar(encoding)) {
                encoding
            }
            else {
                stop(sQuote(basename(file)), " is not ASCII and does not declare an encoding", 
                  domain = NA, call. = FALSE)
            }
        }
        else if (enc == "unknown") {
            stop(sQuote(basename(file)), " declares an encoding that Sweave does not know about", 
                domain = NA, call. = FALSE)
        }
        if (enc == "UTF-8") 
            Encoding(text) <- enc
        else {
            if (nzchar(enc)) 
                text <- iconv(text, enc, "")
            else enc <- "ASCII"
        }
    }
    else enc <- "bytes"
    pos <- grep(syntax$syntaxname, text)
    if (length(pos) > 1L) 
        warning(gettextf("more than one syntax specification found, using the first one"), 
            domain = NA)
    if (length(pos) > 0L) {
        sname <- sub(syntax$syntaxname, "\\1", text[pos[1L]])
        syntax <- get(sname, mode = "list")
        if (!identical(class(syntax), "SweaveSyntax")) 
            stop(gettextf("object %s does not have class \"SweaveSyntax\"", 
                sQuote(sname)), domain = NA)
        text <- text[-pos]
        srcLinenum <- srcLinenum[-pos]
    }
    srcFilenum <- rep_len(1, length(srcLinenum))
    if (!is.null(syntax$input)) {
        while (length(pos <- grep(syntax$input, text))) {
            pos <- pos[1L]
            ifile <- file.path(df, sub(syntax$input, "\\1", text[pos]))
            if (any(ifile == file)) {
                stop(paste(gettextf("recursive Sweave input %s in stack", 
                  sQuote(ifile)), paste("\n         ", seq_len(file), 
                  ": ", rev(file), collapse = "")), domain = NA)
            }
            itext <- SweaveReadFile(c(ifile, file), syntax, encoding = encoding)
            pre <- seq_len(pos - 1L)
            post <- seq_len(length(text) - pos) + pos
            text <- c(text[pre], itext, text[post])
            srcLinenum <- c(srcLinenum[pre], attr(itext, "srcLinenum"), 
                srcLinenum[post])
            srcFilenum <- c(srcFilenum[pre], attr(itext, "srcFilenum") + 
                length(f), srcFilenum[post])
            f <- c(f, attr(itext, "files"))
        }
    }
    attr(text, "syntax") <- syntax
    attr(text, "files") <- f
    attr(text, "encoding") <- enc
    attr(text, "srcLinenum") <- srcLinenum
    attr(text, "srcFilenum") <- srcFilenum
    text
}
