#? stdlib
`.check_package_ASCII_code` <- function (dir, respect_quotes = FALSE) 
{
    if (!dir.exists(dir)) 
        stop(gettextf("directory '%s' does not exist", dir), 
            domain = NA)
    dir <- file_path_as_absolute(dir)
    wrong_things <- character()
    for (f in c(file.path(dir, "NAMESPACE"), list_files_with_type(file.path(dir, 
        "R"), "code", OS_subdirs = c("unix", "windows")))) {
        text <- readLines(f, warn = FALSE)
        if (.Call(C_check_nonASCII, text, respect_quotes)) 
            wrong_things <- c(wrong_things, f)
    }
    if (length(wrong_things)) {
        wrong_things <- substring(wrong_things, nchar(dir) + 
            2L)
        cat(wrong_things, sep = "\n")
    }
    invisible(wrong_things)
}
