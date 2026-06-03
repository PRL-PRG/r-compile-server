#? stdlib
`matchSignature` <- function (signature, fun, where = baseenv()) 
{
    if (!is(fun, "genericFunction")) 
        stop(gettextf("trying to match a method signature to an object (of class %s) that is not a generic function", 
            dQuote(class(fun))), domain = NA)
    anames <- fun@signature
    if (length(signature) == 0L) 
        return(character())
    if (is(signature, "character")) {
        pkgs <- packageSlot(signature)
        if (is.null(pkgs)) 
            pkgs <- character(length(signature))
        else if (length(pkgs) != length(signature)) 
            stop("invalid 'package' slot or attribute, wrong length")
        sigClasses <- as.character(signature)
    }
    else if (is(signature, "list")) {
        sigClasses <- pkgs <- character(length(signature))
        for (i in seq_along(signature)) {
            cli <- signature[[i]]
            if (is(cli, "classRepresentation")) {
                sigClasses[[i]] <- cli@className
                pkgs[[i]] <- cli@package
            }
            else if (is(cli, "character") && length(cli) == 1) {
                sigClasses[[i]] <- cli
                pkgi <- packageSlot(cli)
                if (is.character(pkgi)) 
                  pkgs[[i]] <- pkgi
            }
            else stop(gettextf("invalid element in a list for \"signature\" argument; element %d is neither a class definition nor a class name", 
                i), domain = NA)
        }
    }
    else stop(gettextf("trying to match a method signature of class %s; expects a list or a character vector", 
        dQuote(class(signature))), domain = NA)
    if (!identical(where, baseenv())) {
        unknown <- !nzchar(pkgs)
        for (i in seq_along(sigClasses)[unknown]) {
            cli <- getClassDef(sigClasses[[i]], where)
            if (!is.null(cli)) {
                pkgs[[i]] <- cli@package
                unknown[[i]] <- FALSE
            }
        }
        if (any(unknown)) {
            unknown <- unique(sigClasses[unknown])
            MSG <- if (identical(as.vector(coerce@generic), "coerce") && 
                length(unknown) == 1) 
                message
            else function(...) warning(..., call. = FALSE)
            MSG(.renderSignature(fun@generic, signature), sprintf(ngettext(length(unknown), 
                "no definition for class %s", "no definition for classes %s"), 
                paste(dQuote(unknown), collapse = ", ")), domain = NA)
        }
    }
    signature <- as.list(signature)
    if (length(sigClasses) != length(signature)) 
        stop(gettextf("object to use as a method signature for function %s does not look like a legitimate signature (a vector of single class names): there were %d class names, but %d elements in the signature object", 
            sQuote(fun@generic), length(sigClasses), length(signature)), 
            domain = NA)
    if (length(signature) > length(anames)) 
        stop(gettextf("more elements in the method signature (%d) than in the generic signature (%d) for function %s", 
            length(signature), length(anames), sQuote(fun@generic)), 
            domain = NA)
    if (is.null(names(signature))) {
        which <- seq_along(signature)
    }
    else {
        sigList <- signature
        for (i in seq_along(sigList)) sigList[[i]] <- c(sigClasses[[i]], 
            pkgs[[i]])
        fcall <- do.call("call", c("fun", sigList))
        argmatches <- charmatch(names(sigList), anames)
        if (anyNA(argmatches)) 
            stop(gettextf("there are named arguments (%s) in the method signature that are missing from the generic signature, for function %s", 
                paste(sQuote(names(sigList)[is.na(argmatches)]), 
                  collapse = ", "), sQuote(fun@generic), domain = NA))
        ambig <- argmatches == 0L & names(sigList) != ""
        if (any(ambig)) 
            stop(gettextf("there are named arguments (%s) in the method signature that ambiguously match the generic signature, for function %s", 
                paste(sQuote(names(sigList)[ambig]), collapse = ", "), 
                sQuote(fun@generic), domain = NA))
        if (identical(anames, formalArgs(fun))) 
            smatch <- match.call(fun, fcall)
        else {
            fmatch <- fun
            ff <- as.list(anames)
            names(ff) <- anames
            formals(fmatch, envir = environment(fun)) <- ff
            smatch <- match.call(fmatch, fcall)
        }
        snames <- names(smatch)[-1L]
        which <- match(snames, anames)
        if (anyNA(which)) 
            stop(sprintf(ngettext(sum(is.na(which)), "in the method signature for function %s invalid argument name in the signature: %s", 
                "in the method signature for function %s invalid argument names in the signature: %s"), 
                sQuote(fun@generic), paste(snames[is.na(which)], 
                  collapse = ", ")), domain = NA)
        smatch <- smatch[-1]
        for (i in seq_along(smatch)) {
            eli <- smatch[[i]]
            sigClasses[[i]] <- eli[[1]]
            pkgs[[i]] <- eli[[2]]
        }
    }
    n <- length(anames)
    value <- rep("ANY", n)
    valueP <- rep("methods", n)
    names(value) <- anames
    value[which] <- sigClasses
    valueP[which] <- pkgs
    unspec <- value == "ANY"
    while (n > 1 && unspec[[n]]) n <- n - 1
    length(value) <- length(valueP) <- n
    attr(value, "package") <- valueP
    value
}
