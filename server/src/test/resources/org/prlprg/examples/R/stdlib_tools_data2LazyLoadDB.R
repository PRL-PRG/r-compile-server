#? stdlib
`data2LazyLoadDB` <- function (package, lib.loc = NULL, compress = TRUE) 
{
    options(warn = 1)
    pkgpath <- find.package(package, lib.loc, quiet = TRUE)
    if (!length(pkgpath)) 
        stop(packageNotFoundError(package, lib.loc, sys.call()))
    dataDir <- file.path(pkgpath, "data")
    enc <- .read_description(file.path(pkgpath, "DESCRIPTION"))["Encoding"]
    if (!is.na(enc)) {
        op <- options(encoding = enc)
        on.exit(options(encoding = op[[1L]]))
    }
    if (dir.exists(dataDir)) {
        if (file.exists(file.path(dataDir, "Rdata.rds")) && file.exists(file.path(dataDir, 
            paste0(package, ".rdx"))) && file.exists(file.path(dataDir, 
            paste0(package, ".rdb")))) {
            warning("package seems to be using lazy loading for data already")
        }
        else {
            dataEnv <- new.env(hash = TRUE)
            tmpEnv <- new.env()
            f0 <- files <- list_files_with_type(dataDir, "data")
            files <- unique(basename(file_path_sans_ext(files, 
                TRUE)))
            dlist <- vector("list", length(files))
            names(dlist) <- files
            loaded <- character(0L)
            for (f in files) {
                utils::data(list = f, package = package, lib.loc = lib.loc, 
                  envir = dataEnv, overwrite = TRUE)
                utils::data(list = f, package = package, lib.loc = lib.loc, 
                  envir = tmpEnv, overwrite = TRUE)
                tmp <- ls(envir = tmpEnv, all.names = TRUE)
                rm(list = tmp, envir = tmpEnv)
                dlist[[f]] <- tmp
                loaded <- c(loaded, tmp)
            }
            dup <- duplicated(loaded)
            if (any(dup)) 
                warning(sprintf(ngettext(sum(dup), "object %s is created by more than one data call", 
                  "objects %s are created by more than one data call"), 
                  paste(sQuote(loaded[dup]), collapse = ", ")), 
                  call. = FALSE, domain = NA)
            if (length(loaded)) {
                dbbase <- file.path(dataDir, "Rdata")
                makeLazyLoadDB(dataEnv, dbbase, compress = compress)
                saveRDS(dlist, file.path(dataDir, "Rdata.rds"), 
                  compress = compress)
                unlink(f0)
            }
        }
    }
}
