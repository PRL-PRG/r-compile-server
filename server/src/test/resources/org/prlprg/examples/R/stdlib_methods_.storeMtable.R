#? stdlib
`.storeMtable` <- function (table, sig, method, i, add, fenv) 
{
    if (is.null(method)) 
        return(table)
    m <- list(ANY = method)
    classes <- names(m)
    for (j in seq_along(m)) {
        el <- m[[j]]
        sig[[i]] <- classes[[j]]
        if (is(el, "MethodDefinition") || is.primitive(el)) {
            if (add) 
                assign(.sigLabel(sig), el, envir = table)
            else remove(list = .sigLabel(sig), envir = table)
        }
        else if (is(el, "MethodsList")) {
            .MlistDefunct()
        }
        else stop(gettextf("invalid method element for signature %s at level %d (should be MethodDefinition or .Primitive, had class %s)", 
            sQuote(classes[[j]]), i, dQuote(class(el))), domain = NA)
    }
    table
}
