#? stdlib
`format.check_package_description2` <- function (x, ...) 
{
    c(if (length(xx <- x$duplicates)) {
        c(if (length(xx) > 1L) "Packages listed in more than one of Depends, Imports, Suggests, Enhances:" else "Package listed in more than one of Depends, Imports, Suggests, Enhances:", 
            paste(c(" ", sQuote(xx)), collapse = " "), "A package should be listed in only one of these fields.")
    }, if (!x$have_src) "'LinkingTo' field is unused: package has no 'src' directory", 
        if (length(xx <- x$bad_links)) {
            if (length(xx) > 1L) c("Versioned 'LinkingTo' values for", 
                paste(c(" ", sQuote(xx)), collapse = " "), "are only usable in R >= 3.0.2") else sprintf("Versioned 'LinkingTo' value for %s is only usable in R >= 3.0.2", 
                sQuote(xx))
        }, if (x$have_src && length(xx <- x$missing_incs)) {
            if (length(xx) > 1L) c("'LinkingTo' for", paste(c(" ", 
                sQuote(xx)), collapse = " "), "are unused as they have no 'include' directory") else sprintf("'LinkingTo' for %s is unused as it has no 'include' directory", 
                sQuote(xx))
        })
}
