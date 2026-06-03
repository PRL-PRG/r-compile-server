#? stdlib
`as` <- function (object, Class, strict = TRUE, ext = possibleExtends(thisClass, 
    Class)) 
{
    thisClass <- .class1(object)
    if (.identC(thisClass, Class) || .identC(Class, "ANY")) 
        return(object)
    where <- .classEnv(thisClass, mustFind = FALSE)
    coerceFun <- getGeneric("coerce", where = where)
    if (is.null(coerceFun)) 
        coerceFun <- coerce
    coerceMethods <- .getMethodsTable(coerceFun, environment(coerceFun), 
        inherited = TRUE)
    asMethod <- .quickCoerceSelect(thisClass, Class, coerceFun, 
        coerceMethods, where)
    if (is.null(asMethod)) {
        sig <- c(from = thisClass, to = Class)
        asMethod <- selectMethod("coerce", sig, optional = TRUE, 
            useInherited = FALSE, fdef = coerceFun, mlist = getMethodsForDispatch(coerceFun))
        if (is.null(asMethod)) {
            canCache <- TRUE
            inherited <- FALSE
            if (is(object, Class)) {
                ClassDef <- getClassDef(Class, where)
                if (isFALSE(ext)) 
                  stop(sprintf("internal problem in as(): %s is(object, \"%s\") is TRUE, but the metadata asserts that the 'is' relation is FALSE", 
                    dQuote(thisClass), Class), domain = NA)
                else if (isTRUE(ext)) 
                  asMethod <- .makeAsMethod(quote(from), TRUE, 
                    Class, ClassDef, where)
                else {
                  test <- ext@test
                  asMethod <- .makeAsMethod(ext@coerce, ext@simple, 
                    Class, ClassDef, where)
                  canCache <- (!is.function(test)) || isTRUE(body(test))
                }
            }
            if (is.null(asMethod) && extends(Class, thisClass)) {
                ClassDef <- getClassDef(Class, where)
                asMethod <- .asFromReplace(thisClass, Class, 
                  ClassDef, where)
            }
            if (is.null(asMethod)) {
                asMethod <- selectMethod("coerce", sig, optional = TRUE, 
                  c(from = TRUE, to = FALSE), fdef = coerceFun, 
                  mlist = coerceMethods)
                inherited <- TRUE
            }
            else if (canCache) 
                asMethod <- .asCoerceMethod(asMethod, thisClass, 
                  ClassDef, FALSE, where)
            if (is.null(asMethod)) 
                stop(gettextf("no method or default for coercing %s to %s", 
                  dQuote(thisClass), dQuote(Class)), domain = NA)
            else if (canCache) {
                cacheMethod("coerce", sig, asMethod, fdef = coerceFun, 
                  inherited = inherited)
            }
        }
    }
    if (strict) 
        asMethod(object)
    else asMethod(object, strict = FALSE)
}

# Examples

## Show all the existing methods for as()
showMethods("coerce")


