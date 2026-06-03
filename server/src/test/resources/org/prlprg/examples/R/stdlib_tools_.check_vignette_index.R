#? stdlib
`.check_vignette_index` <- function (vignetteDir, pkgdir = ".") 
{
    dir <- file.path(pkgdir, vignetteDir)
    if (!dir.exists(dir)) 
        stop(gettextf("directory '%s' does not exist", dir), 
            domain = NA)
    subdir <- gsub(pkgdir, "", dir, fixed = TRUE)
    vigns <- pkgVignettes(dir = pkgdir, subdirs = subdir)
    vignetteIndex <- .build_vignette_index(vigns)
    badEntries <- vignetteIndex[grep("^[[:space:]]*$", vignetteIndex[, 
        "Title"]), "File"]
    class(badEntries) <- "check_vignette_index"
    badEntries
}
