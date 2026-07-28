#? stdlib
`.R_top_srcdir_from_Rd` <- function () 
{
    filebase <- file_path_sans_ext(system.file("help", "tools.rdb", 
        package = "tools"))
    path <- attr(fetchRdDB(filebase, "QC"), "Rdfile")
    substr(path, 1L, nchar(path) - 28L)
}
