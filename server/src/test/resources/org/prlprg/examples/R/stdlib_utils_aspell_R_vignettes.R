#? stdlib
`aspell_R_vignettes` <- function (program = NULL, dictionaries = c(aspell_dictionaries_R, 
    "R_vignettes")) 
{
    files <- Sys.glob(file.path(tools:::.R_top_srcdir_from_Rd(), 
        "src", "library", "*", "vignettes", "*.Rnw"))
    program <- aspell_find_program(program)
    aspell(files, filter = list("Sweave+LaTeX", cmds = c("Sexpr p", 
        "SweaveOpts p", "code p", "hypersetup p")), control = aspell_control_R_vignettes[[names(program)]], 
        program = program, dictionaries = dictionaries)
}
