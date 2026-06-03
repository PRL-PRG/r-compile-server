#? stdlib
`summarize_check_packages_in_dir_depends` <- function (dir, all = FALSE, which = c("Depends", "Imports", "LinkingTo")) 
{
    if (identical(which, "all")) 
        which <- c("Depends", "Imports", "LinkingTo", "Suggests", 
            "Enhances")
    else if (identical(which, "most")) 
        which <- c("Depends", "Imports", "LinkingTo", "Suggests")
    for (d in R_check_outdirs(dir, all = all)) {
        dfile <- Sys.glob(file.path(d, "00_pkg_src", "*", "DESCRIPTION"))[1L]
        if (file_test("-f", dfile)) {
            meta <- .read_description(dfile)
            package <- meta["Package"]
            meta <- meta[match(which, names(meta), nomatch = 0L)]
            if (length(meta)) {
                writeLines(c(sprintf("Package: %s", package), 
                  unlist(Map(function(tag, val) {
                    strwrap(sprintf("%s: %s", tag, val), indent = 2L, 
                      exdent = 4L)
                  }, names(meta), meta))))
            }
        }
    }
    invisible()
}
