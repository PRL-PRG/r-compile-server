#? stdlib
`testInheritedMethods` <- function (f, signatures, test = TRUE, virtual = FALSE, groupMethods = TRUE, 
    where = .GlobalEnv) 
{
    .relevantClasses <- function(classes, excludeVirtual, where, 
        doinheritance) {
        classDefs <- lapply(classes, getClassDef, where)
        undefs <- vapply(classDefs, is.null, NA)
        if (any(undefs)) {
            .undefClasses <<- unique(c(.undefClasses, classes[undefs]))
            classes <- classes[!undefs]
            classDefs <- classDefs[!undefs]
        }
        if (doinheritance) {
            allSubs <- lapply(classDefs, function(what) names(what@subclasses))
            allSubs <- unique(unlist(allSubs))
            pattern <- sapply(allSubs, .matchSubsPattern, classes, 
                excludeVirtual)
            if (excludeVirtual) {
                excl <- nzchar(pattern)
                pattern <- pattern[excl]
                allSubs <- allSubs[excl]
            }
            if (length(allSubs) > 0) 
                allSubs <- sapply(split(allSubs, pattern), `[[`, 
                  1)
            else allSubs <- character()
        }
        else allSubs <- character()
        iAny <- match("ANY", classes, 0L)
        if (iAny > 0L) {
            classes[[iAny]] <- ".Other"
            classDefs[[iAny]] <- getClassDef(".Other")
        }
        if (excludeVirtual) 
            classes <- classes[vapply(classDefs, function(def) isFALSE(def@virtual), 
                NA)]
        unique(c(classes, allSubs))
    }
    if (!is(f, "genericFunction")) 
        f <- getGeneric(f)
    fname <- f@generic
    if (missing(signatures)) {
        mdefs <- findMethods(f)
        mnames <- names(mdefs)
        sigs <- findMethodSignatures(methods = mdefs)
        if (groupMethods) {
            groups <- getGroup(f, recursive = TRUE)
            for (group in groups) {
                fg <- getGeneric(group)
                mg <- findMethods(fg)
                sigsg <- findMethodSignatures(methods = mg)
                newSigs <- is.na(match(names(mg), mnames))
                sigs <- rbind(sigs, sigsg[newSigs, ])
                mnames <- c(mnames, names(mg)[newSigs])
            }
        }
        if (length(sigs) == 0) 
            return(new("MethodSelectionReport", generic = fname))
        ok <- if (fname %in% c("coerce", "coerce<-")) 
            match(colnames(sigs), "from", 0L) > 0L
        else rep.int(TRUE, ncol(sigs))
        for (j in seq_len(ncol(sigs))) {
            classesj <- unique(sigs[, j])
            .undefClasses <- character()
            subclasses <- .relevantClasses(classesj, !virtual, 
                where, ok[[j]])
            nj <- length(subclasses)
            if (j > 1) {
                subclasses <- rep(subclasses, rep.int(ncomb, 
                  nj))
                ncomb <- ncomb * nj
                sigLabels <- paste(rep(sigLabels, times = nj), 
                  subclasses, sep = "#")
            }
            else {
                sigLabels <- subclasses
                ncomb <- nj
            }
            if (length(.undefClasses)) {
                warning(gettextf("undefined classes (%s) will be ignored for argument '%s'", 
                  paste0("\"", unique(.undefClasses), "\"", collapse = ", "), 
                  colnames(sigs)[[j]]), domain = NA)
                .undefClasses <- character()
            }
        }
        signatures <- strsplit(sigLabels, "#", fixed = TRUE)
    }
    else if (is(signatures, "matrix") && typeof(signatures) == 
        "character" && ncol(signatures) <= length(f@signature)) {
        siglist <- vector("list", nrow(signatures))
        for (i in seq_len(nrow(signatures))) siglist[[i]] <- signatures[i, 
            ]
        signatures <- siglist
    }
    else stop("argument 'signatures' must be a character matrix whose rows are method signatures")
    ambig_target <- character()
    ambig_candidates <- list()
    ambig_selected <- character()
    ambig_note <- character()
    if (test) {
        warninghandler <- function(cond) {
            ambig_target <<- c(ambig_target, attr(cond, "target"))
            ambig_candidates <<- c(ambig_candidates, list(attr(cond, 
                "candidates")))
            ambig_selected <<- c(ambig_selected, attr(cond, "selected"))
            ambig_note <<- c(ambig_note, attr(cond, "notes"))
        }
        ambigOpt <- options(ambiguousMethodSelection = warninghandler)
        on.exit(options(ambigOpt))
        doSelect <- function(sig) {
            x <- selectMethod(f = f, sig, optional = TRUE)
            if (is(x, "MethodDefinition")) {
                nsig <- x@defined
                if (length(nsig) < length(sig)) 
                  c(nsig, rep("ANY", length(sig) - length(nsig)))
                else nsig
            }
            else if (is.null(x)) 
                rep_len("<NONE>", length(sig))
            else rep_len("ANY", length(sig))
        }
        signatures <- lapply(signatures, doSelect)
    }
    signatures <- sapply(signatures, paste0, collapse = "#")
    names(signatures) <- sigLabels
    new("MethodSelectionReport", generic = fname, allSelections = signatures, 
        target = ambig_target, selected = ambig_selected, candidates = ambig_candidates, 
        note = ambig_note)
}

# Examples
## if no other attached packages have methods for `+` or its group
## generic functions, this returns a 16 by 2 matrix of selection
## patterns (in R 2.9.0)
testInheritedMethods("+")

