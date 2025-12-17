#? stdlib
`makeLazyLoading` <- function (package, lib.loc = NULL, compress = TRUE, keep.source = getOption("keep.source.pkgs"), 
    keep.parse.data = getOption("keep.parse.data.pkgs"), set.install.dir = NULL) 
{
    if (!is.logical(compress) && compress %notin% c(2, 3)) 
        stop(gettextf("invalid value for '%s' : %s", "compress", 
            "should be FALSE, TRUE, 2 or 3"), domain = NA)
    if (!getOption("warn")) 
        options(warn = 1L)
    findpack <- function(package, lib.loc) {
        pkgpath <- find.package(package, lib.loc, quiet = TRUE)
        if (!length(pkgpath)) 
            stop(packageNotFoundError(package, lib.loc, sys.call()))
        pkgpath
    }
    if (package == "base") 
        stop("this cannot be used for package 'base'")
    loaderFile <- file.path(R.home("share"), "R", "nspackloader.R")
    pkgpath <- findpack(package, lib.loc)
    codeFile <- file.path(pkgpath, "R", package)
    if (!file.exists(codeFile)) {
        warning("package contains no R code")
        return(invisible())
    }
    if (file.size(codeFile) == file.size(loaderFile)) 
        warning("package seems to be using lazy loading already")
    else {
        code2LazyLoadDB(package, lib.loc = lib.loc, keep.source = keep.source, 
            keep.parse.data = keep.parse.data, compress = compress, 
            set.install.dir = set.install.dir)
        file.copy(loaderFile, codeFile, TRUE)
    }
    invisible()
}
