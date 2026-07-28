#? stdlib
`checkDocStyle` <- function (package, dir, lib.loc = NULL) 
{
    has_namespace <- FALSE
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        dfile <- file.path(dir, "DESCRIPTION")
        meta <- if (file_test("-f", dfile)) 
            .read_description(dfile)
        else character()
        code_dir <- file.path(dir, "R")
        if (!dir.exists(code_dir)) 
            stop(gettextf("directory '%s' does not contain R code", 
                dir), domain = NA)
        if (!.haveRds(dir)) 
            stop(gettextf("directory '%s' does not contain Rd objects", 
                dir), domain = NA)
        package_name <- package
        is_base <- package_name == "base"
        if (!is_base) 
            .load_namespace_quietly(package, dirname(dir))
        code_env <- asNamespace(package)
        objects_in_code <- sort(names(code_env))
        if (!is_base) {
            has_namespace <- TRUE
            ns_S3_methods_db <- getNamespaceInfo(package, "S3methods")
            ns_S3_generics <- as.character(ns_S3_methods_db[, 
                1L])
            ns_S3_methods <- ns_S3_methods_db[, 3L]
            if (!is.character(ns_S3_methods)) {
                ind <- vapply(ns_S3_methods, is.character, NA)
                ns_S3_methods[!ind] <- ""
                ns_S3_methods <- as.character(ns_S3_methods)
            }
        }
    }
    else {
        if (missing(dir)) 
            stop("you must specify 'package' or 'dir'")
        package_name <- basename(dir)
        if (!dir.exists(dir)) 
            stop(gettextf("directory '%s' does not exist", dir), 
                domain = NA)
        else dir <- file_path_as_absolute(dir)
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
        if (file.exists(file.path(dir, "NAMESPACE")) && !inherits(tryCatch(nsInfo <- parseNamespaceFile(package_name, 
            dirname(dir)), error = identity), "error")) {
            has_namespace <- TRUE
            OK <- intersect(objects_in_code, nsInfo$exports)
            for (p in nsInfo$exportPatterns) OK <- c(OK, grep(p, 
                objects_in_code, value = TRUE))
            objects_in_code <- unique(OK)
            ns_S3_methods_db <- .get_namespace_S3_methods_db(nsInfo)
            ns_S3_generics <- ns_S3_methods_db[, 1L]
            ns_S3_methods <- ns_S3_methods_db[, 3L]
        }
    }
    functions_in_code <- Filter(function(f) is.function(get(f, 
        envir = code_env)), objects_in_code)
    all_S3_generics <- .get_S3_generics_in_base()
    if (!is_base) {
        all_S3_generics <- unique(c(Filter(function(f) .is_S3_generic(f, 
            envir = code_env), functions_in_code), if (!missing(package)) .get_S3_generics_in_env(parent.env(code_env)), 
            all_S3_generics))
    }
    code_env <- .make_S3_group_generic_env(parent = code_env)
    methods_stop_list <- nonS3methods(package_name)
    methods_in_package <- Map(function(g) {
        if (!exists(g, envir = code_env)) 
            return(character())
        name <- paste0(g, ".")
        methods <- functions_in_code[startsWith(functions_in_code, 
            name)]
        methods <- setdiff(methods, methods_stop_list)
        if (has_namespace) {
            methods2 <- ns_S3_methods[ns_S3_generics == g]
            OK <- startsWith(methods2, name)
            methods <- c(methods, methods2[OK])
        }
        methods
    }, all_S3_generics)
    all_methods_in_package <- unlist(methods_in_package)
    if (package_name == "cluster") 
        all_methods_in_package <- setdiff(all_methods_in_package, 
            functions_in_code)
    db <- if (!missing(package)) 
        Rd_db(package, lib.loc = dirname(dir))
    else Rd_db(dir = dir)
    db_names <- .Rd_get_names_from_Rd_db(db)
    ind <- db_names %in% paste(package_name, c("deprecated", 
        "defunct"), sep = "-")
    db <- db[!ind]
    db_usages <- lapply(db, function(Rd) {
        Rd <- .Rd_get_section(Rd, "usage")
        .parse_usage_as_much_as_possible(Rd)
    })
    ind <- vapply(db_usages, function(x) !is.null(attr(x, "bad_lines")), 
        NA)
    bad_lines <- lapply(db_usages[ind], attr, "bad_lines")
    bad_doc_objects <- list()
    for (nm in names(db)) {
        exprs <- db_usages[[nm]]
        exprs <- exprs[lengths(exprs) > 1L]
        functions <- vapply(exprs, function(e) as.character(e[[1L]]), 
            "")
        ind <- vapply(exprs, .is_call_from_replacement_function_usage, 
            NA)
        if (any(ind)) {
            replace_funs <- paste0(vapply(exprs[ind], function(e) as.character(e[[2L]][[1L]]), 
                ""), "<-")
            functions <- c(functions, replace_funs)
        }
        methods_with_full_name <- intersect(functions, all_methods_in_package)
        functions <- .transform_S3_method_markup(functions)
        methods_with_generic <- Map(function(g) intersect(functions, 
            methods_in_package[[g]]), intersect(functions, all_S3_generics))
        if ((length(methods_with_generic)) || (length(methods_with_full_name))) 
            bad_doc_objects[[nm]] <- list(withGeneric = methods_with_generic, 
                withFullName = methods_with_full_name)
    }
    attr(bad_doc_objects, "bad_lines") <- bad_lines
    class(bad_doc_objects) <- "checkDocStyle"
    bad_doc_objects
}
