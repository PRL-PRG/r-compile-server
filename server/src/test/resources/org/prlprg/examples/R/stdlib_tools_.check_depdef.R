#? stdlib
`.check_depdef` <- function (package, dir, lib.loc = NULL, WINDOWS = FALSE) 
{
    bad_depr <- c("plclust")
    bad_def <- c("La.eigen", "tetragamma", "pentagamma", "package.description", 
        "gammaCody", "manglePackageName", ".readRDS", ".saveRDS", 
        "mem.limits", "trySilent", "traceOn", "traceOff", "print.coefmat", 
        "anovalist.lm", "lm.fit.null", "lm.wfit.null", "glm.fit.null", 
        "tkcmd", "tkfile.tail", "tkfile.dir", "tkopen", "tkclose", 
        "tkputs", "tkread", "Rd_parse", "CRAN.packages", "zip.file.extract", 
        "real", "as.real", "is.real", ".find.package", ".path.package")
    bad_dev <- c("quartz", "x11", "X11")
    if (!WINDOWS) 
        bad_dev <- c(bad_dev, "windows", "win.graph", "win.metafile", 
            "win.print")
    bad <- c(bad_depr, bad_def, bad_dev)
    bad_closures <- character()
    found <- character()
    find_bad_closures <- function(env) {
        objects_in_env <- as.list(env, all.names = TRUE, sorted = TRUE)
        x <- lapply(objects_in_env, function(v) {
            if (typeof(v) == "closure") 
                codetools::findGlobals(v)
        })
        names(x)[vapply(x, function(s) {
            res <- any(s %in% bad)
            if (res) 
                found <<- c(found, s)
            res
        }, NA)]
    }
    find_bad_S4methods <- function(env) {
        gens <- .get_S4_generics(code_env)
        x <- lapply(gens, function(f) {
            tab <- get(methods:::.TableMetaName(f, attr(f, "package")), 
                envir = code_env)
            any(unlist(eapply(tab, function(v) {
                if (!inherits(v, "derivedDefaultMethod")) FALSE else {
                  s <- codetools::findGlobals(v)
                  found <<- c(found, s)
                  any(s %in% bad)
                }
            })))
        })
        gens[unlist(x)]
    }
    find_bad_refClasses <- function(refs) {
        cl <- names(refs)
        x <- lapply(refs, function(z) {
            any(vapply(z, function(v) {
                s <- codetools::findGlobals(v)
                found <<- c(found, s)
                any(s %in% bad)
            }, NA))
        })
        cl[unlist(x)]
    }
    bad_S4methods <- list()
    bad_refs <- character()
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        if (package %notin% .get_standard_package_names()$base) {
            .load_namespace_quietly(package, dirname(dir))
            code_env <- asNamespace(package)
            bad_closures <- find_bad_closures(code_env)
            if (.isMethodsDispatchOn()) {
                bad_S4methods <- find_bad_S4methods(code_env)
                refs <- .get_ref_classes(code_env)
                if (length(refs)) 
                  bad_refs <- find_bad_refClasses(refs)
            }
        }
    }
    else {
        if (missing(dir)) 
            stop("you must specify 'package' or 'dir'")
        dir <- file_path_as_absolute(dir)
        code_dir <- file.path(dir, "R")
        if (dir.exists(code_dir)) {
            code_env <- new.env(hash = TRUE)
            dfile <- file.path(dir, "DESCRIPTION")
            meta <- if (file_test("-f", dfile)) 
                .read_description(dfile)
            else character()
            .source_assignments_in_code_dir(code_dir, code_env, 
                meta)
            bad_closures <- find_bad_closures(code_env)
        }
    }
    found <- sort(unique(found))
    deprecated <- found[found %in% bad_depr]
    defunct <- found[found %in% bad_def]
    devices <- found[found %in% bad_dev]
    out <- list(bad_closures = bad_closures, deprecated = deprecated, 
        defunct = defunct, devices = devices)
    class(out) <- "check_depdef"
    out
}
