#? stdlib
`aspell_package_description` <- function (dir, ignore = character(), control = list(), program = NULL, 
    dictionaries = character()) 
{
    dir <- tools::file_path_as_absolute(dir)
    files <- file.path(dir, "DESCRIPTION")
    meta <- tools:::.get_package_metadata(dir, installed = FALSE)
    if (is.na(encoding <- meta["Encoding"])) 
        encoding <- "unknown"
    defaults <- Sys.getenv("_R_ASPELL_USE_DEFAULTS_FOR_PACKAGE_DESCRIPTION_", 
        "TRUE")
    defaults <- if (str2logical(defaults)) {
        .aspell_package_defaults(dir, encoding)$description
    }
    else NULL
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
    aspell(files, filter = list("dcf", ignore = ignore), control = control, 
        encoding = encoding, program = program, dictionaries = dictionaries)
}
