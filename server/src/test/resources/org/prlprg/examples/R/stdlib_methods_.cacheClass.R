#? stdlib
`.cacheClass` <- function (name, def, doSubclasses = FALSE, env) 
{
    if (!isFALSE(doSubclasses)) 
        .recacheSubclasses(def@className, def, env)
    if (!is.null(prev <- .classTable[[name]])) {
        newpkg <- def@package
        if (is(prev, "classRepresentation")) {
            if (identical(prev, def)) 
                return()
            pkg <- prev@package
            if (identical(pkg, newpkg)) {
                .cache_class(name, .extendsForS3(def))
                return(.classTable[[name]] <- def)
            }
            else if (.simpleDuplicateClass(def, prev)) 
                return()
            prev <- list(prev)
            names(prev) <- pkg
        }
        prev[[newpkg]] <- def
        def <- prev
        if (length(def) > 1L) 
            .duplicateClassesExist(TRUE)
    }
    .classTable[[name]] <- def
}
