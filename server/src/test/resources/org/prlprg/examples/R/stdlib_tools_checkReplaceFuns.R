#? stdlib
`checkReplaceFuns` <- function (package, dir, lib.loc = NULL) 
{
    ns_S3_methods_db <- NULL
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        code_dir <- file.path(dir, "R")
        if (!dir.exists(code_dir)) 
            stop(gettextf("directory '%s' does not contain R code", 
                dir), domain = NA)
        is_base <- basename(dir) == "base"
        if (!is_base) 
            .load_namespace_quietly(package, dirname(dir))
        code_env <- asNamespace(package)
        if (!is_base) 
            ns_S3_methods_db <- .getNamespaceInfo(code_env, "S3methods")
    }
    else {
        if (missing(dir)) 
            stop("you must specify 'package' or 'dir'")
        if (!dir.exists(dir)) 
            stop(gettextf("directory '%s' does not exist", dir), 
                domain = NA)
        else dir <- file_path_as_absolute(dir)
        code_dir <- file.path(dir, "R")
        if (!dir.exists(code_dir)) 
            stop(gettextf("directory '%s' does not contain R code", 
                dir), domain = NA)
        is_base <- basename(dir) == "base"
        code_env <- new.env(hash = TRUE)
        dfile <- file.path(dir, "DESCRIPTION")
        meta <- if (file_test("-f", dfile)) 
            .read_description(dfile)
        else character()
        .source_assignments_in_code_dir(code_dir, code_env, meta)
        sys_data_file <- file.path(code_dir, "sysdata.rda")
        if (file_test("-f", sys_data_file)) 
            load(sys_data_file, code_env)
        if (file.exists(file.path(dir, "NAMESPACE")) && !inherits(tryCatch(nsInfo <- parseNamespaceFile(basename(dir), 
            dirname(dir)), error = identity), "error")) {
            ns_S3_methods_db <- .get_namespace_S3_methods_db(nsInfo)
        }
    }
    objects_in_code <- sort(names(code_env))
    replace_funs <- character()
    if (!is.null(ns_S3_methods_db)) {
        ns_S3_generics <- as.character(ns_S3_methods_db[, 1L])
        ns_S3_methods <- ns_S3_methods_db[, 3L]
        if (!is.character(ns_S3_methods)) {
            ind <- vapply(ns_S3_methods, is.character, NA)
            ns_S3_methods[!ind] <- ""
            ns_S3_methods <- as.character(ns_S3_methods)
        }
        replace_funs <- ns_S3_methods[endsWith(ns_S3_generics, 
            "<-")]
        objects_in_code <- setdiff(objects_in_code, ns_S3_methods)
    }
    replace_funs <- c(replace_funs, grep("<-", objects_in_code, 
        value = TRUE))
    replace_funs <- replace_funs[!(startsWith(replace_funs, "%") & 
        endsWith(replace_funs, "%"))]
    .check_last_formal_arg <- function(f) {
        arg_names <- names(formals(f))
        if (!length(arg_names)) 
            TRUE
        else identical(arg_names[length(arg_names)], "value")
    }
    bad_replace_funs <- if (length(replace_funs)) {
        Filter(function(f) {
            f <- get(f, envir = code_env)
            is.function(f) && !.check_last_formal_arg(f)
        }, replace_funs)
    }
    else character()
    if (.isMethodsDispatchOn()) {
        S4_generics <- .get_S4_generics(code_env)
        S4_generics <- S4_generics[endsWith(names(S4_generics), 
            "<-")]
        bad_S4_replace_methods <- lapply(S4_generics, function(f) {
            mlist <- .get_S4_methods_list(f, code_env)
            ind <- !vapply(mlist, .check_last_formal_arg, NA)
            if (!any(ind)) 
                character()
            else {
                sigs <- .make_siglist(mlist[ind])
                sprintf("\\S4method{%s}{%s}", f, sigs)
            }
        })
        bad_replace_funs <- c(bad_replace_funs, unlist(bad_S4_replace_methods, 
            use.names = FALSE))
    }
    class(bad_replace_funs) <- "checkReplaceFuns"
    bad_replace_funs
}
