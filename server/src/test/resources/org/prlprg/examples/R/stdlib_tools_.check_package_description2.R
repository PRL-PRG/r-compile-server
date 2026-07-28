#? stdlib
`.check_package_description2` <- function (dfile) 
{
    dfile <- file_path_as_absolute(dfile)
    db <- .read_description(dfile)
    depends <- .get_requires_from_package_db(db, "Depends")
    imports <- .get_requires_from_package_db(db, "Imports")
    suggests <- .get_requires_from_package_db(db, "Suggests")
    enhances <- .get_requires_from_package_db(db, "Enhances")
    allpkgs <- c(unique(depends), unique(imports), unique(suggests), 
        unique(enhances))
    out <- unique(allpkgs[duplicated(allpkgs)])
    links <- missing_incs <- character()
    llinks <- .get_requires_with_version_from_package_db(db, 
        "LinkingTo")
    have_src <- TRUE
    if (length(llinks)) {
        have_src <- dir.exists(file.path(dirname(dfile), "src"))
        deps <- .split_description(db, verbose = TRUE)$Rdepends2
        status <- 0L
        current <- as.numeric_version("3.0.1")
        for (depends in deps) {
            if (depends$op %notin% c("<=", ">=", "<", ">", "==", 
                "!=")) 
                next
            status <- if (inherits(depends$version, "numeric_version")) 
                !do.call(depends$op, list(current, depends$version))
            else {
                ver <- R.version
                if (ver$status %in% c("", "Patched")) 
                  FALSE
                else !do.call(depends$op, list(ver[["svn rev"]], 
                  as.numeric(sub("^r", "", depends$version))))
            }
        }
        if (!status) {
            llinks <- llinks[lengths(llinks) > 1L]
            if (length(llinks)) 
                links <- sapply(llinks, `[[`, 1L)
        }
        llinks <- .get_requires_from_package_db(db, "LinkingTo")
        incs <- lapply(llinks, function(x) system.file("include", 
            package = x))
        missing_incs <- as.vector(llinks[!nzchar(incs)])
    }
    out <- list(duplicates = unique(allpkgs[duplicated(allpkgs)]), 
        bad_links = links, missing_incs = missing_incs, have_src = have_src)
    class(out) <- "check_package_description2"
    out
}
