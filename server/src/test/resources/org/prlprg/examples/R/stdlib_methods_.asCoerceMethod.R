#? stdlib
`.asCoerceMethod` <- function (def, thisClass, ClassDef, replace, where) 
{
    fdef <- if (replace) 
        quote(function(from, to = TO, value) NULL)
    else quote(function(from, to = TO, strict = TRUE) NULL)
    fdef[[2L]]$to <- ClassDef@className
    fdef <- eval(fdef)
    body(fdef, environment(def)) <- body(def)
    attr(fdef, "srcref") <- attr(def, "srcref")
    sig <- new("signature")
    sig@.Data <- c(thisClass, ClassDef@className)
    sig@names <- c("from", "to")
    thisPackage <- packageSlot(thisClass)
    sig@package <- if (is.null(thisPackage)) 
        c(getPackageName(where, FALSE), ClassDef@package)
    else c(thisPackage, ClassDef@package)
    value <- new("MethodDefinition")
    value@.Data <- fdef
    value@target <- sig
    value@defined <- sig
    value@generic <- structure(if (replace) 
        "coerce<-"
    else "coerce", package = "methods")
    value
}
