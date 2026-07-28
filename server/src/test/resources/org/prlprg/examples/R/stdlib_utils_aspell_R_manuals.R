#? stdlib
`aspell_R_manuals` <- function (which = NULL, dir = NULL, program = NULL, dictionaries = c(aspell_dictionaries_R, 
    "R_manuals")) 
{
    if (is.null(dir)) 
        dir <- tools:::.R_top_srcdir_from_Rd()
    files <- if (is.null(which)) {
        Sys.glob(file.path(dir, "doc", "manual", "*.texi"))
    }
    else {
        ind <- which(which == basename(tools::file_path_sans_ext(which)))
        which[ind] <- file.path(dir, "doc", "manual", sprintf("%s.texi", 
            which[ind]))
        which
    }
    program <- aspell_find_program(program)
    aspell(files, control = aspell_control_R_manuals[[names(program)]], 
        program = program, dictionaries = dictionaries)
}
