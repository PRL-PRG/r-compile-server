#? stdlib
`list_files_with_type` <- function (dir, type, all.files = FALSE, full.names = TRUE, OS_subdirs = .OStype()) 
{
    exts <- .make_file_exts(type)
    files <- list_files_with_exts(dir, exts, all.files = all.files, 
        full.names = full.names)
    if (type %in% c("code", "docs")) {
        for (os in OS_subdirs) {
            os_dir <- file.path(dir, os)
            if (dir.exists(os_dir)) {
                os_files <- list_files_with_exts(os_dir, exts, 
                  all.files = all.files, full.names = FALSE)
                os_files <- file.path(if (full.names) 
                  os_dir
                else os, os_files)
                files <- c(files, os_files)
            }
        }
    }
    if (type %in% c("code", "docs")) {
        files <- files[grep("^[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789]", 
            basename(files))]
    }
    if (type %in% "demo") {
        files <- files[grep("^[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]", 
            basename(files))]
    }
    files
}
