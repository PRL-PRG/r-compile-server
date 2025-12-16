#? stdlib
`.check_package_code_shlib` <- function (dir) 
{
    predicate <- function(e) {
        ((length(e) > 1L) && (length(x <- as.character(e[[1L]])) == 
            1L) && (x %in% c("library.dynam", "library.dynam.unload")) && 
            (length(y <- e[[2L]]) == 1L) && is.character(y) && 
            grepl("\\.(so|sl|dll)$", y))
    }
    x <- Filter(length, .find_calls_in_package_code(dir, predicate, 
        recursive = TRUE))
    if (length(x)) 
        writeLines(c(unlist(Map(.format_calls_in_file, x, names(x))), 
            ""))
    invisible(x)
}
