#? stdlib
`aspell_package_Rd_files` <- function (dir, drop = c("\\abbr", "\\acronym", "\\author", "\\references"), 
    control = list(), program = NULL, dictionaries = character()) 
{
    dir <- normalizePath(dir, "/")
    subdir <- file.path(dir, "man")
    files <- if (dir.exists(subdir)) 
        tools::list_files_with_type(subdir, "docs", OS_subdirs = c("unix", 
            "windows"))
    else character()
    meta <- tools:::.get_package_metadata(dir, installed = FALSE)
    if (is.na(encoding <- meta["Encoding"])) 
        encoding <- "unknown"
    defaults <- .aspell_package_defaults(dir, encoding)$Rd_files
    if (!is.null(defaults)) {
        if (!is.null(d <- defaults$drop)) 
            drop <- d
        if (!is.null(d <- defaults$control)) 
            control <- d
        if (!is.null(d <- defaults$program)) 
            program <- d
        if (!is.null(d <- defaults$dictionaries)) {
            dictionaries <- aspell_find_dictionaries(d, file.path(dir, 
                ".aspell"))
        }
        if (!is.null(d <- defaults$personal)) 
            control <- c(control, sprintf("-p %s", shQuote(file.path(dir, 
                ".aspell", d))))
    }
    macros <- tools::loadPkgRdMacros(dir, macros = file.path(R.home("share"), 
        "Rd", "macros", "system.Rd"))
    aspell(files, filter = list("Rd", drop = drop, macros = macros), 
        control = control, encoding = encoding, program = program, 
        dictionaries = dictionaries)
}
