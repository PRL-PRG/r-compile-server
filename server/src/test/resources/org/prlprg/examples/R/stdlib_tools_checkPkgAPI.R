#? stdlib
`checkPkgAPI` <- function (pkg, lib.loc = NULL, all = FALSE) 
{
    libdir <- system.file("libs", package = pkg, lib.loc = lib.loc)
    libs <- Sys.glob(file.path(libdir, sprintf("*%s", .Platform$dynlib.ext)))
    if (length(libs) > 0) {
        val <- do.call(rbind, lapply(libs, checkLibAPI))
        if (!all) 
            val <- val[is.na(val$apitype), ]
        val <- unique(val)
        rownames(val) <- NULL
        val
    }
    else NULL
}
