#? stdlib
`.install_package_vignettes3` <- function (dir, outDir, encoding = "") 
{
    packageName <- basename(outDir)
    dir <- file_path_as_absolute(dir)
    indexname <- file.path(dir, "build", "vignette.rds")
    ok <- file_test("-f", indexname)
    if (!ok) 
        return(invisible())
    file.copy(indexname, file.path(outDir, "Meta"))
    vignetteDir <- file.path(outDir, "doc")
    hasHtmlIndex <- file_test("-f", file.path(vignetteDir, "index.html"))
    htmlIndex <- file.path(outDir, "doc", "index.html")
    vignetteIndex <- readRDS(indexname)
    if (!hasHtmlIndex) 
        .writeVignetteHtmlIndex(packageName, htmlIndex, vignetteIndex)
    invisible()
}
