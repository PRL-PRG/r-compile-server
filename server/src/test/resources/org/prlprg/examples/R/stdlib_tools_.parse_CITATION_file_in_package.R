#? stdlib
`.parse_CITATION_file_in_package` <- function (cfile, installed = FALSE) 
{
    cfile <- file_path_as_absolute(cfile)
    dfile <- file.path(if (installed) 
        dirname(cfile)
    else dirname(dirname(cfile)), "DESCRIPTION")
    meta <- .read_description(dfile)
    if (is.na(encoding <- meta["Encoding"])) 
        encoding <- NULL
    .parse_CITATION_file(cfile, encoding)
}
