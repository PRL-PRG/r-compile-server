#? stdlib
`initialRdMacros` <- function (pkglist = NULL, macros = file.path(R.home("share"), 
    "Rd", "macros", "system.Rd")) 
{
    if (length(pkglist)) {
        others <- trimws(unlist(strsplit(pkglist, ",")))
        for (p in others) {
            if ((fp <- system.file(package = p)) == "") 
                warning(gettextf("Rd macro package '%s' is not installed.", 
                  p), call. = FALSE)
            else if (dir.exists(file.path(fp, "help", "macros"))) 
                macros <- loadPkgRdMacros(fp, macros)
            else warning(gettextf("No Rd macros in package '%s'.", 
                p), call. = FALSE)
        }
    }
    else if (is.character(macros)) 
        macros <- loadRdMacros(file = macros)
    macros
}
