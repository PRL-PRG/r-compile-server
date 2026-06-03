#? stdlib
`.install_package_demo_index` <- function (dir, outDir) 
{
    demoDir <- file.path(dir, "demo")
    if (!dir.exists(demoDir)) 
        return(invisible())
    demoIndex <- .build_demo_index(demoDir)
    saveRDS(demoIndex, file = file.path(outDir, "Meta", "demo.rds"))
    invisible()
}
