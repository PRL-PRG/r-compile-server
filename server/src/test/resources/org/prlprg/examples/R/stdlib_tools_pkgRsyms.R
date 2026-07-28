#? stdlib
`pkgRsyms` <- function (pkg, lib.loc = NULL) 
{
    libdir <- system.file("libs", package = pkg, lib.loc = lib.loc)
    libs <- Sys.glob(file.path(libdir, "*.so"))
    if (length(libs) > 0) {
        val <- rbind_list(lapply(libs, ofile_syms, keep = "U"))
        val$package <- rep(pkg, nrow(val))
        val$type <- NULL
        merge(val, Rsyms())
    }
    else NULL
}
