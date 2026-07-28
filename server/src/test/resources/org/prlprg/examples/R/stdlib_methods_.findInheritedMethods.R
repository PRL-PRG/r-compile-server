#? stdlib
`.findInheritedMethods` <- function (classes, fdef, mtable = NULL, table = get(".MTable", 
    envir = environment(fdef)), excluded = NULL, useInherited, 
    simpleOnly = .simpleInheritanceGeneric(fdef), verbose = FALSE, 
    doCache = is.environment(mtable), where = environment(fdef)) 
{
    primMethods <- .allowPrimitiveMethods(FALSE)
    on.exit(.allowPrimitiveMethods(primMethods))
    if (!is.environment(table)) {
        if (is(fdef, "standardGeneric")) 
            stop(gettextf("invalid or unset methods table in generic function %s", 
                sQuote(fdef@generic)), domain = NA)
        else stop("trying to find a methods table in a non-generic function")
    }
    hasGroup <- length(fdef@group) > 0L
    if (hasGroup) 
        groupGenerics <- .getAllGroups(list(fdef))
    doExcluded <- length(excluded) > 0L
    if (verbose) {
        plist <- function(x) paste(x, collapse = ", ")
        cat(" .findInheritedMethods(): (hasGroup, doCache, doExcluded)= (", 
            plist(c("f", "T")[1 + c(hasGroup, doCache, doExcluded)]), 
            ")\n", if (hasGroup) 
                paste0(" Group generics: ", plist(vapply(groupGenerics, 
                  slot, character(1), "generic")), "\n"), sep = "")
    }
    nargs <- length(classes)
    if (!missing(useInherited) && length(useInherited) < nargs) 
        useInherited <- rep(useInherited, length.out = nargs)
    if (hasGroup && !doExcluded) {
        label <- .sigLabel(classes)
        direct <- .getGroupMethods(label, groupGenerics, FALSE)
        if (length(direct)) {
            if (doCache) 
                assign(label, direct[[1L]], envir = mtable)
            return(direct)
        }
    }
    cl1 <- classes[[1L]]
    def <- getClass(cl1, where = where, .Force = TRUE)
    labels <- if (missing(useInherited) || useInherited[[1L]]) 
        c(cl1, .eligibleSuperClasses(def@contains, simpleOnly), 
            "ANY")
    else cl1
    supersList <- list(labels)
    classDefs <- vector("list", nargs)
    classDefs[[1L]] <- def
    if (nargs > 1) {
        for (i in 2:nargs) {
            cc <- classDefs[[i]] <- getClass(classes[[i]], where = where, 
                .Force = TRUE)
            allLabels <- if (missing(useInherited) || useInherited[[i]]) 
                c(cc@className, .eligibleSuperClasses(cc@contains, 
                  simpleOnly), "ANY")
            else cc@className
            labels <- outerLabels(labels, allLabels)
            supersList <- c(supersList, list(allLabels))
        }
    }
    labels <- labels[-1L]
    labels <- unique(labels)
    if (verbose) {
        cat(" .fI> length(unique(method labels)) = ", length(labels))
        if (verbose >= 2) {
            cat(";  labels = \n")
            print(labels)
        }
    }
    allMethods <- names(table)
    m <- match(labels, .fillSignatures(allMethods, length(classes)))
    found <- !is.na(m)
    methods <- mget(allMethods[m[found]], table)
    if (verbose) 
        cat(" >> found: ", length(methods), "\n")
    if (hasGroup) {
        groupmethods <- .getGroupMethods(labels, groupGenerics, 
            found)
        fromGroup <- c(rep(FALSE, length(methods)), rep(TRUE, 
            length(groupmethods)))
        if (verbose) 
            cat(" .fI> #{additional group methods}:", length(groupmethods), 
                "\n")
        methods <- c(methods, groupmethods)
    }
    else fromGroup <- rep(FALSE, length(methods))
    if (.duplicateClassesExist()) {
        found <- integer()
        nm <- names(methods)
        for (i in seq_along(methods)) {
            m <- methods[[i]]
            if (is.environment(m)) {
                methods[[i]] <- .checkDuplicateMethodClasses(classDefs, 
                  m, nm[[i]])
                found <- c(found, i)
            }
        }
        if (length(found)) 
            methods <- unlist(methods, recursive = FALSE)
        if (!is.list(methods)) 
            methods <- list(methods)
    }
    if (doExcluded) 
        methods <- methods[is.na(match(names(methods), as.character(excluded)))]
    if (length(methods) > 1L) {
        defaultLabel <- paste(rep.int("ANY", nargs), collapse = "#")
        i <- match(defaultLabel, names(methods), 0L)
        if (i > 0L) {
            methods <- methods[-i]
            fromGroup <- fromGroup[-i]
        }
    }
    if (length(methods) > 1L) {
        if (verbose) 
            cat(" .fI> length(methods) = ", length(methods), 
                " --> ambiguity\n")
        select <- .getBestMethods(methods, supersList, fromGroup, 
            verbose = verbose)
        if (length(select) > 1L) {
            if (verbose) 
                cat(" .fI> found", length(select), " best methods\n")
            condAction <- getOption("ambiguousMethodSelection")
            if (is.null(condAction)) 
                condAction <- .ambiguousMethodMessage
            else if (!is.function(condAction)) 
                stop(gettextf("the \"ambiguousMethodSelection\" option should be a function to be called as the condition action; got an object of class %s", 
                  dQuote(class(condAction))), domain = NA)
            select <- withCallingHandlers(.disambiguateMethods(classes, 
                select, fdef@generic, methods, supersList, fromGroup, 
                classDefs, verbose), ambiguousMethodSelection = condAction)
        }
        methods <- methods[select]
    }
    if (simpleOnly && length(methods) == 0L) {
        methods <- Recall(classes, fdef, mtable, table, excluded, 
            useInherited, simpleOnly, verbose, FALSE)
        if (length(methods) > 0L) 
            message(gettextf("No simply inherited methods found for function %s; using non-simple method", 
                sQuote(fdef@generic)), domain = NA)
    }
    if (length(methods)) {
        tlabel <- .sigLabel(classes)
        m <- methods[[1L]]
        if (is(m, "MethodDefinition")) {
            m@target <- .newSignature(classes, fdef@signature)
            coerce <- .inheritedArgsExpression(m@target, m@defined, 
                body(m))
            if (!is.null(coerce)) 
                body(m) <- coerce
            methods[[1L]] <- m
        }
        if (doCache) {
            if (verbose) 
                cat(" .fI> caching newly found methods ..\n")
            assign(tlabel, m, envir = mtable)
        }
    }
    methods
}
