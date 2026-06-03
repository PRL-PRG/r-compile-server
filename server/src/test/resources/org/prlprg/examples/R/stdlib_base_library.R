#? stdlib
`library` <- function (package, help, pos = 2, lib.loc = NULL, character.only = FALSE, 
    logical.return = FALSE, warn.conflicts, quietly = FALSE, 
    verbose = getOption("verbose"), mask.ok, exclude, include.only, 
    attach.required = missing(include.only)) 
{
    conf.ctrl <- getOption("conflicts.policy")
    if (is.character(conf.ctrl)) 
        conf.ctrl <- switch(conf.ctrl, strict = list(error = TRUE, 
            warn = FALSE), depends.ok = list(error = TRUE, generics.ok = TRUE, 
            can.mask = c("base", "methods", "utils", "grDevices", 
                "graphics", "stats"), depends.ok = TRUE), warning(gettextf("unknown conflict policy: %s", 
            sQuote(conf.ctrl)), call. = FALSE, domain = NA))
    if (!is.list(conf.ctrl)) 
        conf.ctrl <- NULL
    stopOnConflict <- isTRUE(conf.ctrl$error)
    if (missing(warn.conflicts)) 
        warn.conflicts <- !isFALSE(conf.ctrl$warn)
    if (!missing(include.only) && !missing(exclude)) 
        stop("only one of 'include.only' and 'exclude' can be used", 
            call. = FALSE)
    testRversion <- function(pkgInfo, pkgname, pkgpath) {
        if (is.null(built <- pkgInfo$Built)) 
            stop(gettextf("package %s has not been installed properly\n", 
                sQuote(pkgname)), call. = FALSE, domain = NA)
        R_version_built_under <- as.numeric_version(built$R)
        if (R_version_built_under < "3.0.0") 
            stop(gettextf("package %s was built before R 3.0.0: please re-install it", 
                sQuote(pkgname)), call. = FALSE, domain = NA)
        current <- getRversion()
        if (length(Rdeps <- pkgInfo$Rdepends2)) {
            for (dep in Rdeps) if (length(dep) > 1L) {
                target <- dep$version
                res <- do.call(dep$op, if (is.character(target)) 
                  list(as.numeric(R.version[["svn rev"]]), as.numeric(sub("^r", 
                    "", target)))
                else list(current, as.numeric_version(target)))
                if (!res) 
                  stop(gettextf("This is R %s, package %s needs %s %s", 
                    current, sQuote(pkgname), dep$op, target), 
                    call. = FALSE, domain = NA)
            }
        }
        if (R_version_built_under > current) 
            warning(gettextf("package %s was built under R version %s", 
                sQuote(pkgname), as.character(built$R)), call. = FALSE, 
                domain = NA)
        platform <- built$Platform
        r_arch <- .Platform$r_arch
        if (.Platform$OS.type == "unix") {
        }
        else {
            if (nzchar(platform) && !grepl("mingw", platform)) 
                stop(gettextf("package %s was built for %s", 
                  sQuote(pkgname), platform), call. = FALSE, 
                  domain = NA)
        }
        if (nzchar(r_arch) && file.exists(file.path(pkgpath, 
            "libs")) && !file.exists(file.path(pkgpath, "libs", 
            r_arch))) 
            stop(gettextf("package %s is not installed for 'arch = %s'", 
                sQuote(pkgname), r_arch), call. = FALSE, domain = NA)
    }
    checkNoGenerics <- function(env, pkg) {
        nenv <- env
        ns <- .getNamespace(as.name(pkg))
        if (!is.null(ns)) 
            nenv <- asNamespace(ns)
        if (exists(".noGenerics", envir = nenv, inherits = FALSE)) 
            TRUE
        else {
            !any(startsWith(names(env), ".__T"))
        }
    }
    checkConflicts <- function(package, pkgname, pkgpath, nogenerics, 
        env) {
        dont.mind <- c("last.dump", "last.warning", ".Last.value", 
            ".Random.seed", ".Last.lib", ".onDetach", ".packageName", 
            ".noGenerics", ".required", ".no_S3_generics", ".Depends", 
            ".requireCachedGenerics")
        sp <- search()
        lib.pos <- which(sp == pkgname)
        ob <- names(as.environment(lib.pos))
        if (!nogenerics) {
            these <- ob[startsWith(ob, ".__T__")]
            gen <- gsub(".__T__(.*):([^:]+)", "\\1", these)
            from <- gsub(".__T__(.*):([^:]+)", "\\2", these)
            gen <- gen[from != package]
            ob <- ob[!(ob %in% gen)]
        }
        ipos <- seq_along(sp)[-c(lib.pos, match(c("Autoloads", 
            "CheckExEnv"), sp, 0L))]
        cpos <- NULL
        conflicts <- vector("list", 0)
        for (i in ipos) {
            obj.same <- match(names(as.environment(i)), ob, nomatch = 0L)
            if (any(obj.same > 0L)) {
                same <- ob[obj.same]
                same <- same[!(same %in% dont.mind)]
                Classobjs <- which(startsWith(same, ".__"))
                if (length(Classobjs)) 
                  same <- same[-Classobjs]
                same.isFn <- function(where) vapply(same, exists, 
                  NA, where = where, mode = "function", inherits = FALSE)
                same <- same[same.isFn(i) == same.isFn(lib.pos)]
                not.Ident <- function(ch, TRAFO = identity, ...) vapply(ch, 
                  function(.) !identical(TRAFO(get(., i)), TRAFO(get(., 
                    lib.pos)), ...), NA)
                if (length(same)) 
                  same <- same[not.Ident(same)]
                if (length(same) && identical(sp[i], "package:base")) 
                  same <- same[not.Ident(same, ignore.environment = TRUE)]
                if (length(same)) {
                  conflicts[[sp[i]]] <- same
                  cpos[sp[i]] <- i
                }
            }
        }
        if (length(conflicts)) {
            if (stopOnConflict) {
                emsg <- ""
                pkg <- names(conflicts)
                notOK <- vector("list", 0)
                for (i in seq_along(conflicts)) {
                  pkgname <- sub("^package:", "", pkg[i])
                  if (pkgname %in% canMaskEnv$canMask) 
                    next
                  same <- conflicts[[i]]
                  if (is.list(mask.ok)) 
                    myMaskOK <- mask.ok[[pkgname]]
                  else myMaskOK <- mask.ok
                  if (isTRUE(myMaskOK)) 
                    same <- NULL
                  else if (is.character(myMaskOK)) 
                    same <- setdiff(same, myMaskOK)
                  if (length(same)) {
                    notOK[[pkg[i]]] <- same
                    msg <- .maskedMsg(sort(same), pkg = sQuote(pkg[i]), 
                      by = cpos[i] < lib.pos)
                    emsg <- paste(emsg, msg, sep = "\n")
                  }
                }
                if (length(notOK)) {
                  msg <- gettextf("Conflicts attaching package %s:\n%s", 
                    sQuote(package), emsg)
                  stop(errorCondition(msg, package = package, 
                    conflicts = conflicts, class = "packageConflictError"))
                }
            }
            if (warn.conflicts) {
                packageStartupMessage(gettextf("\nAttaching package: %s\n", 
                  sQuote(package)), domain = NA)
                pkg <- names(conflicts)
                for (i in seq_along(conflicts)) {
                  msg <- .maskedMsg(sort(conflicts[[i]]), pkg = sQuote(pkg[i]), 
                    by = cpos[i] < lib.pos)
                  packageStartupMessage(msg, domain = NA)
                }
            }
        }
    }
    if (verbose && quietly) 
        message("'verbose' and 'quietly' are both true; being verbose then ..")
    if (!missing(package)) {
        if (is.null(lib.loc)) 
            lib.loc <- .libPaths()
        lib.loc <- lib.loc[dir.exists(lib.loc)]
        if (!character.only) 
            package <- as.character(substitute(package))
        if (length(package) != 1L) 
            stop("'package' must be of length 1")
        if (is.na(package) || (package == "")) 
            stop("invalid package name")
        pkgname <- paste0("package:", package)
        newpackage <- is.na(match(pkgname, search()))
        if (newpackage) {
            pkgpath <- find.package(package, lib.loc, quiet = TRUE, 
                verbose = verbose)
            if (length(pkgpath) == 0L) {
                if (length(lib.loc) && !logical.return) 
                  stop(packageNotFoundError(package, lib.loc, 
                    sys.call()))
                txt <- if (length(lib.loc)) 
                  gettextf("there is no package called %s", sQuote(package))
                else gettext("no library trees found in 'lib.loc'")
                if (logical.return) {
                  if (!quietly) 
                    warning(txt, domain = NA)
                  return(FALSE)
                }
                else stop(txt, domain = NA)
            }
            which.lib.loc <- normalizePath(dirname(pkgpath), 
                "/", TRUE)
            pfile <- system.file("Meta", "package.rds", package = package, 
                lib.loc = which.lib.loc)
            if (!nzchar(pfile)) 
                stop(gettextf("%s is not a valid installed package", 
                  sQuote(package)), domain = NA)
            pkgInfo <- readRDS(pfile)
            testRversion(pkgInfo, package, pkgpath)
            if (is.character(pos)) {
                npos <- match(pos, search())
                if (is.na(npos)) {
                  warning(gettextf("%s not found on search path, using pos = 2", 
                    sQuote(pos)), domain = NA)
                  pos <- 2
                }
                else pos <- npos
            }
            deps <- unique(names(pkgInfo$Depends))
            depsOK <- isTRUE(conf.ctrl$depends.ok)
            if (depsOK) {
                canMaskEnv <- dynGet("__library_can_mask__", 
                  NULL)
                if (is.null(canMaskEnv)) {
                  canMaskEnv <- new.env()
                  canMaskEnv$canMask <- union("base", conf.ctrl$can.mask)
                  "__library_can_mask__" <- canMaskEnv
                }
                canMaskEnv$canMask <- unique(c(package, deps, 
                  canMaskEnv$canMask))
            }
            else canMaskEnv <- NULL
            if (attach.required) 
                .getRequiredPackages2(pkgInfo, quietly = quietly, 
                  lib.loc = c(lib.loc, .libPaths()))
            cr <- conflictRules(package)
            if (missing(mask.ok)) 
                mask.ok <- cr$mask.ok
            if (missing(exclude)) 
                exclude <- cr$exclude
            if (isNamespaceLoaded(package)) {
                newversion <- as.numeric_version(pkgInfo$DESCRIPTION["Version"])
                oldversion <- as.numeric_version(getNamespaceVersion(package))
                if (newversion != oldversion) {
                  tryCatch(unloadNamespace(package), error = function(e) {
                    P <- if (!is.null(cc <- conditionCall(e))) 
                      paste("Error in", deparse(cc)[1L], ": ")
                    else "Error : "
                    stop(gettextf("Package %s version %s cannot be unloaded:\n %s", 
                      sQuote(package), oldversion, paste0(P, 
                        conditionMessage(e), "\n")), domain = NA)
                  })
                }
            }
            tt <- tryCatch({
                attr(package, "LibPath") <- which.lib.loc
                ns <- loadNamespace(package, lib.loc)
                env <- attachNamespace(ns, pos = pos, deps, exclude, 
                  include.only)
            }, error = function(e) {
                P <- if (!is.null(cc <- conditionCall(e))) 
                  paste(" in", deparse(cc)[1L])
                else ""
                msg <- gettextf("package or namespace load failed for %s%s:\n %s", 
                  sQuote(package), P, conditionMessage(e))
                if (logical.return && !quietly) 
                  message(paste("Error:", msg), domain = NA)
                else stop(msg, call. = FALSE, domain = NA)
            })
            if (logical.return && is.null(tt)) 
                return(FALSE)
            attr(package, "LibPath") <- NULL
            {
                on.exit(detach(pos = pos))
                nogenerics <- !.isMethodsDispatchOn() || checkNoGenerics(env, 
                  package)
                if (isFALSE(conf.ctrl$generics.ok) || (stopOnConflict && 
                  !isTRUE(conf.ctrl$generics.ok))) 
                  nogenerics <- TRUE
                if (stopOnConflict || (warn.conflicts && !exists(".conflicts.OK", 
                  envir = env, inherits = FALSE))) 
                  checkConflicts(package, pkgname, pkgpath, nogenerics, 
                    ns)
                on.exit()
                if (logical.return) 
                  return(TRUE)
                else return(invisible(.packages()))
            }
        }
        if (verbose && !newpackage) 
            warning(gettextf("package %s already present in search()", 
                sQuote(package)), domain = NA)
    }
    else if (!missing(help)) {
        if (!character.only) 
            help <- as.character(substitute(help))
        pkgName <- help[1L]
        pkgPath <- find.package(pkgName, lib.loc, verbose = verbose)
        docFiles <- c(file.path(pkgPath, "Meta", "package.rds"), 
            file.path(pkgPath, "INDEX"))
        if (file.exists(vignetteIndexRDS <- file.path(pkgPath, 
            "Meta", "vignette.rds"))) 
            docFiles <- c(docFiles, vignetteIndexRDS)
        pkgInfo <- vector("list", 3L)
        readDocFile <- function(f) {
            if (basename(f) %in% "package.rds") {
                txt <- readRDS(f)$DESCRIPTION
                if ("Encoding" %in% names(txt)) {
                  to <- if (Sys.getlocale("LC_CTYPE") == "C") 
                    "ASCII//TRANSLIT"
                  else ""
                  tmp <- try(iconv(txt, from = txt["Encoding"], 
                    to = to))
                  if (!inherits(tmp, "try-error")) 
                    txt <- tmp
                  else warning("'DESCRIPTION' has an 'Encoding' field and re-encoding is not possible", 
                    call. = FALSE)
                }
                nm <- paste0(names(txt), ":")
                formatDL(nm, txt, indent = max(nchar(nm, "w")) + 
                  3L)
            }
            else if (basename(f) %in% "vignette.rds") {
                txt <- readRDS(f)
                if (is.data.frame(txt) && nrow(txt)) 
                  cbind(basename(gsub("\\.[[:alpha:]]+$", "", 
                    txt$File)), paste(txt$Title, paste0(rep.int("(source", 
                    NROW(txt)), ifelse(nzchar(txt$PDF), ", pdf", 
                    ""), ")")))
                else NULL
            }
            else readLines(f)
        }
        for (i in which(file.exists(docFiles))) pkgInfo[[i]] <- readDocFile(docFiles[i])
        y <- list(name = pkgName, path = pkgPath, info = pkgInfo)
        class(y) <- "packageInfo"
        return(y)
    }
    else {
        if (is.null(lib.loc)) 
            lib.loc <- .libPaths()
        db <- matrix(character(), nrow = 0L, ncol = 3L)
        nopkgs <- character()
        for (lib in lib.loc) {
            a <- .packages(all.available = TRUE, lib.loc = lib)
            for (i in sort(a)) {
                file <- system.file("Meta", "package.rds", package = i, 
                  lib.loc = lib)
                title <- if (nzchar(file)) {
                  txt <- readRDS(file)
                  if (is.list(txt)) 
                    txt <- txt$DESCRIPTION
                  if ("Encoding" %in% names(txt)) {
                    to <- if (Sys.getlocale("LC_CTYPE") == "C") 
                      "ASCII//TRANSLIT"
                    else ""
                    tmp <- try(iconv(txt, txt["Encoding"], to, 
                      "?"))
                    if (!inherits(tmp, "try-error")) 
                      txt <- tmp
                    else warning("'DESCRIPTION' has an 'Encoding' field and re-encoding is not possible", 
                      call. = FALSE)
                  }
                  txt["Title"]
                }
                else NA
                if (is.na(title)) 
                  title <- " ** No title available ** "
                db <- rbind(db, cbind(i, lib, title))
            }
            if (length(a) == 0L) 
                nopkgs <- c(nopkgs, lib)
        }
        dimnames(db) <- list(NULL, c("Package", "LibPath", "Title"))
        if (length(nopkgs) && !missing(lib.loc)) {
            pkglist <- paste(sQuote(nopkgs), collapse = ", ")
            msg <- sprintf(ngettext(length(nopkgs), "library %s contains no packages", 
                "libraries %s contain no packages"), pkglist)
            warning(msg, domain = NA)
        }
        y <- list(header = NULL, results = db, footer = NULL)
        class(y) <- "libraryIQR"
        return(y)
    }
    if (logical.return) 
        TRUE
    else invisible(.packages())
}
