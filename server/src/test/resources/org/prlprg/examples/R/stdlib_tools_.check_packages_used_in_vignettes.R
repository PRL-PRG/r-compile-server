#? stdlib
`.check_packages_used_in_vignettes` <- function (package, lib.loc = NULL) 
{
    if (missing(package) || length(package) != 1L) 
        stop("argument 'package' must be of length 1")
    dir <- find.package(package, lib.loc)
    db <- .read_description(file.path(dir, "DESCRIPTION"))
    vinfo <- .package_vignettes_via_call_to_R(dir = dir, subdirs = "doc", 
        source = TRUE)
    Rfiles <- unique(as.character(unlist(vinfo$sources)))
    .check_packages_used_helper(db, Rfiles)
}
