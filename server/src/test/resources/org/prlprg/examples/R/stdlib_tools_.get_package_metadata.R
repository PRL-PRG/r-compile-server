#? stdlib
`.get_package_metadata` <- function (dir, installed = FALSE) 
{
    dir <- file_path_as_absolute(dir)
    dfile <- file.path(dir, "DESCRIPTION")
    if (file_test("-f", dfile)) 
        return(.read_description(dfile))
    if (installed) 
        stop("File 'DESCRIPTION' is missing.")
    dfile <- file.path(dir, "DESCRIPTION.in")
    if (file_test("-f", dfile)) 
        meta <- .read_description(dfile)
    else stop("Files 'DESCRIPTION' and 'DESCRIPTION.in' are missing.")
    if (identical(as.character(meta["Priority"]), "base")) 
        return(meta)
    stop("invalid package layout")
}
