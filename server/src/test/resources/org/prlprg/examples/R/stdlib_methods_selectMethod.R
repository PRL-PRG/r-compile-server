#? stdlib
`selectMethod` <- function (f, signature, optional = FALSE, useInherited = TRUE, 
    mlist = if (!is.null(fdef)) getMethodsForDispatch(fdef), 
    fdef = getGeneric(f, !optional), verbose = FALSE, doCache = FALSE) 
{
    if (is.environment(mlist)) {
        fenv <- environment(fdef)
        nsig <- .getGenericSigLength(fdef, fenv, FALSE)
        if (verbose) 
            cat("* mlist environment with", length(mlist), "potential methods\n")
        if (length(signature) < nsig) 
            signature[(length(signature) + 1):nsig] <- "ANY"
        if (identical(fdef@signature, "...")) {
            method <- .selectDotsMethod(signature, mlist, if (useInherited) 
                getMethodsForDispatch(fdef, inherited = TRUE))
            if (is.null(method) && !optional) 
                stop(gettextf("no method for %s matches class %s", 
                  sQuote("..."), dQuote(signature)), domain = NA)
            return(method)
        }
        method <- .findMethodInTable(signature, mlist, fdef)
        if (is.null(method)) {
            if (missing(useInherited)) 
                useInherited <- (is.na(match(signature, "ANY")) & 
                  if (identical(fdef, coerce)) 
                    c(TRUE, FALSE)
                  else TRUE)
            if (verbose) 
                cat("  no direct match found to signature (", 
                  paste(signature, collapse = ", "), ")\n", sep = "")
            methods <- if (any(useInherited)) {
                allmethods <- .getMethodsTable(fdef, fenv, check = FALSE, 
                  inherited = TRUE)
                .findInheritedMethods(signature, fdef, mtable = allmethods, 
                  table = mlist, useInherited = useInherited, 
                  verbose = verbose, doCache = doCache)
            }
            if (length(methods)) 
                return(methods[[1L]])
            else if (optional) 
                return(NULL)
            else stop(gettextf("no method found for signature %s", 
                paste(signature, collapse = ", ")))
        }
        else return(method)
    }
    else if (is.null(mlist)) {
        if (optional) 
            return(mlist)
        else stop(gettextf("%s has no methods defined", sQuote(f)), 
            domain = NA)
    }
    else stop("selectMethod(): mlist is not an environment or NULL :\n", 
        "** should no longer happen!", domain = NA)
}
