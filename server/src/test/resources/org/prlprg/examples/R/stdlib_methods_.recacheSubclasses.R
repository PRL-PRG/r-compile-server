#? stdlib
`.recacheSubclasses` <- function (class, def, env) 
{
    subs <- def@subclasses
    subNames <- names(subs)
    for (i in seq_along(subs)) {
        what <- subNames[[i]]
        subDef <- getClassDef(what, package = packageSlot(subs[[i]]))
        if (is.null(subDef)) 
            subDef <- getClassDef(what, env)
        if (is.null(subDef)) 
            warning(gettextf("undefined subclass %s of class %s; definition not updated", 
                .dQ(what), .dQ(def@className)))
        else if (is.na(match(what, names(subDef@contains)))) {
            cntns <- subDef@contains
            cntns[[class]] <- subs[[i]]
            cntns <- cntns[sort.list(vapply(cntns, function(x) x@distance, 
                1))]
            subDef@contains <- cntns
            .cacheClass(what, subDef, FALSE, env)
        }
    }
    NULL
}
