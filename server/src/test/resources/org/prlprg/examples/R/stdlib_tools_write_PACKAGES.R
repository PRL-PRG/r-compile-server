#? stdlib
`write_PACKAGES` <- function (dir = ".", fields = NULL, type = c("source", "mac.binary", 
    "win.binary"), verbose = FALSE, unpacked = FALSE, subdirs = FALSE, 
    latestOnly = TRUE, addFiles = FALSE, rds_compress = "xz", 
    validate = FALSE) 
{
    if (missing(type) && .Platform$OS.type == "windows") 
        type <- "win.binary"
    type <- match.arg(type)
    paths <- ""
    if (is.logical(subdirs) && subdirs) {
        owd <- setwd(dir)
        paths <- list.dirs(".")
        setwd(owd)
        paths <- c("", paths[paths != "."])
        paths <- sub("^[.]/", "", paths)
    }
    else if (is.character(subdirs)) 
        paths <- c("", subdirs)
    db <- NULL
    addPaths <- !identical(paths, "")
    for (path in paths) {
        this <- if (nzchar(path)) 
            file.path(dir, path)
        else dir
        desc <- .build_repository_package_db(this, fields, type, 
            verbose, unpacked, validate)
        desc <- .process_repository_package_db_to_matrix(desc, 
            path, addFiles, addPaths, latestOnly)
        if (NROW(desc)) 
            db <- rbind(db, desc)
    }
    np <- .write_repository_package_db(db, dir, rds_compress)
    invisible(np)
}

# Examples

