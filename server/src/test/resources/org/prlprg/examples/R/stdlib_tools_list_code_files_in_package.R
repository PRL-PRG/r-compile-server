#? stdlib
`list_code_files_in_package` <- function (dir) 
{
    dir <- normalizePath(dir)
    code_dir <- file.path(dir, "R")
    code_files <- list_files_with_type(code_dir, "code")
    if (!length(code_files)) 
        return(code_files)
    meta <- .get_package_metadata(dir)
    collate_fields <- c(paste0("Collate.", .OStype()), "Collate")
    if (any(i <- (collate_fields %in% names(meta)))) {
        collate <- file.path(code_dir, .read_collate_field(meta[collate_fields[i][1L]]))
        code_files <- collate[collate %in% code_files]
    }
    code_files
}
