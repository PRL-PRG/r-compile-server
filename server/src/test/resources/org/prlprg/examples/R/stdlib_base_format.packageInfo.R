#? stdlib
`format.packageInfo` <- function (x, ...) 
{
    if (!inherits(x, "packageInfo")) 
        stop("wrong class")
    vignetteMsg <- gettextf("Further information is available in the following vignettes in directory %s:", 
        sQuote(file.path(x$path, "doc")))
    headers <- sprintf("\n%s\n", c(gettext("Description:"), gettext("Index:"), 
        paste(strwrap(vignetteMsg), collapse = "\n")))
    formatDocEntry <- function(entry) {
        if (is.list(entry) || is.matrix(entry)) 
            formatDL(entry, style = "list")
        else entry
    }
    c(gettextf("\n\t\tInformation on package %s", sQuote(x$name)), 
        unlist(lapply(which(!vapply(x$info, is.null, NA)), function(i) c(headers[i], 
            formatDocEntry(x$info[[i]])))))
}
