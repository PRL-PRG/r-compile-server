#? stdlib
`.build_repository_package_db` <- function (dir, fields = NULL, type = c("source", "mac.binary", 
    "win.binary"), verbose = getOption("verbose"), unpacked = FALSE, 
    validate = FALSE) 
{
    if (unpacked) 
        return(.build_repository_package_db_from_source_dirs(dir, 
            fields, verbose, validate))
    package_pattern <- .get_pkg_file_pattern(type)
    files <- list.files(dir, pattern = package_pattern, full.names = TRUE)
    if (!length(files)) 
        return(list())
    type <- match.arg(type)
    db <- .process_package_files_for_repository_db(files, type, 
        fields, verbose, validate)
    db
}
