#? stdlib
`save.image` <- function (file = ".RData", version = NULL, ascii = FALSE, compress = !ascii, 
    safe = TRUE) 
{
    if (!is.character(file) || length(file) != 1 || file == "") 
        stop(gettextf("'%s' must be a non-empty string", "file"), 
            domain = NA)
    opts <- getOption("save.image.defaults")
    if (is.null(opts)) 
        opts <- getOption("save.defaults")
    if (missing(safe) && !is.null(opts$safe)) 
        safe <- opts$safe
    if (missing(ascii) && !is.null(opts$ascii)) 
        ascii <- opts$ascii
    if (missing(compress) && !is.null(opts$compress)) 
        compress <- opts$compress
    if (missing(version)) 
        version <- opts$version
    if (safe) {
        outfile <- paste0(file, "Tmp")
        i <- 0
        while (file.exists(outfile)) {
            i <- i + 1
            outfile <- paste0(file, "Tmp", i)
        }
    }
    else outfile <- file
    on.exit(file.remove(outfile))
    save(list = names(.GlobalEnv), file = outfile, version = version, 
        ascii = ascii, compress = compress, envir = .GlobalEnv, 
        precheck = FALSE)
    if (safe) 
        if (!file.rename(outfile, file)) {
            on.exit()
            stop(gettextf("image could not be renamed and is left in %s", 
                outfile), domain = NA)
        }
    on.exit()
}
