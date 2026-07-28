#? stdlib
`.update_package_rds` <- function (lib.loc = NULL) 
{
    if (is.null(lib.loc)) 
        lib.loc <- .libPaths()
    lib.loc <- lib.loc[file.exists(lib.loc)]
    for (lib in lib.loc) {
        a <- list.files(lib, all.files = FALSE, full.names = TRUE)
        for (nam in a) {
            dfile <- file.path(nam, "DESCRIPTION")
            if (file.exists(dfile)) {
                print(nam)
                .install_package_description(nam, nam)
            }
        }
    }
}
