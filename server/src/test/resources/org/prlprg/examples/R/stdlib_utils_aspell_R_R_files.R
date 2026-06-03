#? stdlib
`aspell_R_R_files` <- function (which = NULL, dir = NULL, ignore = c("[ \t]'[^']*'[ \t[:punct:]]", 
    "[ \t][[:alnum:]_.]*\\(\\)[ \t[:punct:]]"), program = NULL, 
    dictionaries = aspell_dictionaries_R) 
{
    if (is.null(dir)) 
        dir <- tools:::.R_top_srcdir_from_Rd()
    if (is.null(which)) 
        which <- tools:::.get_standard_package_names()$base
    files <- unlist(lapply(file.path(dir, "src", "library", which, 
        "R"), tools::list_files_with_type, "code", OS_subdirs = c("unix", 
        "windows")), use.names = FALSE)
    program <- aspell_find_program(program)
    aspell(files, filter = list("R", ignore = ignore), control = aspell_control_R_Rd_files[[names(program)]], 
        program = program, dictionaries = dictionaries)
}
