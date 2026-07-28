#? stdlib
`.install_package_Rd_indices` <- function (dir, outDir) 
{
    dir <- file_path_as_absolute(dir)
    docsDir <- file.path(dir, "man")
    dataDir <- file.path(outDir, "data")
    outDir <- file_path_as_absolute(outDir)
    packageName <- basename(outDir)
    allRd <- if (dir.exists(docsDir)) 
        list_files_with_type(docsDir, "docs")
    else character()
    if (length(allRd)) {
        newestRd <- max(file.mtime(allRd))
        indices <- c(file.path("Meta", "Rd.rds"), file.path("Meta", 
            "hsearch.rds"), file.path("Meta", "links.rds"), "INDEX")
        upToDate <- file.mtime(file.path(outDir, indices)) >= 
            newestRd
        if (dir.exists(dataDir) && length(dataFiles <- list.files(dataDir))) {
            newestData <- max(file.mtime(dataFiles))
            upToDate <- c(upToDate, file.mtime(file.path(outDir, 
                "Meta", "data.rds")) >= max(newestRd, newestData))
        }
        RdsFile <- file.path("Meta", "Rd.rds")
        if (file.exists(RdsFile)) {
            files <- readRDS(RdsFile)$File
            if (!identical(basename(allRd), files)) 
                upToDate <- FALSE
        }
        if (all(upToDate %in% TRUE)) 
            return(invisible())
        db <- tryCatch(Rd_db(basename(outDir), lib.loc = dirname(outDir)), 
            error = function(e) NULL)
        if (is.null(db)) 
            db <- .build_Rd_db(dir, allRd)
        contents <- Rd_contents(db)
        .write_Rd_contents_as_RDS(contents, file.path(outDir, 
            "Meta", "Rd.rds"))
        defaultEncoding <- as.vector(readRDS(file.path(outDir, 
            "Meta", "package.rds"))$DESCRIPTION["Encoding"])
        if (is.na(defaultEncoding)) 
            defaultEncoding <- NULL
        saveRDS(.build_hsearch_index(contents, packageName, defaultEncoding), 
            file.path(outDir, "Meta", "hsearch.rds"))
        saveRDS(.build_links_index(contents, packageName), file.path(outDir, 
            "Meta", "links.rds"))
        if (!file_test("-f", file.path(dir, "INDEX"))) 
            writeLines(formatDL(.build_Rd_index(contents)), file.path(outDir, 
                "INDEX"))
    }
    else {
        contents <- NULL
        saveRDS(.build_hsearch_index(contents, packageName, defaultEncoding), 
            file.path(outDir, "Meta", "hsearch.rds"))
        saveRDS(.build_links_index(contents, packageName), file.path(outDir, 
            "Meta", "links.rds"))
    }
    if (dir.exists(dataDir)) 
        saveRDS(.build_data_index(outDir, contents), file.path(outDir, 
            "Meta", "data.rds"))
    invisible()
}
