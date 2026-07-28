#? stdlib
`code2LazyLoadDB` <- function (package, lib.loc = NULL, keep.source = getOption("keep.source.pkgs"), 
    keep.parse.data = getOption("keep.parse.data.pkgs"), compress = TRUE, 
    set.install.dir = NULL) 
{
    pkgpath <- find.package(package, lib.loc, quiet = TRUE)
    if (!length(pkgpath)) 
        stop(packageNotFoundError(package, lib.loc, sys.call()))
    dbbase <- file.path(pkgpath, "R", package)
    if (packageHasNamespace(package, dirname(pkgpath))) {
        if (!is.null(.getNamespace(as.name(package)))) 
            stop("namespace must not be already loaded")
        ns <- suppressPackageStartupMessages(loadNamespace(package = package, 
            lib.loc = lib.loc, keep.source = keep.source, keep.parse.data = keep.parse.data, 
            partial = TRUE))
        makeLazyLoadDB(ns, dbbase, compress = compress, set.install.dir = set.install.dir)
    }
    else stop("all packages should have a NAMESPACE")
}
