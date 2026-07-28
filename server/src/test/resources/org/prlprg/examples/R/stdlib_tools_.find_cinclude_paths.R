#? stdlib
`.find_cinclude_paths` <- function (pkgs, lib.loc = NULL, file = NULL) 
{
    if (!is.null(file)) {
        tmp <- read.dcf(file, "LinkingTo")[1L, 1L]
        if (is.na(tmp)) 
            return(invisible())
        pkgs <- tmp
    }
    pkgs <- strsplit(pkgs[1L], ",[[:blank:]]*")[[1L]]
    paths <- find.package(pkgs, lib.loc, quiet = TRUE)
    if (length(paths)) 
        cat(paste(paste0("-I\"", paths, "/include\""), collapse = " "))
    return(invisible())
}
