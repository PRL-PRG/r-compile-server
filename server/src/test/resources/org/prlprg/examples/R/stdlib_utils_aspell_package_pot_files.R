#? stdlib
`aspell_package_pot_files` <- function (dir, ignore = character(), control = list(), program = NULL, 
    dictionaries = character()) 
{
    dir <- tools::file_path_as_absolute(dir)
    subdir <- file.path(dir, "po")
    files <- if (dir.exists(subdir)) 
        Sys.glob(file.path(subdir, "*.pot"))
    else character()
    meta <- tools:::.get_package_metadata(dir, installed = FALSE)
    if (is.na(encoding <- meta["Encoding"])) 
        encoding <- "unknown"
    program <- aspell_find_program(program)
    aspell(files, filter = list("pot", ignore = ignore), control = control, 
        encoding = encoding, program = program, dictionaries = dictionaries)
}
