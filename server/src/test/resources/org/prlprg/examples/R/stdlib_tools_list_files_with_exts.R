#? stdlib
`list_files_with_exts` <- function (dir, exts, all.files = FALSE, full.names = TRUE) 
{
    files <- list.files(dir, all.files = all.files)
    patt <- paste0("\\.(", paste(exts, collapse = "|"), ")$")
    files <- grep(patt, files, value = TRUE)
    if (full.names) 
        files <- if (length(files)) 
            file.path(dir, files)
        else character()
    files
}
