#? stdlib
`file.show` <- function (..., header = rep("", nfiles), title = "R Information", 
    delete.file = FALSE, pager = getOption("pager"), encoding = "") 
{
    files <- path.expand(c(...))
    nfiles <- length(files)
    if (nfiles == 0L) 
        return(invisible(NULL))
    if (l10n_info()[["UTF-8"]] && encoding == "UTF-8") 
        encoding <- ""
    if (l10n_info()[["Latin-1"]] && encoding == "latin1") 
        encoding <- ""
    if (!is.na(encoding) && nzchar(encoding)) {
        for (i in seq_along(files)) {
            f <- files[i]
            tf <- tempfile()
            tmp <- readLines(f, warn = FALSE)
            tmp2 <- try(iconv(tmp, encoding, "", "byte"))
            if (inherits(tmp2, "try-error")) 
                file.copy(f, tf)
            else writeLines(tmp2, tf)
            files[i] <- tf
            if (delete.file) 
                unlink(f)
        }
        delete.file <- TRUE
    }
    if (is.function(pager)) 
        pager(files, header = header, title = title, delete.file = delete.file)
    else .Internal(file.show(files, header, title, delete.file, 
        pager))
}

# Examples
file.show(file.path(R.home("doc"), "COPYRIGHTS"))

