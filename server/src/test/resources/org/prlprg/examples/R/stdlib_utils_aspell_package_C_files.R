#? stdlib
`aspell_package_C_files` <- function (dir, ignore = character(), control = list(), program = NULL, 
    dictionaries = character()) 
{
    dir <- tools::file_path_as_absolute(dir)
    files <- file.path(dir, "po", paste(basename(dir), "pot", 
        collapse = "."))
    files <- files[file_test("-f", files)]
    meta <- tools:::.get_package_metadata(dir, installed = FALSE)
    if (is.na(encoding <- meta["Encoding"])) 
        encoding <- "unknown"
    defaults <- .aspell_package_defaults(dir, encoding)$C_files
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
    aspell(files, filter = list("pot", ignore = ignore), control = control, 
        encoding = encoding, program = program, dictionaries = dictionaries)
}
