#? stdlib
`loadVignetteBuilder` <- function (pkgdir, mustwork = TRUE, lib.loc = NULL) 
{
    pkgs <- .get_package_metadata(pkgdir)["VignetteBuilder"]
    if (is.na(pkgs)) 
        pkgs <- NULL
    else if (length(pkgs)) {
        pkgs <- unlist(strsplit(pkgs, ","))
        pkgs <- gsub("[[:space:]]", "", pkgs)
    }
    pkgs <- unique(c(pkgs, "utils"))
    for (pkg in pkgs) {
        res <- tryCatch(suppressPackageStartupMessages(loadNamespace(pkg, 
            lib.loc = lib.loc)), error = identity)
        if (mustwork && inherits(res, "error")) 
            stop(gettextf("vignette builder '%s' not found", 
                pkg), domain = NA)
    }
    pkgs
}
