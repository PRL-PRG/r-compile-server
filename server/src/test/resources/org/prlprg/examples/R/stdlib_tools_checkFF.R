#? stdlib
`checkFF` <- function (package, dir, file, lib.loc = NULL, registration = FALSE, 
    check_DUP = FALSE, verbose = getOption("verbose")) 
{
    allow_suppress <- !nzchar(Sys.getenv("_R_CHECK_FF_AS_CRAN_"))
    suppressCheck <- function(e) allow_suppress && length(e) == 
        2L && is.call(e) && is.symbol(e[[1L]]) && as.character(e[[1L]]) == 
        "dontCheck"
    has_namespace <- FALSE
    is_installed_msg <- is_installed <- FALSE
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        dfile <- file.path(dir, "DESCRIPTION")
        db <- .read_description(dfile)
        pkg <- pkgDLL <- basename(dir)
        code_dir <- file.path(dir, "R")
        if (!dir.exists(code_dir)) 
            stop(gettextf("directory '%s' does not contain R code", 
                dir), domain = NA)
        have_registration <- FALSE
        if (basename(dir) != "base") {
            .load_namespace_quietly(package, dirname(dir))
            code_env <- asNamespace(package)
            if (!is.null(DLLs <- get0("DLLs", envir = code_env$.__NAMESPACE__.))) {
                if (length(DLLs)) 
                  has_namespace <- TRUE
                if (length(DLLs) && inherits(DLLs[[1L]], "DLLInfo")) {
                  pkgDLL <- unclass(DLLs[[1L]])$name
                  if (registration) {
                    reg <- getDLLRegisteredRoutines(DLLs[[1L]])
                    have_registration <- sum(lengths(reg)) > 
                      0L
                  }
                }
            }
        }
        else {
            has_namespace <- have_registration <- TRUE
            code_env <- .package_env(package)
        }
        is_installed <- TRUE
    }
    else if (!missing(dir)) {
        have_registration <- FALSE
        if (!dir.exists(dir)) 
            stop(gettextf("directory '%s' does not exist", dir), 
                domain = NA)
        else dir <- file_path_as_absolute(dir)
        pkg <- pkgDLL <- basename(dir)
        dfile <- file.path(dir, "DESCRIPTION")
        enc <- NA
        db <- NULL
        if (file.exists(dfile)) {
            db <- .read_description(dfile)
            enc <- db["Encoding"]
        }
        if (pkg == "base") 
            has_namespace <- TRUE
        if (file.exists(file.path(dir, "NAMESPACE")) && !inherits(tryCatch(nm <- parseNamespaceFile(basename(dir), 
            dirname(dir)), error = identity), "error")) {
            has_namespace <- length(nm$dynlibs) > 0L
        }
        code_dir <- file.path(dir, "R")
        if (!dir.exists(code_dir)) 
            stop(gettextf("directory '%s' does not contain R code", 
                dir), domain = NA)
        file <- tempfile()
        on.exit(unlink(file))
        if (!file.create(file)) 
            stop("unable to create ", file, domain = NA)
        if (!all(.file_append_ensuring_LFs(file, list_files_with_type(code_dir, 
            "code")))) 
            stop("unable to write code files", domain = NA)
    }
    else if (!missing(file)) {
        pkg <- enc <- NA
    }
    else stop("you must specify 'package', 'dir' or 'file'")
    if (missing(package) && !file_test("-f", file)) 
        stop(gettextf("file '%s' does not exist", file), domain = NA)
    bad_exprs <- empty_exprs <- wrong_pkg <- other_problem <- list()
    other_desc <- character()
    bad_pkg <- character()
    dup_false <- list()
    FF_funs <- FF_fun_names <- c(".C", ".Fortran", ".Call", ".External", 
        ".Call.graphics", ".External.graphics")
    if (!missing(package)) {
        is_FF_fun_from_base <- vapply(FF_funs, function(f) {
            e <- .find_owner_env(f, code_env)
            (identical(e, baseenv()) || identical(e, .BaseNamespaceEnv))
        }, NA)
        FF_funs <- FF_funs[is_FF_fun_from_base]
    }
    FF_funs <- c(FF_funs, sprintf("base::%s", FF_fun_names))
    check_registration <- function(e, fr) {
        sym <- e[[2L]]
        name <- deparse(sym, nlines = 1L)
        if (name == "...") 
            return("SYMBOL OK")
        if (is.character(sym)) {
            if (!have_registration) 
                return("SYMBOL OK")
            FF_fun <- as.character(e[[1L]])
            sym <- reg[[FF_fun]][[sym]]
            if (is.null(sym)) 
                return("SYMBOL OK")
        }
        if (!is_installed) {
            if (!is_installed_msg) {
                other_problem <<- c(other_problem, e)
                other_desc <<- c(other_desc, "foreign function registration not tested, as package was not installed")
                is_installed_msg <<- TRUE
            }
            return("OTHER")
        }
        if (is.symbol(sym)) {
            if (!exists(name, code_env, inherits = FALSE)) {
                if (allow_suppress && name %in% utils::suppressForeignCheck(, 
                  package)) 
                  return("SYMBOL OK")
                if (have_registration) {
                  if (name %in% fr) {
                    other_problem <<- c(other_problem, e)
                    other_desc <<- c(other_desc, sprintf("symbol %s in the local frame", 
                      sQuote(name)))
                  }
                  else {
                    other_problem <<- c(other_problem, e)
                    other_desc <<- c(other_desc, sprintf("symbol %s not in namespace", 
                      sQuote(name)))
                  }
                }
                return("OTHER")
            }
        }
        else if (suppressCheck(sym)) 
            return("SKIPPED")
        sym <- tryCatch(eval(sym, code_env), error = function(e) e)
        if (inherits(sym, "error")) {
            if (have_registration || !allow_suppress) {
                other_problem <<- c(other_problem, e)
                other_desc <<- c(other_desc, sprintf("Evaluating %s during check gives error\n%s", 
                  sQuote(name), sQuote(sym$message)))
            }
            return("OTHER")
        }
        FF_fun <- as.character(e[[1L]])
        if (is.character(sym)) {
            if (!have_registration) 
                return("SYMBOL OK")
            sym <- reg[[FF_fun]][[sym]]
            if (is.null(sym)) 
                return("SYMBOL OK")
        }
        if (inherits(sym, "RegisteredNativeSymbol") || inherits(sym, 
            "NativeSymbol")) 
            return("SYMBOL OK")
        if (!inherits(sym, "NativeSymbolInfo")) {
            other_problem <<- c(other_problem, e)
            other_desc <<- c(other_desc, sprintf("%s is of class \"%s\"", 
                sQuote(name), class(sym)))
            return("OTHER")
        }
        parg <- unclass(sym$dll)$name
        if (length(parg) == 1L && parg %notin% c("Rcpp", pkgDLL)) {
            wrong_pkg <<- c(wrong_pkg, e)
            bad_pkg <<- c(bad_pkg, parg)
        }
        numparms <- sym$numParameters
        if (length(numparms) && numparms >= 0) {
            if (any(as.character(e) == "...")) {
                other_problem <<- c(other_problem, e)
                other_desc <<- c(other_desc, sprintf("call includes ..., expected %d %s", 
                  numparms, if (numparms > 1L) "parameters" else "parameter"))
            }
            else {
                callparms <- length(e) - 2L
                if ("PACKAGE" %in% names(e)) 
                  callparms <- callparms - 1L
                if (FF_fun %in% c(".C", ".Fortran")) 
                  callparms <- callparms - length(intersect(names(e), 
                    c("NAOK", "DUP", "ENCODING")))
                if (!is.null(numparms) && numparms >= 0L && numparms != 
                  callparms) {
                  other_problem <<- c(other_problem, e)
                  other_desc <<- c(other_desc, sprintf("call to %s with %d %s, expected %d", 
                    sQuote(name), callparms, if (callparms > 
                      1L) "parameters" else "parameter", numparms))
                  return("OTHER")
                }
            }
        }
        if (inherits(sym, "CallRoutine") && (FF_fun %notin% c(".Call", 
            ".Call.graphics"))) {
            other_problem <<- c(other_problem, e)
            other_desc <<- c(other_desc, sprintf("%s registered as %s, but called with %s", 
                sQuote(name), ".Call", FF_fun))
            return("OTHER")
        }
        if (inherits(sym, "ExternalRoutine") && !(FF_fun %in% 
            c(".External", ".External.graphics"))) {
            other_problem <<- c(other_problem, e)
            other_desc <<- c(other_desc, sprintf("%s registered as %s, but called with %s", 
                sQuote(name), ".External", FF_fun))
            return("OTHER")
        }
        "SYMBOL OK"
    }
    find_bad_exprs <- function(e) {
        if (is.call(e) || is.expression(e)) {
            if (deparse(e[[1L]])[1L] %in% FF_funs) {
                if (registration) 
                  check_registration(e, fr)
                dup <- e[["DUP"]]
                if (!is.null(dup) && !isTRUE(dup)) 
                  dup_false <<- c(dup_false, e)
                this <- ""
                this <- parg <- e[["PACKAGE"]]
                if (!is.na(pkg) && is.character(parg) && nzchar(parg) && 
                  parg != pkgDLL) {
                  wrong_pkg <<- c(wrong_pkg, e)
                  bad_pkg <<- c(bad_pkg, this)
                }
                parg <- if (!is.null(parg) && any(nzchar(parg))) 
                  "OK"
                else if (identical(parg, "")) {
                  empty_exprs <<- c(empty_exprs, e)
                  "EMPTY"
                }
                else if (!is.character(sym <- e[[2L]])) {
                  if (!registration) {
                    sym <- tryCatch(eval(sym, code_env), error = function(e) e)
                    if (inherits(sym, "NativeSymbolInfo")) {
                      parg <- unclass(sym$dll)$name
                      if (length(parg) == 1L && parg %notin% 
                        c("Rcpp", pkgDLL)) {
                        wrong_pkg <<- c(wrong_pkg, e)
                        bad_pkg <<- c(bad_pkg, parg)
                      }
                    }
                  }
                  "Called with symbol"
                }
                else if (!has_namespace) {
                  bad_exprs <<- c(bad_exprs, e)
                  "MISSING"
                }
                else "MISSING but in a function in a namespace"
                if (verbose) 
                  if (is.null(this)) 
                    cat(deparse(e[[1L]]), "(", deparse(e[[2L]]), 
                      ", ... ): ", parg, "\n", sep = "")
                  else cat(deparse(e[[1L]]), "(", deparse(e[[2L]]), 
                    ", ..., PACKAGE = \"", this, "\"): ", parg, 
                    "\n", sep = "")
            }
            else if (deparse(e[[1L]])[1L] %in% "<-") {
                fr <<- c(fr, as.character(e[[2L]]))
            }
            for (i in seq_along(e)) Recall(e[[i]])
        }
    }
    if (!missing(package)) {
        checkFFmy <- function(f) if (typeof(f) == "closure") {
            env <- environment(f)
            if (isNamespace(env)) {
                nm <- getNamespaceName(env)
                if (nm == package) 
                  body(f)
                else NULL
            }
            else body(f)
        }
        exprs <- lapply(ls(envir = code_env, all.names = TRUE), 
            function(f) checkFFmy(get(f, envir = code_env)))
        if (.isMethodsDispatchOn()) {
            for (f in .get_S4_generics(code_env)) {
                mlist <- .get_S4_methods_list(f, code_env)
                exprs <- c(exprs, lapply(mlist, body))
            }
            refs <- .get_ref_classes(code_env)
            if (length(refs)) {
                exprs2 <- lapply(unlist(refs, FALSE), checkFFmy)
                exprs <- c(exprs, exprs2)
            }
        }
    }
    else {
        if (!is.na(enc) && (Sys.getlocale("LC_CTYPE") %notin% 
            c("C", "POSIX"))) {
            con <- file(file, encoding = enc)
            on.exit(close(con))
        }
        else con <- file
        exprs <- tryCatch(parse(file = con, n = -1L), error = function(e) stop(gettextf("parse error in file '%s':\n%s", 
            file, .massage_file_parse_error_message(conditionMessage(e))), 
            domain = NA, call. = FALSE))
    }
    for (i in seq_along(exprs)) {
        fr <- character()
        find_bad_exprs(exprs[[i]])
    }
    attr(bad_exprs, "wrong_pkg") <- wrong_pkg
    attr(bad_exprs, "bad_pkg") <- bad_pkg
    attr(bad_exprs, "empty") <- empty_exprs
    attr(bad_exprs, "other_problem") <- other_problem
    attr(bad_exprs, "other_desc") <- other_desc
    if (check_DUP) 
        attr(bad_exprs, "dup_false") <- dup_false
    if (length(bad_pkg)) {
        bases <- .get_standard_package_names()$base
        bad <- bad_pkg %w/o% bases
        if (length(bad)) {
            depends <- .get_requires_from_package_db(db, "Depends")
            imports <- .get_requires_from_package_db(db, "Imports")
            suggests <- .get_requires_from_package_db(db, "Suggests")
            enhances <- .get_requires_from_package_db(db, "Enhances")
            bad <- bad %w/o% c(depends, imports, suggests, enhances)
            attr(bad_exprs, "undeclared") <- bad
        }
    }
    class(bad_exprs) <- "checkFF"
    if (verbose) 
        invisible(bad_exprs)
    else bad_exprs
}

# Examples\donttest{ # order is pretty much random
checkFF(package = "stats", verbose = TRUE)
}
