#? stdlib
`.get_standard_package_dependencies` <- function (reverse = FALSE, recursive = FALSE) 
{
    names <- unlist(.get_standard_package_names())
    paths <- file.path(.Library, names, "DESCRIPTION")
    paths <- paths[file.exists(paths)]
    which <- c("Depends", "Imports")
    fields <- c("Package", which)
    a <- do.call(rbind, lapply(paths, function(p) .read_description(p)[fields]))
    colnames(a) <- fields
    package_dependencies(names, a, which = which, reverse = reverse, 
        recursive = recursive)
}
