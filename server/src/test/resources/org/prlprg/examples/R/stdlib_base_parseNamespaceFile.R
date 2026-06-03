#? stdlib
`parseNamespaceFile` <- function (package, package.lib, mustExist = TRUE) 
{
    namespaceFilePath <- function(package, package.lib) file.path(package.lib, 
        package, "NAMESPACE")
    nativeRoutineMap <- function(useRegistration, symbolNames, 
        fixes) {
        proto <- list(useRegistration = FALSE, symbolNames = character())
        class(proto) <- "NativeRoutineMap"
        mergeNativeRoutineMaps(proto, useRegistration, symbolNames, 
            fixes)
    }
    mergeNativeRoutineMaps <- function(map, useRegistration, 
        symbolNames, fixes) {
        if (!useRegistration) 
            names(symbolNames) <- paste0(fixes[1L], names(symbolNames), 
                fixes[2L])
        else map$registrationFixes <- fixes
        map$useRegistration <- map$useRegistration || useRegistration
        map$symbolNames <- c(map$symbolNames, symbolNames)
        map
    }
    nsFile <- namespaceFilePath(package, package.lib)
    descfile <- file.path(package.lib, package, "DESCRIPTION")
    enc <- if (file.exists(descfile)) {
        read.dcf(file = descfile, "Encoding")[1L]
    }
    else NA_character_
    if (file.exists(nsFile)) 
        directives <- if (!is.na(enc) && !Sys.getlocale("LC_CTYPE") %in% 
            c("C", "POSIX")) {
            lines <- readLines(nsFile, warn = FALSE)
            tmp <- iconv(lines, from = enc, to = "")
            bad <- which(is.na(tmp))
            comm <- grep("^[[:space:]]*#", lines[bad], invert = TRUE, 
                useBytes = TRUE)
            if (length(bad[comm])) 
                stop("unable to re-encode some lines in NAMESPACE file")
            tmp <- iconv(lines, from = enc, to = "", sub = "byte")
            con <- textConnection(tmp)
            on.exit(close(con))
            parse(con, keep.source = FALSE, srcfile = NULL)
        }
        else parse(nsFile, keep.source = FALSE, srcfile = NULL)
    else if (mustExist) 
        stop(gettextf("package %s has no 'NAMESPACE' file", sQuote(package)), 
            domain = NA)
    else directives <- NULL
    exports <- character()
    exportPatterns <- character()
    exportClasses <- character()
    exportClassPatterns <- character()
    exportMethods <- character()
    imports <- list()
    importMethods <- list()
    importClasses <- list()
    dynlibs <- character()
    nS3methods <- 1000L
    S3methods <- matrix(NA_character_, nS3methods, 4L)
    nativeRoutines <- list()
    nS3 <- 0L
    parseDirective <- function(e) {
        asChar <- function(cc) {
            r <- as.character(cc)
            if (any(r == "")) 
                stop(gettextf("empty name in directive '%s' in 'NAMESPACE' file", 
                  as.character(e[[1L]])), domain = NA)
            r
        }
        evalToChar <- function(cc) {
            vars <- all.vars(cc)
            names(vars) <- vars
            as.character(eval(eval(call("substitute", cc, as.list(vars))), 
                .GlobalEnv))
        }
        switch(as.character(e[[1L]]), `if` = if (eval(e[[2L]], 
            .GlobalEnv)) parseDirective(e[[3L]]) else if (length(e) == 
            4L) parseDirective(e[[4L]]), `{` = for (ee in as.list(e[-1L])) parseDirective(ee), 
            `=` = , `<-` = {
                parseDirective(e[[3L]])
                if (as.character(e[[3L]][[1L]]) == "useDynLib") names(dynlibs)[length(dynlibs)] <<- asChar(e[[2L]])
            }, export = {
                exp <- e[-1L]
                exp <- structure(asChar(exp), names = names(exp))
                exports <<- c(exports, exp)
            }, exportPattern = {
                pat <- asChar(e[-1L])
                exportPatterns <<- c(pat, exportPatterns)
            }, exportClassPattern = {
                pat <- asChar(e[-1L])
                exportClassPatterns <<- c(pat, exportClassPatterns)
            }, exportClass = , exportClasses = {
                exportClasses <<- c(asChar(e[-1L]), exportClasses)
            }, exportMethods = {
                exportMethods <<- c(asChar(e[-1L]), exportMethods)
            }, import = {
                except <- e$except
                e$except <- NULL
                pkgs <- as.list(asChar(e[-1L]))
                if (!is.null(except)) {
                  pkgs <- lapply(pkgs, list, except = evalToChar(except))
                }
                imports <<- c(imports, pkgs)
            }, importFrom = {
                imp <- e[-1L]
                ivars <- imp[-1L]
                inames <- names(ivars)
                imp <- list(asChar(imp[1L]), structure(asChar(ivars), 
                  names = inames))
                imports <<- c(imports, list(imp))
            }, importClassFrom = , importClassesFrom = {
                imp <- asChar(e[-1L])
                pkg <- imp[[1L]]
                impClasses <- imp[-1L]
                imp <- list(asChar(pkg), asChar(impClasses))
                importClasses <<- c(importClasses, list(imp))
            }, importMethodsFrom = {
                imp <- asChar(e[-1L])
                pkg <- imp[[1L]]
                impMethods <- imp[-1L]
                imp <- list(asChar(pkg), asChar(impMethods))
                importMethods <<- c(importMethods, list(imp))
            }, useDynLib = {
                dyl <- as.character(e[2L])
                dynlibs <<- structure(c(dynlibs, dyl), names = c(names(dynlibs), 
                  ifelse(!is.null(names(e)) && nzchar(names(e)[2L]), 
                    names(e)[2L], "")))
                if (length(e) > 2L) {
                  symNames <- as.character(e[-c(1L, 2L)])
                  names(symNames) <- names(e[-c(1, 2)])
                  if (length(names(symNames)) == 0L) names(symNames) <- symNames else if (any(w <- names(symNames) == 
                    "")) {
                    names(symNames)[w] <- symNames[w]
                  }
                  dup <- duplicated(names(symNames))
                  if (any(dup)) warning(gettextf("duplicate symbol names %s in useDynLib(\"%s\")", 
                    paste(sQuote(names(symNames)[dup]), collapse = ", "), 
                    dyl), domain = NA, call. = FALSE)
                  symNames <- symNames[!dup]
                  fixes <- c("", "")
                  idx <- match(".fixes", names(symNames))
                  if (!is.na(idx)) {
                    if (nzchar(symNames[idx])) {
                      e <- parse(text = symNames[idx], keep.source = FALSE, 
                        srcfile = NULL)[[1L]]
                      if (is.call(e)) val <- eval(e, .GlobalEnv) else val <- as.character(e)
                      if (length(val)) fixes[seq_along(val)] <- val
                    }
                    symNames <- symNames[-idx]
                  }
                  useRegistration <- FALSE
                  idx <- match(".registration", names(symNames))
                  if (!is.na(idx)) {
                    useRegistration <- as.logical(symNames[idx])
                    symNames <- symNames[-idx]
                  }
                  nativeRoutines[[dyl]] <<- if (dyl %in% names(nativeRoutines)) mergeNativeRoutineMaps(nativeRoutines[[dyl]], 
                    useRegistration, symNames, fixes) else nativeRoutineMap(useRegistration, 
                    symNames, fixes)
                }
            }, S3method = {
                spec <- e[-1L]
                if (length(spec) != 2L && length(spec) != 3L) stop(gettextf("bad 'S3method' directive: %s", 
                  deparse(e)), call. = FALSE, domain = NA)
                nS3 <<- nS3 + 1L
                if (nS3 > nS3methods) {
                  old <- S3methods
                  nold <- nS3methods
                  nS3methods <<- nS3methods * 2L
                  new <- matrix(NA_character_, nS3methods, 4L)
                  ind <- seq_len(nold)
                  for (i in 1:4) new[ind, i] <- old[ind, i]
                  S3methods <<- new
                  rm(old, new)
                }
                if (is.call(gen <- spec[[1L]]) && identical(as.character(gen[[1L]]), 
                  "::")) {
                  pkg <- as.character(gen[[2L]])[1L]
                  gen <- as.character(gen[[3L]])[1L]
                  S3methods[nS3, c(seq_along(spec), 4L)] <<- c(gen, 
                    asChar(spec[-1L]), pkg)
                } else S3methods[nS3, seq_along(spec)] <<- asChar(spec)
            }, stop(gettextf("unknown namespace directive: %s", 
                deparse(e, nlines = 1L)), call. = FALSE, domain = NA))
    }
    for (e in directives) parseDirective(e)
    dynlibs <- dynlibs[!duplicated(dynlibs)]
    list(imports = imports, exports = exports, exportPatterns = unique(exportPatterns), 
        importClasses = importClasses, importMethods = importMethods, 
        exportClasses = unique(exportClasses), exportMethods = unique(exportMethods), 
        exportClassPatterns = unique(exportClassPatterns), dynlibs = dynlibs, 
        nativeRoutines = nativeRoutines, S3methods = unique(S3methods[seq_len(nS3), 
            , drop = FALSE]))
}
