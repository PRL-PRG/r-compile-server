#? stdlib
`.install_package_indices` <- function (dir, outDir) 
{
    options(warn = 1)
    if (!dir.exists(dir)) 
        stop(gettextf("directory '%s' does not exist", dir), 
            domain = NA)
    if (!dir.exists(outDir)) 
        stop(gettextf("directory '%s' does not exist", outDir), 
            domain = NA)
    if (file_test("-f", file.path(dir, "INDEX"))) 
        if (!file.copy(file.path(dir, "INDEX"), file.path(outDir, 
            "INDEX"), overwrite = TRUE)) 
            stop(gettextf("unable to copy INDEX to '%s'", file.path(outDir, 
                "INDEX")), domain = NA)
    outMetaDir <- file.path(outDir, "Meta")
    if (!dir.exists(outMetaDir) && !dir.create(outMetaDir)) 
        stop(gettextf("cannot open directory '%s'", outMetaDir), 
            domain = NA)
    .install_package_Rd_indices(dir, outDir)
    .install_package_demo_index(dir, outDir)
    invisible()
}
