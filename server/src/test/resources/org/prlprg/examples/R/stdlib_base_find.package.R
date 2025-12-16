#? stdlib
`find.package` <- function (package = NULL, lib.loc = NULL, quiet = FALSE, verbose = getOption("verbose")) 
{
    if (is.null(package) && is.null(lib.loc) && !verbose) {
        return(path.package())
    }
    if (length(package) == 1L && package %in% c("base", "tools", 
        "utils", "grDevices", "graphics", "stats", "datasets", 
        "methods", "grid", "parallel", "splines", "stats4", "tcltk", 
        "compiler")) 
        return(file.path(.Library, package))
    if (is.null(package)) 
        package <- .packages()
    if (!length(package)) 
        return(character())
    if (use_loaded <- is.null(lib.loc)) 
        lib.loc <- .libPaths()
    bad <- character()
    out <- character()
    for (pkg in package) {
        paths <- file.path(lib.loc, pkg)
        paths <- paths[file.exists(file.path(paths, "DESCRIPTION"))]
        if (use_loaded && isNamespaceLoaded(pkg)) {
            dir <- if (pkg == "base") 
                system.file()
            else .getNamespaceInfo(asNamespace(pkg), "path")
            paths <- c(dir, paths)
        }
        if (length(paths) && file.exists(file.path(paths[1], 
            "dummy_for_check"))) {
            bad <- c(bad, pkg)
            next
        }
        if (length(paths)) {
            paths <- unique(paths)
            valid_package_version_regexp <- .standard_regexps()$valid_package_version
            db <- lapply(paths, function(p) {
                pfile <- file.path(p, "Meta", "package.rds")
                info <- if (file.exists(pfile)) {
                  tryCatch(readRDS(pfile)$DESCRIPTION[c("Package", 
                    "Version")], error = function(e) c(Package = NA_character_, 
                    Version = NA_character_))
                }
                else {
                  info <- tryCatch(read.dcf(file.path(p, "DESCRIPTION"), 
                    c("Package", "Version"))[1, ], error = identity)
                  if (inherits(info, "error") || (length(info) != 
                    2L) || anyNA(info)) 
                    c(Package = NA_character_, Version = NA_character_)
                  else info
                }
            })
            db <- do.call(rbind, db)
            ok <- (apply(!is.na(db), 1L, all) & (db[, "Package"] == 
                pkg) & (grepl(valid_package_version_regexp, db[, 
                "Version"])))
            paths <- paths[ok]
        }
        if (length(paths) == 0L) {
            bad <- c(bad, pkg)
            next
        }
        if (length(paths) > 1L) {
            if (verbose) 
                warning(gettextf("package %s found more than once, using the first from\n  %s", 
                  sQuote(pkg), paste(dQuote(paths), collapse = ",\n  ")), 
                  domain = NA)
            paths <- paths[1L]
        }
        out <- c(out, paths)
    }
    if (!quiet && length(bad)) {
        if (length(out) == 0L) 
            stop(packageNotFoundError(bad, lib.loc, sys.call()))
        for (pkg in bad) warning(gettextf("there is no package called %s", 
            sQuote(pkg)), domain = NA)
    }
    out
}

# Examples
try(find.package("knitr"))
## will not give an error, maybe a warning about *all* locations it is found:
find.package("kitty", quiet=TRUE, verbose=TRUE)

## Find all .libPaths() entries a package is found:
findPkgAll <- function(pkg)
  unlist(lapply(.libPaths(), function(lib)
           find.package(pkg, lib, quiet=TRUE, verbose=FALSE)))

findPkgAll("MASS")
findPkgAll("knitr")

