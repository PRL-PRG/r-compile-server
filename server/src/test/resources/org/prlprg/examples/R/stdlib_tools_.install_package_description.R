#? stdlib
`.install_package_description` <- function (dir, outDir, builtStamp = character()) 
{
    ok <- .check_package_description(file.path(dir, "DESCRIPTION"))
    if (any(as.integer(lengths(ok)) > 0L)) {
        stop(paste(gettext("Invalid DESCRIPTION file"), paste(format(ok), 
            collapse = "\n\n"), sep = "\n\n"), domain = NA, call. = FALSE)
    }
    db <- .read_description(file.path(dir, "DESCRIPTION"))
    nm <- names(db)
    if ("Built" %in% nm) {
        db <- db[-match("Built", nm)]
        warning(gettextf("*** someone has corrupted the Built field in package '%s' ***", 
            db["Package"]), domain = NA, call. = FALSE)
    }
    OStype <- R.version$platform
    if (grepl("-apple-darwin", OStype) && nzchar(Sys.getenv("R_ARCH"))) 
        OStype <- sub(".*-apple-darwin", "universal-apple-darwin", 
            OStype)
    if (length(builtStamp) == 0L) {
        builtStamp <- format(Sys.time(), "%Y-%m-%d %H:%M:%S", 
            tz = "UTC", usetz = TRUE)
    }
    Built <- paste0("R ", paste(R.version[c("major", "minor")], 
        collapse = "."), "; ", if (dir.exists(file.path(dir, 
        "src"))) 
        OStype
    else "", "; ", builtStamp, "; ", .OStype())
    db <- c(db, .expand_package_description_db_R_fields(db), 
        Built = Built)
    .write_description(db, file.path(outDir, "DESCRIPTION"))
    outMetaDir <- file.path(outDir, "Meta")
    if (!dir.exists(outMetaDir) && !dir.create(outMetaDir)) 
        stop(gettextf("cannot open directory '%s'", outMetaDir), 
            domain = NA)
    saveInfo <- .split_description(db)
    saveRDS(saveInfo, file.path(outMetaDir, "package.rds"))
    features <- list(internalsID = .Internal(internalsID()))
    saveRDS(features, file.path(outMetaDir, "features.rds"))
    invisible()
}
