#? stdlib
`browseVignettes` <- function (package = NULL, lib.loc = NULL, all = TRUE) 
{
    vinfo <- tools::getVignetteInfo(package, lib.loc, all)
    pkgs <- unique(vinfo[, "Package"])
    db <- lapply(pkgs, function(p) vinfo[vinfo[, "Package"] == 
        p, , drop = FALSE])
    names(db) <- pkgs
    attr(db, "call") <- sys.call()
    attr(db, "footer") <- if (all) 
        ""
    else sprintf(gettext("Use <code> %s </code> \n to list the vignettes in all <strong>available</strong> packages."), 
        "browseVignettes(all = TRUE)")
    class(db) <- "browseVignettes"
    return(db)
}
