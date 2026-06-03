#? stdlib
`assignMethodsMetaData` <- function (f, value, fdef, where) 
{
    where <- as.environment(where)
    if (is(value, "MethodsList")) {
        .MlistDefunct()
        mname <- methodsPackageMetaName("M", fdef@generic, fdef@package)
        if (exists(mname, envir = where, inherits = FALSE) && 
            bindingIsLocked(mname, where)) {
        }
        else assign(mname, value, where)
    }
    if (dispatchIsInternal(fdef)) 
        setPrimitiveMethods(f, fdef@default, "reset", fdef, NULL)
    if (is(fdef, "groupGenericFunction")) 
        cacheGenericsMetaData(f, fdef, where = where, package = fdef@package)
}
