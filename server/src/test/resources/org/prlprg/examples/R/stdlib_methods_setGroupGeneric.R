#? stdlib
`setGroupGeneric` <- function (name, def = NULL, group = list(), valueClass = character(), 
    knownMembers = list(), package = getPackageName(where), where = topenv(parent.frame())) 
{
    if (is.null(def)) {
        def <- getFunction(name, where = where)
        if (isGroup(name, fdef = def)) {
            if (nargs() == 1) {
                message(gettextf("Function %s is already a group generic; no change", 
                  sQuote(name)), domain = NA)
                return(name)
            }
        }
    }
    body(def, envir = environment(def)) <- substitute(stop(MSG, 
        domain = NA), list(MSG = gettextf("Function %s is a group generic; do not call it directly", 
        sQuote(name))))
    if (is.character(knownMembers)) 
        knownMembers <- as.list(knownMembers)
    setGeneric(name, def, group = group, valueClass = valueClass, 
        package = package, useAsDefault = FALSE, genericFunction = new("groupGenericFunction", 
            def, groupMembers = knownMembers), where = where)
    .MakeImplicitGroupMembers(name, knownMembers, where)
    name
}

# Examples


