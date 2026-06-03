#? stdlib
`namespaceImportMethods` <- function (self, ns, vars, from = NULL) 
{
    allVars <- character()
    generics <- character()
    packages <- character()
    allFuns <- methods:::.getGenerics(ns)
    allPackages <- attr(allFuns, "package")
    pkg <- methods::getPackageName(ns)
    found <- vars %in% allFuns
    if (!all(found)) {
        message(sprintf(ngettext(sum(!found), "No methods found in package %s for request: %s when loading %s", 
            "No methods found in package %s for requests: %s when loading %s"), 
            sQuote(pkg), paste(sQuote(vars[!found]), collapse = ", "), 
            sQuote(getNamespaceName(self))), domain = NA)
        vars <- vars[found]
    }
    found <- vars %in% allFuns
    if (!all(found)) 
        stop(sprintf(ngettext(sum(!found), "requested method not found in environment/package %s: %s when loading %s", 
            "requested methods not found in environment/package %s: %s when loading %s"), 
            sQuote(pkg), paste(sQuote(vars[!found]), collapse = ", "), 
            sQuote(getNamespaceName(self))), call. = FALSE, domain = NA)
    for (i in seq_along(allFuns)) {
        g <- allFuns[[i]]
        p <- allPackages[[i]]
        if (exists(g, envir = self, inherits = FALSE) || g %in% 
            vars) {
            tbl <- methods:::.TableMetaName(g, p)
            if (is.null(.mergeImportMethods(self, ns, tbl))) {
                allVars <- c(allVars, tbl)
                generics <- c(generics, g)
                packages <- c(packages, p)
            }
        }
        if (g %in% vars && !exists(g, envir = self, inherits = FALSE)) {
            if (!is.null(f <- get0(g, envir = ns)) && methods::is(f, 
                "genericFunction")) {
                allVars <- c(allVars, g)
                generics <- c(generics, g)
                packages <- c(packages, p)
            }
            else if (g %in% c("as.vector", "is.unsorted", "unlist")) {
            }
            else {
                fun <- methods::getFunction(g, mustFind = FALSE, 
                  where = self)
                if (is.primitive(fun) || methods::is(fun, "genericFunction")) {
                }
                else warning(gettextf("No generic function %s found corresponding to requested imported methods from package %s when loading %s (malformed exports?)", 
                  sQuote(g), sQuote(pkg), sQuote(from)), domain = NA, 
                  call. = FALSE)
            }
        }
    }
    namespaceImportFrom(self, asNamespace(ns), allVars, generics, 
        packages, from = from)
}
