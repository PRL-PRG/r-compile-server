#? stdlib
`.install_package_namespace_info` <- function (dir, outDir) 
{
    dir <- file_path_as_absolute(dir)
    nsFile <- file.path(dir, "NAMESPACE")
    if (!file_test("-f", nsFile)) 
        return(invisible())
    nsInfoFilePath <- file.path(outDir, "Meta", "nsInfo.rds")
    if (file_test("-nt", nsInfoFilePath, nsFile)) 
        return(invisible())
    nsInfo <- parseNamespaceFile(basename(dir), dirname(dir))
    outMetaDir <- file.path(outDir, "Meta")
    if (!dir.exists(outMetaDir) && !dir.create(outMetaDir)) 
        stop(gettextf("cannot open directory '%s'", outMetaDir), 
            domain = NA)
    saveRDS(nsInfo, nsInfoFilePath)
    invisible()
}
