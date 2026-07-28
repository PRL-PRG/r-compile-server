#? stdlib
`.hasThisSubclass` <- function (classDefs, supers, plabel) 
{
    for (i in seq_along(plabel)) {
        pkg <- classDefs[[i]]@package
        cl <- classDefs[[i]]@className
        si <- supers[[i]]
        pki <- plabel[[i]]
        if (identical(si, "ANY") || (identical(cl, si) && identical(pkg, 
            pki))) 
            next
        cli <- getClassDef(si, package = pki)
        if (is.null(cli)) 
            return(FALSE)
        sub <- cli@subclasses[[cl]]
        if (is.null(sub) || !identical(pkg, sub@package)) 
            return(FALSE)
    }
    TRUE
}
