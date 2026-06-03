#? stdlib
`aspell_package_R_files` <- function (dir, ignore = character(), control = list(), program = NULL, 
    dictionaries = character()) 
{
    dir <- tools::file_path_as_absolute(dir)
    subdir <- file.path(dir, "R")
    files <- if (dir.exists(subdir)) 
        tools::list_files_with_type(subdir, "code", OS_subdirs = c("unix", 
            "windows"))
    else character()
    meta <- tools:::.get_package_metadata(dir, installed = FALSE)
    if (is.na(encoding <- meta["Encoding"])) 
        encoding <- "unknown"
    defaults <- .aspell_package_defaults(dir, encoding)$R_files
    if (!is.null(defaults)) {
        if (!is.null(d <- defaults$ignore)) 
            ignore <- d
        if (!is.null(d <- defaults$control)) 
            control <- d
        if (!is.null(d <- defaults$program)) 
            program <- d
        if (!is.null(d <- defaults$dictionaries)) {
            dictionaries <- aspell_find_dictionaries(d, file.path(dir, 
                ".aspell"))
        }
    }
    program <- aspell_find_program(program)
    aspell(files, filter = list("R", ignore = ignore), control = control, 
        encoding = encoding, program = program, dictionaries = dictionaries)
}
