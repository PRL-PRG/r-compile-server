#? stdlib
`.package_apply` <- function (packages = NULL, FUN, ..., pattern = "*", verbose = TRUE, 
    Ncpus = getOption("Ncpus", 1L)) 
{
    if (is.null(packages)) 
        packages <- unique(utils::installed.packages(priority = "high")[, 
            1L])
    if (pattern != "*") 
        packages <- packages[grepl(utils::glob2rx(pattern), packages)]
    one <- function(p) {
        if (verbose) 
            message(sprintf("processing %s", p))
        tryCatch(FUN(p, ...), error = identity)
    }
    if (Ncpus > 1L) {
        if (.Platform$OS.type != "windows") {
            out <- parallel::mclapply(packages, one, mc.cores = Ncpus)
        }
        else {
            cl <- parallel::makeCluster(Ncpus)
            args <- list(FUN, ...)
            out <- parallel::parLapply(cl, packages, one)
            parallel::stopCluster(cl)
        }
    }
    else {
        out <- lapply(packages, one)
    }
    names(out) <- packages
    out
}
