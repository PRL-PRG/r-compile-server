#? stdlib
`.resetTable` <- function (table, n, signames) 
{
    primMethods <- .allowPrimitiveMethods(FALSE)
    on.exit(.allowPrimitiveMethods(primMethods))
    anyLabel <- rep("ANY", n)
    anyPkg <- rep("methods", n)
    seqN <- 1L:n
    labels <- names(table)
    for (what in labels) {
        method <- get(what, envir = table)
        if (is.primitive(method)) 
            newSig <- anyLabel
        else if (is(method, "MethodDefinition")) 
            newSig <- method@defined
        else if (is(method, "environment")) {
            newSig <- strsplit(what, "#", fixed = TRUE)[[1]]
            .resetTable(method, n, signames)
        }
        else stop(gettextf("invalid object in methods table (%s), expected a method, got an object of class %s", 
            sQuote(what), dQuote(class(method))), domain = NA)
        if (is(method, "MethodDefinition")) {
            pkgs <- packageSlot(newSig)
            newSig <- as(ifelse(seqN > length(newSig), anyLabel, 
                newSig), "signature")
            newSig@names <- signames
            newSig@package <- ifelse(seqN > length(pkgs), anyPkg, 
                pkgs)
            method@defined <- method@target <- newSig
            newLabel <- .sigLabel(newSig)
        }
        else newLabel <- .sigLabel(ifelse(seqN > length(newSig), 
            anyLabel, newSig))
        remove(list = what, envir = table)
        assign(newLabel, method, envir = table)
    }
    NULL
}
