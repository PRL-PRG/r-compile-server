#? stdlib
`as<-` <- function (object, Class, value) 
{
    thisClass <- .class1(object)
    if (!.identC(.class1(value), Class)) 
        value <- as(value, Class, strict = FALSE)
    where <- .classEnv(class(object))
    coerceFun <- getGeneric("coerce<-", where = where)
    if (is.null(coerceFun)) 
        coerceFun <- `coerce<-`
    coerceMethods <- getMethodsForDispatch(coerceFun)
    asMethod <- .quickCoerceSelect(thisClass, Class, coerceFun, 
        coerceMethods, where)
    if (is.null(asMethod)) {
        sig <- c(from = thisClass, to = Class)
        canCache <- TRUE
        inherited <- FALSE
        asMethod <- selectMethod("coerce<-", sig, TRUE, FALSE, 
            fdef = coerceFun, mlist = coerceMethods)
        if (is.null(asMethod)) {
            if (is(object, Class)) {
                asMethod <- possibleExtends(thisClass, Class)
                if (isTRUE(asMethod)) {
                  class(value) <- class(object)
                  return(value)
                }
                else {
                  test <- asMethod@test
                  asMethod <- asMethod@replace
                  canCache <- (!is.function(test)) || isTRUE(body(test))
                  if (canCache) {
                    ClassDef <- getClassDef(Class, where)
                    asMethod <- .asCoerceMethod(asMethod, thisClass, 
                      ClassDef, TRUE, where)
                  }
                }
            }
            else {
                asMethod <- selectMethod("coerce<-", sig, TRUE, 
                  c(from = TRUE, to = FALSE), doCache = TRUE)
                inherited <- TRUE
            }
        }
        if (canCache && !is.null(asMethod)) 
            cacheMethod("coerce<-", sig, asMethod, fdef = coerceFun, 
                inherited = inherited)
    }
    if (is.null(asMethod)) 
        stop(gettextf("no method or default for as() replacement of %s with Class=\"%s\"", 
            dQuote(thisClass), Class), domain = NA)
    asMethod(object, Class, value)
}
