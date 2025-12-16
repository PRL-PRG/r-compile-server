#? stdlib
`codoc` <- function (package, dir, lib.loc = NULL, use.values = NULL, verbose = getOption("verbose")) 
{
    has_namespace <- FALSE
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        code_dir <- file.path(dir, "R")
        if (!dir.exists(code_dir)) 
            stop(gettextf("directory '%s' does not contain R code", 
                dir), domain = NA)
        if (!.haveRds(dir)) 
            stop(gettextf("directory '%s' does not contain Rd objects", 
                dir), domain = NA)
        is_base <- basename(dir) == "base"
        dirdir <- dirname(dir)
        if (!is_base) 
            .load_package_quietly(package, dirdir)
        code_env <- .package_env(package)
        objects_in_code <- sort(names(code_env))
        if (is_base) {
            objects_in_code_or_namespace <- objects_in_code
        }
        else {
            has_namespace <- TRUE
            ns_env <- asNamespace(package)
            S3Table <- ns_env[[".__S3MethodsTable__."]]
            functions_in_S3Table <- ls(S3Table, all.names = TRUE)
            objects_in_ns <- setdiff(sort(names(ns_env)), c(".__NAMESPACE__.", 
                ".__S3MethodsTable__."))
            ns_S3_methods_db <- getNamespaceInfo(package, "S3methods")
            ns_S3_methods <- if (is.null(ns_S3_methods_db)) 
                character()
            else paste(ns_S3_methods_db[, 1L], ns_S3_methods_db[, 
                2L], sep = ".")
            objects_in_code_or_namespace <- unique(c(objects_in_code, 
                objects_in_ns, ns_S3_methods))
            objects_in_ns <- setdiff(objects_in_ns, objects_in_code)
        }
        package_name <- package
    }
    else {
        if (missing(dir)) 
            stop("you must specify 'package' or 'dir'")
        if (!dir.exists(dir)) 
            stop(gettextf("directory '%s' does not exist", dir), 
                domain = NA)
        package_name <- basename(dir)
        dirdir <- dirname(dir)
        dir <- file_path_as_absolute(dir)
        code_dir <- file.path(dir, "R")
        if (!dir.exists(code_dir)) 
            stop(gettextf("directory '%s' does not contain R code", 
                dir), domain = NA)
        if (!.haveRds(dir)) 
            stop(gettextf("directory '%s' does not contain Rd objects", 
                dir), domain = NA)
        is_base <- package_name == "base"
        code_env <- new.env(hash = TRUE)
        dfile <- file.path(dir, "DESCRIPTION")
        meta <- if (file_test("-f", dfile)) 
            .read_description(dfile)
        else character()
        .source_assignments_in_code_dir(code_dir, code_env, meta)
        sys_data_file <- file.path(code_dir, "sysdata.rda")
        if (file_test("-f", sys_data_file)) 
            load(sys_data_file, code_env)
        objects_in_code <- sort(names(code_env))
        objects_in_code_or_namespace <- objects_in_code
        if (file.exists(file.path(dir, "NAMESPACE")) && !inherits(tryCatch(nsInfo <- parseNamespaceFile(package_name, 
            dirdir), error = identity), "error")) {
            has_namespace <- TRUE
            objects_in_ns <- objects_in_code
            functions_in_S3Table <- character()
            ns_env <- code_env
            OK <- intersect(objects_in_code, nsInfo$exports)
            for (p in nsInfo$exportPatterns) OK <- c(OK, grep(p, 
                objects_in_code, value = TRUE))
            objects_in_code <- unique(OK)
        }
    }
    data_dir <- file.path(dir, "data")
    if (dir.exists(data_dir)) {
        data_sets_in_code_variables <- .try_quietly(list_data_in_pkg(dir = dir))
        data_sets_in_code <- names(data_sets_in_code_variables)
    }
    else data_sets_in_code <- data_sets_in_code_variables <- character()
    functions_in_code <- Filter(function(f) {
        f <- get(f, envir = code_env)
        typeof(f) == "closure"
    }, objects_in_code)
    if (is_base) {
        objects_in_base <- sort(names(baseenv()))
        objects_in_code <- c(objects_in_code, conceptual_base_code, 
            Filter(.is_primitive_in_base, objects_in_base), c(".First.lib", 
                ".Last.lib", ".Random.seed", ".onLoad", ".onAttach", 
                ".onDetach", ".onUnload"))
        objects_in_code_or_namespace <- objects_in_code
        known_env <- .make_S3_primitive_generic_env(code_env, 
            fixup = TRUE)
        extras <- ls(known_env, all.names = TRUE)
        functions_in_code <- c(functions_in_code, extras)
        code_env <- known_env
        known_env <- .make_S3_primitive_nongeneric_env(code_env)
        extras <- ls(known_env, all.names = TRUE)
        functions_in_code <- c(functions_in_code, extras)
        code_env <- known_env
    }
    function_args_in_code <- lapply(functions_in_code, function(f) formals(get(f, 
        envir = code_env)))
    names(function_args_in_code) <- functions_in_code
    if (has_namespace) {
        functions_in_ns <- Filter(function(f) {
            f <- get(f, envir = ns_env)
            is.function(f) && (length(formals(f)) > 0L)
        }, objects_in_ns)
        function_args_in_ns <- lapply(functions_in_ns, function(f) formals(get(f, 
            envir = ns_env)))
        names(function_args_in_ns) <- functions_in_ns
        function_args_in_S3Table <- lapply(functions_in_S3Table, 
            function(f) formals(S3Table[[f]]))
        names(function_args_in_S3Table) <- functions_in_S3Table
        tmp <- c(function_args_in_code, function_args_in_S3Table, 
            function_args_in_ns)
        keep <- !duplicated(names(tmp))
        function_args_in_code <- tmp[keep]
        functions_in_code <- names(function_args_in_code)
    }
    if (.isMethodsDispatchOn()) {
        check_S4_methods <- !isFALSE(as.logical(Sys.getenv("_R_CHECK_CODOC_S4_METHODS_")))
        if (check_S4_methods) {
            unRematchDef <- methods::unRematchDefinition
            get_formals_from_method_definition <- function(m) formals(unRematchDef(m))
            lapply(.get_S4_generics(code_env), function(f) {
                mlist <- .get_S4_methods_list(f, code_env)
                sigs <- .make_siglist(mlist)
                if (!length(sigs)) 
                  return()
                nm <- sprintf("\\S4method{%s}{%s}", f, sigs)
                args <- lapply(mlist, get_formals_from_method_definition)
                names(args) <- nm
                functions_in_code <<- c(functions_in_code, nm)
                function_args_in_code <<- c(function_args_in_code, 
                  args)
            })
        }
    }
    check_codoc <- function(fName, ffd) {
        ffc <- function_args_in_code[[fName]]
        ident <- if (isFALSE(use.values)) {
            ffc <- names(ffc)
            ffd <- names(ffd)
            identical(ffc, ffd)
        }
        else {
            identical(names(ffc), names(ffd)) && {
                vffc <- as.character(ffc)
                vffd <- as.character(ffd)
                if (!isTRUE(use.values)) {
                  ind <- nzchar(vffd)
                  vffc <- vffc[ind]
                  vffd <- vffd[ind]
                }
                identical(vffc, vffd)
            }
        }
        if (!ident) 
            list(list(name = fName, code = ffc, docs = ffd))
    }
    db <- if (!missing(package)) 
        Rd_db(package, lib.loc = dirdir)
    else Rd_db(dir = dir)
    db_names <- .Rd_get_names_from_Rd_db(db)
    ind <- db_names %in% paste0(package_name, "-defunct")
    db <- db[!ind]
    db_usages <- lapply(db, .Rd_get_section, "usage")
    db_usages <- lapply(db_usages, .parse_usage_as_much_as_possible)
    ind <- vapply(db_usages, function(x) !is.null(attr(x, "bad_lines")), 
        NA, USE.NAMES = FALSE)
    bad_lines <- lapply(db_usages[ind], attr, "bad_lines")
    bad_doc_objects <- list()
    functions_in_usages <- character()
    variables_in_usages <- character()
    data_sets_in_usages <- character()
    functions_in_usages_not_in_code <- list()
    data_sets_in_usages_not_in_code <- list()
    variables_in_usages_not_in_code <- list()
    objects_as_in <- c(objects_in_code_or_namespace, names(compatibilityEnv()), 
        if (missing(package) && str_parse_logic(meta["LazyData"], 
            FALSE)) unlist(data_sets_in_code_variables, use.names = FALSE), 
        if (is_base) c("NA", "NULL", "Inf", "NaN", "TRUE", "FALSE", 
            ".Autoloaded"))
    for (nm in names(db)) {
        exprs <- db_usages[[nm]]
        if (!length(exprs)) 
            next
        ind <- vapply(exprs, is.name, NA, USE.NAMES = FALSE)
        if (any(ind)) {
            variables <- vapply(exprs[ind], deparse, "")
            variables_in_usages <- c(variables_in_usages, variables)
            variables <- setdiff(variables, objects_as_in)
            if (length(variables)) 
                variables_in_usages_not_in_code[[nm]] <- variables
            exprs <- exprs[!ind]
        }
        exprs <- exprs[vapply(exprs, is.call, NA, USE.NAMES = FALSE)]
        ind <- vapply(exprs, is_data_for_dataset, NA, USE.NAMES = FALSE)
        if (any(ind)) {
            data_sets <- vapply(exprs[ind], function(e) as.character(e[[2L]]), 
                "")
            data_sets_in_usages <- c(data_sets_in_usages, data_sets)
            data_sets <- setdiff(data_sets, data_sets_in_code)
            if (length(data_sets)) 
                data_sets_in_usages_not_in_code[[nm]] <- data_sets
            exprs <- exprs[!ind]
        }
        ind <- vapply(exprs, .is_call_from_replacement_function_usage, 
            NA, USE.NAMES = FALSE)
        replace_exprs <- exprs[ind]
        exprs <- exprs[!ind]
        functions <- vapply(exprs, function(e) as.character(e[[1L]]), 
            "")
        ind <- (functions %notin% c("<-", "=", "+", "-"))
        exprs <- exprs[ind]
        functions <- functions[ind]
        functions <- .transform_S3_method_markup(as.character(functions))
        ind <- functions %in% functions_in_code
        bad_functions <- mapply(functions[ind], exprs[ind], FUN = function(x, 
            y) check_codoc(x, as.pairlist(as.alist.call(y[-1L]))), 
            SIMPLIFY = FALSE)
        if (length(replace_exprs)) {
            replace_funs <- paste0(vapply(replace_exprs, function(e) as.character(e[[2L]][[1L]]), 
                ""), "<-")
            replace_funs <- .transform_S3_method_markup(replace_funs)
            functions <- c(functions, replace_funs)
            ind <- (replace_funs %in% functions_in_code)
            if (any(ind)) {
                bad_replace_funs <- mapply(replace_funs[ind], 
                  replace_exprs[ind], FUN = function(x, y) check_codoc(x, 
                    as.pairlist(c(as.alist.call(y[[2L]][-1L]), 
                      as.alist.symbol(y[[3L]])))), SIMPLIFY = FALSE)
                bad_functions <- c(bad_functions, bad_replace_funs)
            }
        }
        bad_functions <- do.call(c, bad_functions)
        if (length(bad_functions)) 
            bad_doc_objects[[nm]] <- bad_functions
        ind <- grepl(.S4_method_markup_regexp, functions)
        if (any(ind)) 
            functions <- functions[!ind]
        bad_functions <- setdiff(functions, objects_as_in)
        if (length(bad_functions)) 
            functions_in_usages_not_in_code[[nm]] <- bad_functions
        functions_in_usages <- c(functions_in_usages, functions)
    }
    objects_in_code_not_in_usages <- setdiff(objects_in_code, 
        c(functions_in_usages, variables_in_usages))
    functions_in_code_not_in_usages <- intersect(functions_in_code, 
        objects_in_code_not_in_usages)
    functions_missing_from_usages <- if (!has_namespace && !is_base) 
        character()
    else {
        functions <- functions_in_code_not_in_usages
        if (is_base) 
            functions <- setdiff(functions, c(sprintf("%s.%s", 
                .S3_methods_table[, 1L], .S3_methods_table[, 
                  2L]), c(".First.sys", ".OptRequireMethods", 
                "+", "-")))
        else {
            pname <- basename(dir)
            if (pname == "utils") 
                functions <- functions %w/o% "?"
            else if (pname == "grDevices") 
                functions <- functions %w/o% "x11"
        }
        if (.isMethodsDispatchOn()) {
            functions <- setdiff(functions, names(.get_S4_generics(code_env)))
        }
        is_defunct <- function(f) {
            f <- get(f, envir = code_env)
            if (!is.function(f)) 
                return(FALSE)
            b <- body(f)
            repeat {
                if (!is.call(b)) 
                  return(FALSE)
                if ((length(b) > 1L) && (b[[1L]] == as.name("{"))) 
                  b <- b[[2L]]
                else break
            }
            b[[1L]] == as.name(".Defunct")
        }
        functions[!vapply(functions, is_defunct, NA, USE.NAMES = FALSE)]
    }
    objects_missing_from_usages <- if (!has_namespace) 
        character()
    else {
        c(functions_missing_from_usages, setdiff(objects_in_code_not_in_usages, 
            c(functions_in_code, data_sets_in_code)))
    }
    attr(bad_doc_objects, "objects_in_code_not_in_usages") <- objects_in_code_not_in_usages
    attr(bad_doc_objects, "functions_in_code_not_in_usages") <- functions_in_code_not_in_usages
    attr(bad_doc_objects, "functions_in_usages_not_in_code") <- functions_in_usages_not_in_code
    attr(bad_doc_objects, "function_args_in_code") <- function_args_in_code
    attr(bad_doc_objects, "data_sets_in_usages_not_in_code") <- data_sets_in_usages_not_in_code
    if (config_val_to_logical(Sys.getenv("_R_CHECK_CODOC_VARIABLES_IN_USAGES_", 
        "FALSE"))) {
        attr(bad_doc_objects, "variables_in_usages_not_in_code") <- variables_in_usages_not_in_code
    }
    attr(bad_doc_objects, "objects_missing_from_usages") <- objects_missing_from_usages
    attr(bad_doc_objects, "functions_missing_from_usages") <- functions_missing_from_usages
    attr(bad_doc_objects, "has_namespace") <- has_namespace
    attr(bad_doc_objects, "bad_lines") <- bad_lines
    class(bad_doc_objects) <- "codoc"
    bad_doc_objects
}

# Examples
