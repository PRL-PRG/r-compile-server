#? stdlib
`.check_dotInternal` <- function (package, dir, lib.loc = NULL, details = TRUE) 
{
    bad_closures <- character()
    find_bad_closures <- function(env) {
        objects_in_env <- as.list(env, all.names = TRUE, sorted = TRUE)
        x <- lapply(objects_in_env, function(v) {
            if (typeof(v) == "closure") 
                codetools::findGlobals(v)
        })
        names(x)[vapply(x, function(s) any(s %in% ".Internal"), 
            NA)]
    }
    find_bad_S4methods <- function(env) {
        gens <- .get_S4_generics(code_env)
        x <- lapply(gens, function(f) {
            tab <- get(methods:::.TableMetaName(f, attr(f, "package")), 
                envir = code_env)
            any(unlist(eapply(tab, function(v) !inherits(v, "derivedDefaultMethod") && 
                any(codetools::findGlobals(v) %in% ".Internal"))))
        })
        gens[unlist(x)]
    }
    find_bad_refClasses <- function(refs) {
        cl <- names(refs)
        x <- lapply(refs, function(z) {
            any(vapply(z, function(v) any(codetools::findGlobals(v) %in% 
                ".Internal"), NA))
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
    internals <- character()
    if (length(bad_closures) && details) {
        lapply(bad_closures, function(o) {
            v <- get(o, envir = code_env)
            calls <- .find_calls(v, recursive = TRUE)
            if (!length(calls)) 
                return()
            calls <- calls[.call_names(calls) == ".Internal"]
            calls2 <- lapply(calls, `[`, 2L)
            calls3 <- sapply(calls2, function(x) sub("\\(.*", 
                "", deparse(x)[1L]))
            internals <<- c(internals, calls3)
        })
    }
    out <- list(bad_closures = bad_closures, internals = internals, 
        bad_S4methods = bad_S4methods, bad_refs = bad_refs)
    class(out) <- "check_dotInternal"
    out
}
