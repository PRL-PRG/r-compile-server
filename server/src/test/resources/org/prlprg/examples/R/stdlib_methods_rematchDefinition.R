#? stdlib
`rematchDefinition` <- function (definition, generic, mnames, fnames, signature) 
{
    added <- anyNA(match(mnames, fnames))
    keepsDots <- !is.na(match("...", mnames))
    if (!added && keepsDots) {
        formals(definition) <- formals(generic)
        return(definition)
    }
    dotsPos <- match("...", fnames)
    if (added && is.na(dotsPos)) 
        stop(gettextf("methods can add arguments to the generic %s only if '...' is an argument to the generic", 
            sQuote(generic@generic)), call. = TRUE)
    useNames <- (useNm <- !is.na(imf <- match(fnames, mnames))) | 
        fnames == "..."
    if (is.unsorted(imf[useNm])) 
        stop(.renderSignature(generic@generic, signature), "formal arguments in method and generic do not appear in the same order", 
            call. = FALSE)
    clArgs <- fnames[useNames]
    if ((keepsDots || added) && dotsPos < length(fnames)) {
        ntrail <- length(fnames) - dotsPos
        trailingArgs <- fnames[seq.int(to = length(fnames), length.out = ntrail)]
        if (!identical(mnames[seq.int(to = length(mnames), length.out = ntrail)], 
            trailingArgs)) 
            stop(gettextf("%s arguments (%s) after %s in the generic must appear in the method, in the same place at the end of the argument list", 
                .renderSignature(generic@generic, signature), 
                paste(sQuote(trailingArgs), collapse = ", "), 
                sQuote("...")), call. = FALSE, domain = NA)
        clNames <- character(length(clArgs))
        clNames[seq.int(to = length(clNames), length.out = ntrail)] <- trailingArgs
    }
    else clNames <- NULL
    if ((iMi <- match("missing", signature, nomatch = 0L)) && 
        length(iNm <- which(useNm)) && any(i <- (iMi <= iNm & 
        iNm <= if (is.na(dotsPos)) length(fnames) else dotsPos - 
            1L))) {
        if (is.null(clNames)) 
            clNames <- character(length(clArgs))
        im <- match(fnames[iNm][i], clArgs)
        clNames[im] <- clArgs[im]
    }
    if (!is.null(clNames)) 
        names(clArgs) <- clNames
    newCall <- as.call(lapply(c(".local", clArgs), as.name))
    newBody <- substitute({
        .local <- DEF
        NEWCALL
    }, list(DEF = definition, NEWCALL = newCall))
    generic <- .copyMethodDefaults(generic, definition)
    body(generic, envir = environment(definition)) <- newBody
    generic
}
