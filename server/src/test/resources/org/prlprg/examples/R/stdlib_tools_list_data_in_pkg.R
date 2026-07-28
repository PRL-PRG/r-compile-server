#? stdlib
`list_data_in_pkg` <- function (package, lib.loc = NULL, dir, use_datalist = TRUE) 
{
    if (!missing(package)) {
        dir <- find.package(package, lib.loc, quiet = TRUE)
        if (!length(dir)) 
            stop(packageNotFoundError(package, lib.loc, sys.call()))
    }
    else {
        if (missing(dir)) 
            stop("you must specify 'package' or 'dir'")
        if (!dir.exists(dir)) 
            stop(gettextf("directory '%s' does not exist", dir), 
                domain = NA)
        dir <- file_path_as_absolute(dir)
        package <- character(0L)
        lib.loc <- NULL
    }
    if (dir.exists(dataDir <- file.path(dir, "data"))) {
        if (file.exists(sv <- file.path(dataDir, "Rdata.rds"))) {
            ans <- readRDS(sv)
        }
        else if (file.exists(sv <- file.path(dataDir, "datalist")) && 
            use_datalist && !file.info(sv)$isdir) {
            ans <- strsplit(readLines(sv, warn = FALSE), ":")
            nms <- lapply(ans, function(x) x[1L])
            ans <- lapply(ans, function(x) if (length(x) == 1L) 
                x[1L]
            else strsplit(x[2L], " +")[[1L]][-1L])
            names(ans) <- nms
        }
        else {
            if (!length(package)) {
                owd <- setwd(dir)
                on.exit(setwd(owd))
            }
            files <- list_files_with_type(dataDir, "data")
            files <- unique(basename(file_path_sans_ext(files, 
                TRUE)))
            ans <- vector("list", length(files))
            dataEnv <- new.env(hash = TRUE)
            names(ans) <- files
            for (f in files) {
                tryCatch(suppressMessages(suppressWarnings(utils::data(list = f, 
                  package = package, lib.loc = lib.loc, envir = dataEnv))), 
                  error = identity)
                ans[[f]] <- ls(envir = dataEnv, all.names = TRUE)
                rm(list = ans[[f]], envir = dataEnv)
            }
        }
        ans
    }
    else NULL
}
