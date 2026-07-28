#? stdlib
`getMethodsAndAccessors` <- function (Class) 
{
    def <- getClass(Class)
    if (!is(def, "refClassRepresentation")) 
        stop(gettextf("%s is not a reference class", dQuote(def@className)))
    ff <- def@fieldPrototypes
    accs <- vapply(ff, function(what) is(what, "activeBindingFunction") && 
        !is(what, "defaultBindingFunction"), NA)
    c(as.list(def@refMethods), as.list(ff)[accs])
}
