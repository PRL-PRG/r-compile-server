#? stdlib
`aspell_R_C_files` <- function (which = NULL, dir = NULL, ignore = c("[ \t]'[[:alnum:]_.]*'[ \t[:punct:]]", 
    "[ \t][[:alnum:]_.]*\\(\\)[ \t[:punct:]]"), program = NULL, 
    dictionaries = aspell_dictionaries_R) 
{
    if (is.null(dir)) 
        dir <- tools:::.R_top_srcdir_from_Rd()
    if (is.null(which)) 
        which <- tools:::.get_standard_package_names()$base
    if (!is.na(pos <- match("base", which))) 
        which[pos] <- "R"
    files <- sprintf("%s.pot", file.path(dir, "src", "library", 
        which, "po", which))
    files <- files[file_test("-f", files)]
    program <- aspell_find_program(program)
    aspell(files, filter = list("pot", ignore = ignore), control = aspell_control_R_Rd_files[[names(program)]], 
        program = program, dictionaries = dictionaries)
}
