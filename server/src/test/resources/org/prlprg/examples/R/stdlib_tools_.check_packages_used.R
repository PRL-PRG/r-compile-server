#? stdlib
`.check_packages_used` <- function (package, dir, lib.loc = NULL) 
{
    ns <- NULL
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        code_dir <- file.path(dir, "R")
        if (!dir.exists(code_dir)) 
            stop(gettextf("directory '%s' does not contain R code", 
                dir), domain = NA)
        if (basename(dir) != "base") 
            .load_namespace_quietly(package, dirname(dir))
        code_env <- asNamespace(package)
        dfile <- file.path(dir, "DESCRIPTION")
        db <- .read_description(dfile)
        nsfile <- file.path(dir, "Meta", "nsInfo.rds")
        if (file.exists(nsfile)) 
            ns <- readRDS(nsfile)
        else {
            nsfile <- file.path(dir, "NAMESPACE")
            if (file.exists(nsfile)) 
                ns <- parseNamespaceFile(basename(dir), dirname(dir))
        }
    }
    else if (!missing(dir)) {
        if (!dir.exists(dir)) 
            stop(gettextf("directory '%s' does not exist", dir), 
                domain = NA)
        else dir <- file_path_as_absolute(dir)
        db <- .get_package_metadata(dir)
        nsfile <- file.path(dir, "NAMESPACE")
        if (file.exists(nsfile) && inherits(tryCatch(ns <- parseNamespaceFile(basename(dir), 
            dirname(dir)), error = identity), "error")) 
            ns <- NULL
        code_dir <- file.path(dir, "R")
        if (dir.exists(code_dir)) {
            file <- tempfile()
            on.exit(unlink(file))
            if (!file.create(file)) 
                stop("unable to create ", file)
            if (!all(.file_append_ensuring_LFs(file, list_files_with_type(code_dir, 
                "code")))) 
                stop("unable to write code files")
        }
        else return(invisible())
    }
    pkg_name <- db["Package"]
    depends <- .get_requires_from_package_db(db, "Depends")
    imports <- imports0 <- .get_requires_from_package_db(db, 
        "Imports")
    suggests <- .get_requires_from_package_db(db, "Suggests")
    enhances <- .get_requires_from_package_db(db, "Enhances")
    standard_package_names <- setdiff(.get_standard_package_names()$base, 
        c("methods", "stats4"))
    default_package_names <- c("base", "datasets", "grDevices", 
        "graphics", "stats", "utils")
    depends_suggests <- c(depends, suggests, enhances, pkg_name, 
        default_package_names)
    imports <- c(imports, depends, suggests, enhances, pkg_name, 
        standard_package_names)
    common_names <- c("pkg", "pkgName", "package", "pos", "dep_name")
    bad_exprs <- bad_deps <- bad_imps <- bad_prac <- character()
    bad_imports <- all_imports <- imp2 <- imp2f <- imp3 <- imp3f <- character()
    uses_methods <- FALSE
    find_bad_exprs <- function(e) {
        if (is.call(e) || is.expression(e)) {
            Call <- deparse(e[[1L]])[1L]
            if (Call %in% c("clusterEvalQ", "parallel::clusterEvalQ")) 
                return()
            if ((Call %in% c("library", "require", "loadNamespace", 
                "requireNamespace")) && (length(e) >= 2L)) {
                keep <- vapply(e, function(x) deparse(x)[1L] != 
                  "...", NA)
                mc <- match.call(baseenv()[[Call]], e[keep])
                if (!is.null(pkg <- mc$package)) {
                  dunno <- FALSE
                  if ((Call %in% c("loadNamespace", "requireNamespace"))) {
                    if (!identical(class(pkg), "character")) 
                      dunno <- TRUE
                  }
                  else {
                    if (!identical(class(pkg), "character") && 
                      !is.null(co <- mc$character.only) && !isFALSE(co)) 
                      dunno <- TRUE
                  }
                  if (!dunno) {
                    pkg <- as.character(pkg)
                    if (Call %in% c("loadNamespace", "requireNamespace")) {
                      if (pkg %notin% c(imports, depends_suggests, 
                        common_names)) 
                        bad_imps <<- c(bad_imps, pkg)
                    }
                    else {
                      if (pkg %notin% c(depends_suggests, common_names)) 
                        bad_exprs <<- c(bad_exprs, pkg)
                      if (pkg %in% depends) 
                        bad_deps <<- c(bad_deps, pkg)
                      else if (pkg != pkg_name) 
                        bad_prac <<- c(bad_prac, pkg)
                    }
                  }
                }
            }
            else if (Call %in% "::") {
                pkg <- deparse(e[[2L]])
                all_imports <<- c(all_imports, pkg)
                if (pkg %notin% imports) 
                  bad_imports <<- c(bad_imports, pkg)
                else {
                  imp2 <<- c(imp2, pkg)
                  imp2f <<- c(imp2f, deparse(e[[3L]]))
                }
            }
            else if (Call %in% ":::") {
                pkg <- deparse(e[[2L]])
                all_imports <<- c(all_imports, pkg)
                imp3 <<- c(imp3, pkg)
                imp3f <<- c(imp3f, deparse(e[[3L]]))
                if (pkg %notin% imports) 
                  bad_imports <<- c(bad_imports, pkg)
            }
            else if (Call %in% c("setClass", "setMethod")) {
                uses_methods <<- TRUE
            }
            else if ((Call %in% c("<-", "<<-")) && is.call(e[[2L]]) && 
                is.call(e21 <- e[[2L]][[1L]]) && (deparse(e21[[1L]])[1L] %in% 
                c("::", ":::"))) {
                e[[2L]][[1L]][[3L]] <- as.name(paste0(deparse(e21[[3L]])[1L], 
                  "<-"))
            }
            for (i in seq_along(e)) Recall(e[[i]])
        }
        else if (is.pairlist(e)) 
            for (i in seq_along(e)) Recall(e[[i]])
    }
    if (!missing(package)) {
        if (length(objects(code_env, all.names = TRUE, pattern = "^[.]__[CT]_"))) 
            uses_methods <- TRUE
        exprs <- lapply(ls(envir = code_env, all.names = TRUE), 
            function(f) {
                f <- get(f, envir = code_env)
                if (typeof(f) == "closure") 
                  pairlist(formals(f), body(f))
            })
        if (.isMethodsDispatchOn()) {
            for (f in .get_S4_generics(code_env)) {
                mlist <- .get_S4_methods_list(f, code_env)
                exprs <- c(exprs, lapply(mlist, body))
            }
        }
    }
    else {
        enc <- db["Encoding"]
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
    for (i in seq_along(exprs)) find_bad_exprs(exprs[[i]])
    if (length(ns)) {
        imp <- c(ns$imports, ns$importClasses, ns$importMethods)
        if (length(imp)) {
            imp <- sapply(imp, function(x) x[[1L]])
            all_imports <- unique(c(imp, all_imports))
        }
    }
    else imp <- character()
    bad_imp <- setdiff(imports0, all_imports)
    depends_not_import <- setdiff(depends, c(imp, default_package_names))
    methods_message <- if (uses_methods && "methods" %notin% 
        c(depends, imports)) 
        gettext("package 'methods' is used but not declared")
    else ""
    extras <- list(base = c("Sys.junction", "shell", "shell.exec"), 
        grDevices = c("X11.options", "X11Font", "X11Fonts", "quartz", 
            "quartz.options", "quartz.save", "quartzFont", "quartzFonts", 
            "bringToTop", "msgWindow", "win.graph", "win.metafile", 
            "win.print", "windows", "windows.options", "windowsFont", 
            "windowsFonts"), parallel = c("mccollect", "mcparallel", 
            "mc.reset.stream", "mcaffinity"), utils = c("nsl", 
            "DLL.version", "Filters", "choose.dir", "choose.files", 
            "getClipboardFormats", "getIdentification", "getWindowsHandle", 
            "getWindowsHandles", "getWindowTitle", "loadRconsole", 
            "readClipboard", "readRegistry", "setStatusBar", 
            "setWindowTitle", "shortPathName", "win.version", 
            "winDialog", "winDialogString", "winMenuAdd", "winMenuAddItem", 
            "winMenuDel", "winMenuDelItem", "winMenuNames", "winMenuItems", 
            "writeClipboard", "zip.unpack", "winProgressBar", 
            "getWinProgressBar", "setWinProgressBar", "setInternet2", 
            "arrangeWindows"), RODBC = c("odbcConnectAccess", 
            "odbcConnectAccess2007", "odbcConnectDbase", "odbcConnectExcel", 
            "odbcConnectExcel2007"))
    imp2un <- character()
    if (length(imp2)) {
        names(imp2f) <- imp2
        imp2 <- unique(imp2)
        imps <- split(imp2f, names(imp2f))
        for (p in names(imps)) {
            this <- imps[[p]]
            this <- sub("^\"(.*)\"$", "\\1", this)
            this <- sub("^'(.*)'$", "\\1", this)
            if (p %in% "base") {
                this <- setdiff(this, ls(baseenv(), all.names = TRUE))
                if (length(this)) 
                  imp2un <- c(imp2un, paste(p, this, sep = "::"))
                next
            }
            ns <- .getNamespace(p)
            value <- if (is.null(ns)) {
                tryCatch(suppressWarnings(suppressMessages(loadNamespace(p))), 
                  error = function(e) e)
            }
            else NULL
            if (!inherits(value, "error")) {
                ns <- asNamespace(p)
                exps <- c(ls(envir = .getNamespaceInfo(ns, "exports"), 
                  all.names = TRUE), ls(envir = .getNamespaceInfo(ns, 
                  "lazydata"), all.names = TRUE), extras[[p]])
                this2 <- setdiff(this, exps)
                if (length(this2)) 
                  imp2un <- c(imp2un, paste(p, this2, sep = "::"))
            }
        }
    }
    names(imp3f) <- imp3
    if (pkg_name == "methods") {
        imp3f <- imp3f[(imp3 != "methods") | (imp3f %notin% c(".class1", 
            ".missingMethod", ".selectDotsMethod", ".setDummyField", 
            ".InhSlotNames"))]
        imp3 <- names(imp3f)
    }
    imp3 <- unique(imp3)
    imp3self <- pkg_name %in% imp3
    imp3selfcalls <- as.vector(imp3f[names(imp3f) == pkg_name])
    imp3 <- setdiff(imp3, pkg_name)
    if (length(imp3)) {
        imp3f <- imp3f[names(imp3f) %in% imp3]
        imps <- split(imp3f, names(imp3f))
        imp32 <- imp3 <- imp3f <- imp3ff <- unknown <- character()
        for (p in names(imps)) {
            this <- imps[[p]]
            this <- sub("^\"(.*)\"$", "\\1", this)
            this <- sub("^'(.*)'$", "\\1", this)
            if (p %in% "base") {
                imp32 <- c(imp32, paste(p, this, sep = ":::"))
                next
            }
            ns <- .getNamespace(p)
            value <- if (is.null(ns)) {
                tryCatch(suppressWarnings(suppressMessages(loadNamespace(p))), 
                  error = function(e) e)
            }
            else NULL
            if (inherits(value, "error")) {
                unknown <- c(unknown, p)
            }
            else {
                exps <- c(ls(envir = getNamespaceInfo(p, "exports"), 
                  all.names = TRUE), extras[[p]])
                this2 <- this %in% exps
                if (any(this2)) 
                  imp32 <- c(imp32, paste(p, this[this2], sep = ":::"))
                if (any(!this2)) {
                  imp3 <- c(imp3, p)
                  this <- this[!this2]
                  pp <- ls(envir = asNamespace(p), all.names = TRUE)
                  this2 <- this %in% pp
                  if (any(this2)) 
                    imp3f <- c(imp3f, paste(p, this[this2], sep = ":::"))
                  if (any(!this2)) 
                    imp3ff <- c(imp3ff, paste(p, this[!this2], 
                      sep = ":::"))
                }
            }
        }
        if (length(imp3f)) {
            maintainers <- sapply(strsplit(imp3f, ":::", fixed = TRUE), 
                function(p) {
                  dfile <- system.file("DESCRIPTION", package = p[[1L]])
                  if (dfile == "") 
                    return("")
                  unname(.read_description(dfile)["Maintainer"])
                })
            imp3f <- imp3f[(maintainers != db["Maintainer"])]
        }
    }
    else imp32 <- imp3f <- imp3ff <- unknown <- character()
    imp3ff <- setdiff(sort(unique(imp3ff)), "utils:::unpackPkgZip")
    res <- list(others = unique(bad_exprs), bad_practice = unique(bad_prac), 
        imports = unique(bad_imports), imps = unique(bad_imps), 
        in_depends = unique(bad_deps), unused_imports = bad_imp, 
        depends_not_import = depends_not_import, imp2un = sort(unique(imp2un)), 
        imp32 = sort(unique(imp32)), imp3 = imp3, imp3f = sort(unique(imp3f)), 
        imp3ff = imp3ff, imp3self = imp3self, imp3selfcalls = sort(unique(imp3selfcalls)), 
        imp3unknown = unknown, methods_message = methods_message)
    class(res) <- "check_packages_used"
    res
}
