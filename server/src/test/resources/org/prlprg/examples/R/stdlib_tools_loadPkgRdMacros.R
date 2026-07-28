#? stdlib
`loadPkgRdMacros` <- function (pkgdir, macros = NULL) 
{
    pkglist <- .get_package_metadata(pkgdir)["RdMacros"]
    if (is.na(pkglist)) 
        pkglist <- NULL
    if (is.null(macros)) 
        macros <- initialRdMacros(pkglist)
    else macros <- initialRdMacros(pkglist, macros)
    files <- c(list.files(file.path(pkgdir, "man", "macros"), 
        pattern = "\\.Rd$", full.names = TRUE), list.files(file.path(pkgdir, 
        "help", "macros"), pattern = "\\.Rd$", full.names = TRUE))
    for (f in files) macros <- loadRdMacros(f, macros)
    macros
}
