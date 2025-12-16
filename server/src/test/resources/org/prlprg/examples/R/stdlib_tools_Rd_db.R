#? stdlib
`Rd_db` <- function (package, dir, lib.loc = NULL, stages = "build") 
{
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        db_file <- file.path(dir, "help", package)
        if (file_test("-f", paste0(db_file, ".rdx"))) {
            db <- fetchRdDB(db_file)
            pathfile <- file.path(dir, "help", "paths.rds")
            if (file.exists(pathfile)) {
                paths <- readRDS(pathfile)
                if (!is.null(first <- attr(paths, "first"))) 
                  paths <- substring(paths, first)
                names(db) <- paths
            }
        }
        else stop(sprintf("installed help of package %s is corrupt", 
            sQuote(package)), domain = NA)
    }
    else {
        if (missing(dir)) 
            stop("you must specify 'package' or 'dir'")
        if (!dir.exists(dir)) 
            stop(gettextf("directory '%s' does not exist", dir), 
                domain = NA)
        else dir <- file_path_as_absolute(dir)
        built_file <- file.path(dir, "build", "partial.rdb")
        later_file <- file.path(dir, "build", "stage23.rdb")
        db <- .build_Rd_db(dir, stages = stages, built_file = built_file, 
            later_file = later_file)
        if (length(db)) {
            first <- nchar(file.path(dir, "man")) + 2L
            names(db) <- substring(names(db), first)
        }
    }
    db
}
