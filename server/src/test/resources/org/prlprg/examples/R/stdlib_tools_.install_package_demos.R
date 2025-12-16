#? stdlib
`.install_package_demos` <- function (dir, outDir) 
{
    demodir <- file.path(dir, "demo")
    if (!dir.exists(demodir)) 
        return()
    demofiles <- list_files_with_type(demodir, "demo", full.names = FALSE)
    if (!length(demofiles)) 
        return()
    demoOutDir <- file.path(outDir, "demo")
    if (!dir.exists(demoOutDir)) 
        dir.create(demoOutDir)
    file.copy(file.path(demodir, demofiles), demoOutDir, overwrite = TRUE)
}
