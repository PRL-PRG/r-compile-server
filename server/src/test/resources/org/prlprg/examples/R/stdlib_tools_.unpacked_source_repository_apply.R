#? stdlib
`.unpacked_source_repository_apply` <- function (dir, FUN, ..., pattern = "*", verbose = FALSE, Ncpus = getOption("Ncpus", 
    1L)) 
{
    dir <- file_path_as_absolute(dir)
    dfiles <- Sys.glob(file.path(dir, pattern, "DESCRIPTION"))
    paths <- dirname(dfiles)
    one <- function(p) {
        if (verbose) 
            message(sprintf("processing %s", basename(p)))
        tryCatch(FUN(p, ...), error = identity)
    }
    if (Ncpus > 1L) {
        if (.Platform$OS.type != "windows") {
            out <- parallel::mclapply(paths, one, mc.cores = Ncpus)
        }
        else {
            cl <- parallel::makeCluster(Ncpus)
            args <- list(FUN, ...)
            out <- parallel::parLapply(cl, paths, one)
            parallel::stopCluster(cl)
        }
    }
    else {
        out <- lapply(paths, one)
    }
    names(out) <- basename(paths)
    out
}
