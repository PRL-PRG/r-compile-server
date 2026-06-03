#? stdlib
`print.check_packages_in_dir` <- function (x, ...) 
{
    if (!length(x)) {
        writeLines("No packages checked.")
        return(invisible(x))
    }
    dir <- attr(x, "dir")
    writeLines(c(strwrap(sprintf("Check results for packages in dir '%s':", 
        dir)), sprintf("Package sources: %d, Reverse depends: %d", 
        length(attr(x, "pnames")), length(attr(x, "rnames"))), 
        "Use summary() for more information."))
    invisible(x)
}
