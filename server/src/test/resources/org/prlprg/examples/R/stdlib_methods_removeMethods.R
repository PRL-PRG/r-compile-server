#? stdlib
`removeMethods` <- function (f, where = topenv(parent.frame()), all = missing(where)) 
{
    fdef <- getGeneric(f, where = where)
    if (!is(fdef, "genericFunction")) {
        warning(gettextf("%s is not an S4 generic function in %s; methods not removed", 
            sQuote(f), sQuote(getPackageName(where))), domain = NA)
        return(FALSE)
    }
    methods <- getMethodsForDispatch(fdef)
    default <- getMethod(fdef, "ANY", optional = TRUE)
    fMetaName <- .TableMetaName(fdef@generic, fdef@package)
    oldMetaName <- methodsPackageMetaName("M", fdef@generic, 
        fdef@package)
    allWhere <- .findAll(fMetaName, where)
    if (!all) 
        allWhere <- allWhere[1L]
    value <- rep(TRUE, length(allWhere))
    cacheGenericsMetaData(f, fdef, FALSE, where)
    .uncacheGeneric(f, fdef)
    doGeneric <- TRUE
    for (i in seq_along(allWhere)) {
        db <- as.environment(allWhere[[i]])
        if (environmentIsLocked(db)) {
            warning(gettextf("cannot remove methods for %s in locked environment/package %s", 
                sQuote(f), sQuote(getPackageName(db))), domain = NA)
            value[[i]] <- FALSE
            next
        }
        if (exists(fMetaName, db, inherits = FALSE)) {
            theseMethods <- get(fMetaName, db)
            .mergeMethodsTable(fdef, methods, theseMethods, FALSE)
            rm(list = fMetaName, pos = db)
            if (exists(oldMetaName, db, inherits = FALSE)) 
                rm(list = oldMetaName, pos = db)
        }
    }
    all <- all && base::all(value)
    for (i in seq_along(allWhere)) {
        db <- as.environment(allWhere[[i]])
        if (doGeneric && isGeneric(f, db)) {
            if (all && is(default, "derivedDefaultMethod")) {
                default <- as(default, "function")
                rm(list = f, pos = db)
                if (!existsFunction(f, FALSE, db)) {
                  message(gettextf("Restoring default function definition of %s", 
                    sQuote(f)), domain = NA)
                  assign(f, default, db)
                }
            }
            else {
                resetGeneric(f, fdef, where = db, deflt = default)
            }
            doGeneric <- FALSE
        }
    }
    any(value)
}
