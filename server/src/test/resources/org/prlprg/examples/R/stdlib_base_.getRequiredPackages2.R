#? stdlib
`.getRequiredPackages2` <- function (pkgInfo, quietly = FALSE, lib.loc = NULL, useImports = FALSE) 
{
    .findVersion <- function(pkg, lib.loc) {
        pfile <- system.file("Meta", "package.rds", package = pkg, 
            lib.loc = lib.loc)
        if (nzchar(pfile)) 
            as.numeric_version(readRDS(pfile)$DESCRIPTION["Version"])
    }
    pkgs <- unique(names(pkgInfo$Depends))
    pkgname <- pkgInfo$DESCRIPTION["Package"]
    for (pkg in setdiff(pkgs, "base")) {
        depends <- pkgInfo$Depends[names(pkgInfo$Depends) == 
            pkg]
        attached <- paste0("package:", pkg) %in% search()
        current <- .findVersion(pkg, lib.loc)
        if (is.null(current)) 
            stop(gettextf("package %s required by %s could not be found", 
                sQuote(pkg), sQuote(pkgname)), call. = FALSE, 
                domain = NA)
        have_vers <- lengths(depends) > 1L
        for (dep in depends[have_vers]) {
            target <- as.numeric_version(dep$version)
            sufficient <- do.call(dep$op, list(current, target))
            if (!sufficient) {
                if (is.null(lib.loc)) 
                  lib.loc <- .libPaths()
                allV <- lapply(lib.loc, .findVersion, pkg = pkg)
                versions <- do.call(c, allV[iV <- which(!vapply(allV, 
                  is.null, NA))])
                sufficient <- vapply(versions, dep$op, logical(1L), 
                  target)
                if (any(sufficient)) {
                  warning(gettextf("version %s of %s masked by %s in %s", 
                    versions[which(sufficient)[1L]], sQuote(pkg), 
                    current, lib.loc[iV[!sufficient][1L]]), call. = FALSE, 
                    domain = NA)
                }
                msg <- if (attached) 
                  "package %s %s is loaded, but %s %s is required by %s"
                else "package %s %s was found, but %s %s is required by %s"
                stop(gettextf(msg, sQuote(pkg), current, dep$op, 
                  target, sQuote(pkgname)), call. = FALSE, domain = NA)
            }
        }
        if (!attached) {
            if (!quietly) 
                packageStartupMessage(gettextf("Loading required package: %s", 
                  pkg), domain = NA)
            library(pkg, character.only = TRUE, logical.return = TRUE, 
                lib.loc = lib.loc, quietly = quietly) || stop(gettextf("package %s could not be loaded", 
                sQuote(pkg)), call. = FALSE, domain = NA)
        }
    }
    if (useImports) {
        nss <- names(pkgInfo$Imports)
        for (ns in nss) loadNamespace(ns, lib.loc)
    }
}
