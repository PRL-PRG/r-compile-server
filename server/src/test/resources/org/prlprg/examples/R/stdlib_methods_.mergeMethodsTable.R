#? stdlib
`.mergeMethodsTable` <- function (generic, table, newtable, add = TRUE) 
{
    fenv <- environment(generic)
    if (!exists(".SigLength", envir = fenv, inherits = FALSE)) 
        .setupMethodsTables(generic)
    allTable <- if (!add) 
        get(".AllMTable", envir = fenv)
    n <- get(".SigLength", envir = fenv)
    anySig <- rep("ANY", n)
    newMethods <- names(newtable)
    for (what in newMethods) {
        obj <- newtable[[what]]
        if (is.primitive(obj)) 
            sig <- anySig
        else if (is(obj, "MethodDefinition")) 
            sig <- obj@defined
        else if (is.environment(obj)) {
            objsWhat <- as.list(obj, all.names = TRUE, sorted = TRUE)
            if (length(objsWhat) == 0) 
                next
            isDef <- vapply(objsWhat, is, logical(1L), "MethodDefinition")
            if (any(isDef)) {
                obj <- objsWhat[[utils::tail(which(isDef), 1L)]]
                sig <- obj@defined
            }
            else {
                sig <- anySig
            }
        }
        else stop(gettextf("invalid object in meta table of methods for %s, label %s, had class %s", 
            sQuote(generic@generic), sQuote(what), dQuote(class(obj))), 
            domain = NA)
        ns <- length(sig)
        if (ns == n) {
        }
        else {
            if (ns < n) {
                nadd <- n - ns
                sigPackage <- packageSlot(sig)
                if (length(sigPackage) < ns) 
                  sigPackage <- c(sigPackage, rep("", ns - length(sigPackage)))
                sig <- .simpleSignature(c(sig, rep("ANY", nadd)), 
                  names = generic@signature[1:n], packages = c(sigPackage, 
                    rep("methods", nadd)))
                obj <- .xpdSignature(obj, sig, n - ns)
                what <- .sigLabel(sig)
                ns <- n
            }
            else if (add) {
                signames <- generic@signature
                length(signames) <- ns
                .resetTable(table, ns, signames)
                fenv[[".SigLength"]] <- ns
                n <- ns
            }
        }
        if (add) {
            if (exists(what, envir = table, inherits = FALSE)) {
                obj <- .newOrMultipleMethod(obj, what, table)
                if (is.null(allTable)) 
                  allTable <- get(".AllMTable", envir = fenv)
                allTable[[what]] <- obj
            }
            table[[what]] <- obj
        }
        else if (exists(what, envir = table, inherits = FALSE) && 
            !all(obj@defined == "ANY")) {
            remove(list = what, envir = allTable)
            remove(list = what, envir = table)
        }
    }
    NULL
}
