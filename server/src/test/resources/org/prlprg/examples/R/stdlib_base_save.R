#? stdlib
`save` <- function (..., list = character(), file = stop("'file' must be specified"), 
    ascii = FALSE, version = NULL, envir = parent.frame(), compress = isTRUE(!ascii), 
    compression_level, eval.promises = TRUE, precheck = TRUE) 
{
    opts <- getOption("save.defaults")
    if (missing(compress) && !is.null(opts$compress)) 
        compress <- opts$compress
    if (missing(compression_level) && !is.null(opts$compression_level)) 
        compression_level <- opts$compression_level
    if (missing(ascii) && !is.null(opts$ascii)) 
        ascii <- opts$ascii
    if (missing(version)) 
        version <- opts$version
    if (!is.null(version) && version < 2) 
        warning("Use of save versions prior to 2 is deprecated", 
            domain = NA)
    names <- as.character(substitute(list(...)))[-1L]
    if (missing(list) && !length(names)) 
        warning("nothing specified to be save()d")
    list <- c(list, names)
    if (!is.null(version) && version == 1) 
        .Internal(save(list, file, ascii, version, envir, eval.promises))
    else {
        if (precheck) {
            ok <- vapply(list, exists, NA, envir = envir)
            if (!all(ok)) {
                n <- sum(!ok)
                stop(sprintf(ngettext(n, "object %s not found", 
                  "objects %s not found"), paste(sQuote(list[!ok]), 
                  collapse = ", ")), domain = NA)
            }
        }
        if (is.character(file)) {
            if (!nzchar(file)) 
                stop(gettextf("'%s' must be a non-empty string", 
                  "file"), domain = NA)
            if (!is.character(compress)) {
                if (!is.logical(compress)) 
                  stop("'compress' must be logical or character")
                compress <- if (compress) 
                  "gzip"
                else "no compression"
            }
            con <- switch(compress, bzip2 = {
                if (!missing(compression_level)) bzfile(file, 
                  "wb", compression = compression_level) else bzfile(file, 
                  "wb")
            }, xz = {
                if (!missing(compression_level)) xzfile(file, 
                  "wb", compression = compression_level) else xzfile(file, 
                  "wb", compression = 9)
            }, gzip = {
                if (!missing(compression_level)) gzfile(file, 
                  "wb", compression = compression_level) else gzfile(file, 
                  "wb")
            }, `no compression` = file(file, "wb"), stop(gettextf("'compress = \"%s\"' is invalid", 
                compress)))
            on.exit(close(con))
        }
        else if (inherits(file, "connection")) 
            con <- file
        else stop("bad file argument")
        if (isOpen(con) && !ascii && summary(con)$text != "binary") 
            stop("can only save to a binary connection")
        .Internal(saveToConn(list, con, ascii, version, envir, 
            eval.promises))
    }
}

# Examples
oldwd <- setwd(tempdir()) # so examples do write there
x <- stats::runif(20)
y <- list(a = 1, b = TRUE, c = "oops")
save(x, y, file = "xy.RData")
save.image() # creating ".RData" in current working directory
unlink("xy.RData")

# set save defaults using option:
options(save.defaults = list(ascii = TRUE, safe = FALSE))
save.image() # creating ".RData"
if(interactive()) withAutoprint({
   file.info(".RData")
   readLines(".RData", n = 7) # first 7 lines; first starts w/ "RDA"..
})
unlink(".RData")
setwd(oldwd)

