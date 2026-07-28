#? stdlib
`aspell_R_Rd_files` <- function (which = NULL, dir = NULL, drop = c("\\abbr", "\\acronym", 
    "\\author", "\\references"), program = NULL, dictionaries = c(aspell_dictionaries_R, 
    "R_Rd_files")) 
{
    files <- character()
    if (is.null(dir)) 
        dir <- tools:::.R_top_srcdir_from_Rd()
    if (is.null(which)) {
        which <- tools:::.get_standard_package_names()$base
        files <- c(file.path(dir, "doc", "NEWS.Rd"), file.path(dir, 
            "src", "gnuwin32", "CHANGES.Rd"))
        files <- files[file_test("-f", files)]
    }
    files <- c(files, unlist(lapply(file.path(dir, "src", "library", 
        which, "man"), tools::list_files_with_type, "docs", OS_subdirs = c("unix", 
        "windows")), use.names = FALSE))
    ignore <- c(sprintf("\\b(%s)\\b", paste(c("a priori", "et seq", 
        "post-mortem", "Inter alia", "inter alia", "2nd", "4th", 
        "20th", "100th", "equi-", "intra-", "mis-", "Pre-", "pre-", 
        "un-", "-ary", "-ness"), collapse = "|")), sprintf("(%s)\\b", 
        paste(c("\\(De\\)", "\\(de\\)", "\\(Un\\)", "\\(un\\)", 
            "-th", "'th"), collapse = "|")))
    program <- aspell_find_program(program)
    aspell(files, filter = list("Rd", drop = drop, ignore = ignore), 
        control = aspell_control_R_Rd_files[[names(program)]], 
        program = program, dictionaries = dictionaries)
}
