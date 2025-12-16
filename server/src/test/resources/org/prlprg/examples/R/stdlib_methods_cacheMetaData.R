#? stdlib
`cacheMetaData` <- function (where, attach = TRUE, searchWhere = as.environment(where), 
    doCheck = TRUE) 
{
    pkg <- getPackageName(where)
    classes <- getClasses(where)
    lev <- 0L
    if (attach) {
        msg <- Sys.getenv("_R_TRACE_LOADNAMESPACE_", "")
        if (nzchar(msg)) {
            if (pkg %in% c("base", "tools", "utils", "grDevices", 
                "graphics", "stats", "datasets", "methods", "grid", 
                "splines", "stats4", "tcltk", "compiler", "parallel")) 
                lev <- 0L
            else {
                lev <- as.integer(msg)
                if (is.na(lev)) 
                  lev <- 0L
            }
        }
        for (cl in classes) {
            if (lev > 2L) 
                message("--- caching class ", sQuote(cl))
            cldef <- get(classMetaName(cl), where)
            if (is(cldef, "classRepresentation")) 
                .cacheClass(cl, cldef, is(cldef, "ClassUnionRepresentation"), 
                  where)
            if (lev > 2L) 
                message("--- done caching class ", sQuote(cl))
        }
    }
    else {
        for (cl in classes) {
            cldef <- getClassDef(cl, searchWhere)
            if (is(cldef, "classRepresentation") && identical(cldef@package, 
                pkg)) {
                .uncacheClass(cl, cldef)
                .removeSuperclassBackRefs(cl, cldef, searchWhere)
                if (is(cldef, "ClassUnionRepresentation")) {
                  subclasses <- names(cldef@subclasses)
                  for (subclass in subclasses) .removeSuperClass(subclass, 
                    cl)
                }
            }
        }
    }
    generics <- .getGenerics(where)
    packages <- attr(generics, "package")
    if (length(packages) < length(generics)) 
        packages <- rep(packages, length.out = length(generics))
    if (attach && exists(".requireCachedGenerics", where, inherits = FALSE)) {
        others <- get(".requireCachedGenerics", where)
        generics <- c(generics, others)
        packages <- c(packages, attr(others, "package"))
    }
    dups <- duplicated(generics) & duplicated(packages)
    generics <- generics[!dups]
    for (i in seq_along(generics)) {
        f <- generics[[i]]
        fpkg <- packages[[i]]
        .tr <- attach && (lev > 2L || lev == -5L)
        if (!identical(fpkg, pkg) && doCheck) {
            if (.tr) 
                message("--- getting generic ", sQuote(f), " (and methods)")
            if (attach) {
                env <- as.environment(where)
                if (exists(f, envir = env, inherits = FALSE)) {
                  def <- get(f, envir = env)
                  fdef <- .genericOrImplicit(f, fpkg, env)
                  if (is.function(def)) {
                    if (identical(environment(def), environment(fdef))) 
                      next
                    else if (is(fdef, "genericFunction")) {
                      .assignOverBinding(f, fdef, env, FALSE)
                    }
                  }
                }
                else fdef <- getGeneric(f, FALSE, searchWhere, 
                  fpkg)
            }
            else fdef <- getGeneric(f, FALSE, searchWhere, fpkg)
        }
        else fdef <- getGeneric(f, FALSE, searchWhere, fpkg)
        if (!is(fdef, "genericFunction")) 
            next
        if (attach) {
            .cacheGeneric(f, fdef)
        }
        else .uncacheGeneric(f, fdef)
        methods <- .updateMethodsInTable(fdef, where, attach)
        cacheGenericsMetaData(f, fdef, attach, where, fdef@package, 
            methods)
        if (.tr) 
            message("--- done getting generic ", sQuote(f))
    }
    .doLoadActions(where, attach)
    invisible(NULL)
}
