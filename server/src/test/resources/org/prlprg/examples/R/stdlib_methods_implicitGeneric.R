#? stdlib
`implicitGeneric` <- function (name, where = topenv(parent.frame()), generic = getGeneric(name, 
    where = where)) 
{
    if (!nzchar(name)) 
        stop(gettextf("expected a non-empty character string for argument name"), 
            domain = NA)
    if (!missing(generic) && is(generic, "genericFunction") && 
        !.identC(name, generic@generic)) 
        stop(gettextf("generic function supplied was not created for %s", 
            sQuote(name)), domain = NA)
    createGeneric <- (missing(generic) || !is(generic, "genericFunction")) && 
        !isGeneric(name, where)
    if (createGeneric) {
        fdefault <- getFunction(name, where = where, mustFind = FALSE)
        if (is.null(fdefault)) 
            return(NULL)
        env <- environment(fdefault)
        fdefault <- .derivedDefaultMethod(fdefault)
        if (isBaseFun(fdefault)) {
            value <- genericForBasic(name)
            if (is.function(value)) {
                if (!missing(generic) && !identical(value, generic)) 
                  stop(gettextf("%s is a primitive function; its generic form cannot be redefined", 
                    sQuote(name)), domain = NA)
                generic <- value
                fdefault <- generic@default
            }
            package <- "base"
        }
        else package <- getPackageName(env)
        group <- .getImplicitGroup(name, if (identical(package, 
            "base")) 
            .methodsNamespace
        else environment(fdefault))
        if (missing(generic)) {
            generic <- .getImplicitGeneric(name, env, package)
            if (is.null(generic)) {
                generic <- makeGeneric(name, fdefault = fdefault, 
                  package = package, group = group)
                .cacheImplicitGeneric(name, generic)
            }
        }
        else {
            generic <- makeGeneric(name, generic, fdefault, package = package, 
                group = group)
            .cacheImplicitGeneric(name, generic)
        }
    }
    generic
}

# Examples

### How we would make the function with() into a generic:

## Since the second argument, 'expr' is used literally, we want
## with() to only have "data" in the signature.



implicitGeneric("with")

# (This implicit generic is stored in the 'methods' package.)

