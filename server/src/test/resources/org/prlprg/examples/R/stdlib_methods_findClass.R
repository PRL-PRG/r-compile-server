#? stdlib
`findClass` <- function (Class, where = topenv(parent.frame()), unique = "") 
{
    if (is(Class, "classRepresentation")) {
        pkg <- Class@package
        classDef <- Class
        Class <- Class@className
    }
    else {
        pkg <- packageSlot(Class)
        if (is.null(pkg)) 
            pkg <- ""
        classDef <- getClassDef(Class, where, pkg)
    }
    where <- if (missing(where) && nzchar(pkg)) 
        .requirePackage(pkg)
    else as.environment(where)
    what <- classMetaName(Class)
    where <- .findAll(what, where)
    if (length(where) > 1L && nzchar(pkg)) {
        pkgs <- sapply(where, function(db) get(what, db)@package)
        where <- where[match(pkg, pkgs, 0L)]
    }
    else pkgs <- pkg
    if (length(where) == 0L) {
        if (is.null(classDef)) 
            classDef <- getClassDef(Class)
        if (nzchar(unique)) {
            if (is(classDef, "classRepresentation")) 
                stop(gettextf("class %s is defined, with package %s, but no corresponding metadata object was found (not exported?)", 
                  dQuote(Class), sQuote(classDef@package)), domain = NA)
            else stop(gettextf("no definition of %s to use for %s", 
                dQuote(Class), unique), domain = NA)
        }
    }
    else if (length(where) > 1L) {
        pkgs <- sapply(where, getPackageName, create = FALSE)
        where <- where[!(nzchar(pkgs) & duplicated(pkgs))]
        if (length(where) > 1L) 
            if (nzchar(unique)) {
                pkgs <- base::unique(pkgs)
                where <- where[1L]
                warning(sprintf(ngettext(length(pkgs), "multiple definition of class %s visible (%s); using the definition\n   in package %s for %s", 
                  "multiple definitions of class %s visible (%s); using the definition\n   in package %s for %s"), 
                  dQuote(Class), paste(sQuote(pkgs), collapse = ", "), 
                  sQuote(pkgs[[1L]]), unique), domain = NA)
            }
    }
    where
}
