#? stdlib
`.check_namespace` <- function (dir) 
{
    dir <- file_path_as_absolute(dir)
    invisible(tryCatch(parseNamespaceFile(basename(dir), dirname(dir)), 
        error = function(e) {
            writeLines("Invalid NAMESPACE file, parsing gives:")
            stop(e)
        }))
}
