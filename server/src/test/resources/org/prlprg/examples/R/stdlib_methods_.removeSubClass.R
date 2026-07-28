#? stdlib
`.removeSubClass` <- function (class, subclass, cdef) 
{
    if (is.null(cdef)) {
    }
    else {
        newdef <- .deleteSubClass(cdef, subclass)
        if (!is.null(newdef)) 
            .cacheClass(class, newdef, FALSE, cdef@package)
        pname <- cdef@package
        if (identical(pname, ".GlobalEnv")) {
            pos <- 1
        }
        else {
            pname <- paste0("package:", pname)
            pos <- match(pname, search(), 0)
        }
        if (pos) {
            penv <- as.environment(pname)
            cmeta <- classMetaName(class)
            if (!is.null(cdefp <- penv[[cmeta]])) {
                if (subclass %in% names(cdefp@subclasses)) {
                  newdef <- .deleteSubClass(cdefp, subclass)
                  if (!is.null(newdef)) {
                    if (bindingIsLocked(cmeta, penv)) 
                      .assignOverBinding(cmeta, newdef, penv, 
                        FALSE)
                    else penv[[cmeta]] <- newdef
                  }
                }
            }
        }
    }
    sig <- signature(from = subclass, to = class)
    if (existsMethod("coerce", sig)) 
        .removeCachedMethod("coerce", sig)
    if (existsMethod("coerce<-", sig)) 
        .removeCachedMethod("coerce<-", sig)
}
