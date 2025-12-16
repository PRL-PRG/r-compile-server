#? stdlib
`namespaceExport` <- function (ns, vars) 
{
    namespaceIsSealed <- function(ns) environmentIsLocked(ns)
    if (namespaceIsSealed(ns)) 
        stop("cannot add to exports of a sealed namespace")
    ns <- asNamespace(ns, base.OK = FALSE)
    if (length(vars)) {
        addExports <- function(ns, new) {
            exports <- .getNamespaceInfo(ns, "exports")
            expnames <- names(new)
            objs <- names(exports)
            ex <- expnames %in% objs
            if (any(ex)) 
                warning(sprintf(ngettext(sum(ex), "previous export '%s' is being replaced", 
                  "previous exports '%s' are being replaced"), 
                  paste(sQuote(expnames[ex]), collapse = ", ")), 
                  call. = FALSE, domain = NA)
            list2env(as.list(new), exports)
        }
        makeImportExportNames <- function(spec) {
            old <- as.character(spec)
            new <- names(spec)
            if (is.null(new)) 
                new <- old
            else {
                change <- !nzchar(new)
                new[change] <- old[change]
            }
            names(old) <- new
            old
        }
        new <- makeImportExportNames(unique(vars))
        undef <- new[!new %in% names(ns)]
        undef <- undef[!vapply(undef, exists, NA, envir = ns)]
        if (length(undef)) {
            undef <- do.call("paste", as.list(c(undef, sep = ", ")))
            undef <- gsub("^\\.__C__", "class ", undef)
            stop(gettextf("undefined exports: %s", undef), domain = NA)
        }
        if (.isMethodsDispatchOn()) 
            .mergeExportMethods(new, ns)
        addExports(ns, new)
    }
}
