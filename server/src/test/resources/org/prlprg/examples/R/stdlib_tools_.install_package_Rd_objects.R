#? stdlib
`.install_package_Rd_objects` <- function (dir, outDir, encoding = "unknown") 
{
    dir <- file_path_as_absolute(dir)
    mandir <- file.path(dir, "man")
    manfiles <- if (!dir.exists(mandir)) 
        character()
    else list_files_with_type(mandir, "docs")
    manOutDir <- file.path(outDir, "help")
    dir.create(manOutDir, FALSE)
    db_file <- file.path(manOutDir, paste0(basename(outDir), 
        ".rdx"))
    built_file <- file.path(dir, "build", "partial.rdb")
    macro_files <- list.files(file.path(dir, "man", "macros"), 
        pattern = "\\.Rd$", full.names = TRUE)
    if (length(macro_files)) {
        macroDir <- file.path(manOutDir, "macros")
        dir.create(macroDir, FALSE)
        file.copy(macro_files, macroDir, overwrite = TRUE)
    }
    pathsFile <- file.path(manOutDir, "paths.rds")
    if (!file_test("-f", db_file) || !file.exists(pathsFile) || 
        !identical(sort(manfiles), sort(readRDS(pathsFile))) || 
        !all(file_test("-nt", db_file, manfiles))) {
        db <- .build_Rd_db(dir, manfiles, db_file = db_file, 
            encoding = encoding, built_file = built_file)
        nm <- as.character(names(db))
        saveRDS(structure(nm, first = nchar(file.path(mandir)) + 
            2L), pathsFile)
        names(db) <- sub("\\.[Rr]d$", "", basename(nm))
        makeLazyLoadDB(db, file.path(manOutDir, basename(outDir)))
    }
    invisible()
}
