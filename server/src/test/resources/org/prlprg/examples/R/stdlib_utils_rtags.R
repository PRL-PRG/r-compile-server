#? stdlib
`rtags` <- function (path = ".", pattern = "\\.[RrSs]$", recursive = FALSE, 
    src = list.files(path = path, pattern = pattern, full.names = TRUE, 
        recursive = recursive), keep.re = NULL, ofile = "", append = FALSE, 
    verbose = getOption("verbose"), type = c("etags", "ctags")) 
{
    type <- match.arg(type)
    if (nzchar(ofile) && !append) {
        if (!file.create(ofile, showWarnings = FALSE)) 
            stop(gettextf("Could not create file %s, aborting", 
                ofile), domain = NA)
    }
    write.fun <- if (type == "ctags") 
        write.ctags
    else write.etags
    if (!missing(keep.re)) 
        src <- grep(keep.re, src, value = TRUE)
    for (s in src) {
        if (verbose) 
            message(gettextf("Processing file %s", s), domain = NA)
        tryCatch(rtags.file(s, ofile = ofile, append = TRUE, 
            write.fun = write.fun), error = function(e) NULL)
    }
    if (type == "ctags" && nzchar(ofile)) {
        tagLines <- readLines(ofile)
        writeLines(sort(tagLines), con = ofile)
    }
    invisible()
}

# Examples




