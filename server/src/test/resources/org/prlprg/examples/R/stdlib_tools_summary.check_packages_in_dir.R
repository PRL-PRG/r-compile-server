#? stdlib
`summary.check_packages_in_dir` <- function (object, all = TRUE, full = FALSE, ...) 
{
    if (!length(object)) {
        writeLines("No packages checked.")
        return(invisible(object))
    }
    dir <- attr(object, "dir")
    writeLines(c(strwrap(sprintf("Check results for packages in dir '%s':", 
        dir)), ""))
    details <- summarize_check_packages_in_dir_results(dir)
    if (!full && details) {
        writeLines("\nUse summary(full = TRUE) for details.")
    }
    invisible(object)
}
