#? stdlib
`.getHelpFile` <- function (file) 
{
    path <- dirname(file)
    dirpath <- dirname(path)
    if (!file.exists(dirpath)) 
        stop(gettextf("invalid %s argument", sQuote("file")), 
            domain = NA)
    pkgname <- basename(dirpath)
    RdDB <- file.path(path, pkgname)
    if (!file.exists(paste0(RdDB, ".rdx"))) 
        stop(gettextf("package %s exists but was not installed under R >= 2.10.0 so help cannot be accessed", 
            sQuote(pkgname)), domain = NA)
    tools:::fetchRdDB(RdDB, basename(file))
}
