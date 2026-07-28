#? stdlib
`aspell_package` <- function (dir, control = list(), program = NULL, dictionaries = character()) 
{
    args <- list(dir = dir, program = program, control = control, 
        dictionaries = dictionaries)
    a <- rbind(do.call(aspell_package_description, args), do.call(aspell_package_Rd_files, 
        args), do.call(aspell_package_vignettes, args), do.call(aspell_package_R_files, 
        args), do.call(aspell_package_C_files, args))
    if (nrow(a)) {
        a$File <- tools:::file_path_relative_to(a$File, dirname(dir), 
            parent = FALSE)
    }
    a
}
