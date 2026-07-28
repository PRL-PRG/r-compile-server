#? stdlib
`namespaceImportFrom` <- function (self, ns, vars, generics, packages, from = "non-package environment", 
    except = character(0L)) 
{
    addImports <- function(ns, from, what) {
        imp <- structure(list(what), names = getNamespaceName(from))
        imports <- getNamespaceImports(ns)
        setNamespaceInfo(ns, "imports", c(imports, imp))
    }
    namespaceIsSealed <- function(ns) environmentIsLocked(ns)
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
    whichMethodMetaNames <- function(impvars) {
        if (!.isMethodsDispatchOn()) 
            return(numeric())
        seq_along(impvars)[startsWith(impvars, ".__T__")]
    }
    genericPackage <- function(f) {
        if (methods::is(f, "genericFunction")) 
            f@package
        else if (is.primitive(f)) 
            "base"
        else "<unknown>"
    }
    if (is.character(self)) 
        self <- getNamespace(self)
    ns <- asNamespace(ns)
    nsname <- getNamespaceName(ns)
    impvars <- if (missing(vars)) {
        stoplist <- c(".__NAMESPACE__.", ".__S3MethodsTable__.", 
            ".packageName", ".First.lib", ".Last.lib", ".onLoad", 
            ".onAttach", ".onDetach", ".conflicts.OK", ".noGenerics")
        vars <- getNamespaceExports(ns)
        vars <- vars[!vars %in% stoplist]
    }
    else vars
    impvars <- impvars[!impvars %in% except]
    impvars <- makeImportExportNames(impvars)
    impnames <- names(impvars)
    if (anyDuplicated(impnames)) {
        stop(gettextf("duplicate import names %s", paste(sQuote(impnames[duplicated(impnames)]), 
            collapse = ", ")), domain = NA)
    }
    if (isNamespace(self)) {
        if (isBaseNamespace(self)) {
            impenv <- self
            msg <- gettext("replacing local value with import %s when loading %s")
            register <- FALSE
        }
        else {
            if (namespaceIsSealed(self)) 
                stop("cannot import into a sealed namespace")
            impenv <- parent.env(self)
            msg <- gettext("replacing previous import by %s when loading %s")
            register <- TRUE
        }
    }
    else if (is.environment(self)) {
        impenv <- self
        msg <- gettext("replacing local value with import %s when loading %s")
        register <- FALSE
    }
    else stop("invalid import target")
    which <- whichMethodMetaNames(impvars)
    if (length(which)) {
        delete <- integer()
        for (i in which) {
            methodsTable <- .mergeImportMethods(impenv, ns, impvars[[i]])
            if (is.null(methodsTable)) {
            }
            else {
                delete <- c(delete, i)
                if (!missing(generics)) {
                  genName <- generics[[i]]
                  fdef <- methods::getGeneric(genName, where = impenv, 
                    package = packages[[i]])
                  if (is.null(fdef)) 
                    warning(gettextf("found methods to import for function %s but not the generic itself", 
                      sQuote(genName)), call. = FALSE, domain = NA)
                  else methods:::.updateMethodsInTable(fdef, 
                    ns, TRUE)
                }
            }
        }
        if (length(delete)) {
            impvars <- impvars[-delete]
            impnames <- impnames[-delete]
        }
    }
    for (n in impnames) if (!is.null(genImp <- impenv[[n]])) {
        if (.isMethodsDispatchOn() && methods::isGeneric(n, ns)) {
            genNs <- genericPackage(get(n, envir = ns))
            if (identical(genNs, genericPackage(genImp))) 
                next
            genImpenv <- environmentName(environment(genImp))
            if (!identical(genNs, genImpenv) || methods::isGeneric(n, 
                impenv)) {
            }
            else next
        }
        if (identical(genImp, get(n, ns))) 
            next
        if (isNamespace(self) && !isBaseNamespace(self)) {
            current <- getNamespaceInfo(self, "imports")
            poss <- lapply(rev(current), `[`, n)
            poss <- poss[!sapply(poss, is.na)]
            if (length(poss) >= 1L) {
                prev <- names(poss)[1L]
                warning(sprintf(gettext("replacing previous import %s by %s when loading %s"), 
                  sQuote(paste(prev, n, sep = "::")), sQuote(paste(nsname, 
                    n, sep = "::")), sQuote(from)), call. = FALSE, 
                  domain = NA)
            }
            else warning(sprintf(msg, sQuote(paste(nsname, n, 
                sep = "::")), sQuote(from)), call. = FALSE, domain = NA)
        }
        else {
            warning(sprintf(msg, sQuote(paste(nsname, n, sep = "::")), 
                sQuote(from)), call. = FALSE, domain = NA)
        }
    }
    importIntoEnv(impenv, impnames, ns, impvars)
    if (register) 
        addImports(self, ns, if (missing(vars)) 
            TRUE
        else impvars)
}
