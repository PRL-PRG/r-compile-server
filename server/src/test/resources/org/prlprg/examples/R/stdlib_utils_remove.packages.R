#? stdlib
`remove.packages` <- function (pkgs, lib) 
{
    if (!length(pkgs)) 
        return(invisible())
    base <- vapply(pkgs, isBasePkg, FALSE)
    if (any(base)) {
        (if (all(base)) 
            stop
        else warning)(sprintf(ngettext(sum(base), "package %s is a base package, and cannot be removed", 
            "packages %s are base packages, and cannot be removed"), 
            paste(sQuote(pkgs[base]), collapse = ", ")), domain = NA)
        pkgs <- pkgs[!base]
    }
    updateIndices <- function(lib) {
        if (lib == .Library && .Platform$OS.type == "unix") {
            message("Updating HTML index of packages in '.Library'")
            make.packages.html(.Library)
        }
    }
    if (missing(lib) || is.null(lib)) {
        lib <- .libPaths()[1L]
        message(sprintf(ngettext(length(pkgs), "Removing package from %s\n(as %s is unspecified)", 
            "Removing packages from %s\n(as %s is unspecified)"), 
            sQuote(lib), sQuote("lib")), domain = NA)
    }
    paths <- find.package(pkgs, lib)
    if (length(paths)) {
        unlink(paths, TRUE)
        for (lib in unique(dirname(paths))) updateIndices(lib)
    }
    invisible()
}
