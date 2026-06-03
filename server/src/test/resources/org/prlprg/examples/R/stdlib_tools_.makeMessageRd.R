#? stdlib
`.makeMessageRd` <- function (block, Rdfile, ..., showSource = FALSE) 
{
    srcref <- attr(block, "srcref")
    if (missing(Rdfile) && !is.null(srcref)) {
        srcfile <- attr(srcref, "srcfile")
        if (is.environment(srcfile)) 
            Rdfile <- srcfile$filename
    }
    Rdfile <- if (missing(Rdfile) || is.null(Rdfile)) 
        ""
    else {
        OS_subdir <- intersect(basename(dirname(Rdfile)), c("unix", 
            "windows"))
        paste0(paste0(OS_subdir, "/", recycle0 = TRUE), basename(Rdfile), 
            ":", recycle0 = FALSE)
    }
    if (is.null(srcref)) 
        paste0(Rdfile, " ", ...)
    else {
        from <- srcref[1L]
        loc <- paste0(Rdfile, from, if (from != srcref[3L]) 
            paste0("-", srcref[3L]))
        src <- if (showSource) 
            tryCatch(error = function(e) NULL, {
                line <- getSrcLines(attr(srcref, "srcfile"), 
                  from, from)
                sprintf("\n  %4s | %s", c(from, ""), c(tabExpand(line), 
                  paste0(strrep(" ", srcref[5L] - 1L), "^")))
            })
        paste0(loc, ": ", ..., paste0(src, collapse = ""))
    }
}
