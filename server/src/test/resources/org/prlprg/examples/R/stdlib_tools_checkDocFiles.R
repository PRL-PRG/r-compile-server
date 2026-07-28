#? stdlib
`checkDocFiles` <- function (package, dir, lib.loc = NULL, chkInternal = NULL) 
{
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
    }
    else {
        if (missing(dir)) 
            stop("you must specify 'package' or 'dir'")
        if (!dir.exists(dir)) 
            stop(gettextf("directory '%s' does not exist", dir), 
                domain = NA)
        else dir <- file_path_as_absolute(dir)
    }
    check_internal_specially <- FALSE
    if (is.null(chkInternal) || !is.logical(chkInternal) || (length(chkInternal) != 
        1L) || is.na(chkInternal)) 
        chkInternal <- check_internal_specially <- TRUE
    db <- if (!missing(package)) 
        Rd_db(package, lib.loc = dirname(dir))
    else Rd_db(dir = dir)
    db_aliases <- lapply(db, .Rd_get_metadata, "alias")
    db_keywords <- lapply(db, .Rd_get_metadata, "keyword")
    db_usages <- lapply(db, .Rd_get_section, "usage")
    db_usage_texts <- lapply(db_usages, function(e) .Rd_deparse(.Rd_drop_comments(e)))
    db_usages <- lapply(db_usages, .parse_usage_as_much_as_possible)
    ind <- vapply(db_usages, function(x) !is.null(attr(x, "bad_lines")), 
        NA)
    bad_lines <- lapply(db_usages[ind], attr, "bad_lines")
    db_argument_names <- lapply(db, .Rd_get_argument_names)
    bad_doc_objects <- list()
    all_special <- (length(bad_lines) == 0L)
    for (nm in names(db)) {
        exprs <- db_usages[[nm]]
        if (!length(exprs)) 
            next
        internal <- "internal" %in% db_keywords[[nm]]
        if (internal && !chkInternal) 
            next
        special <- (internal && check_internal_specially)
        aliases <- db_aliases[[nm]]
        arg_names_in_arg_list <- db_argument_names[[nm]]
        ind <- vapply(exprs, function(e) length(e) > 1L && !is_data_for_dataset(e), 
            NA, USE.NAMES = FALSE)
        exprs <- exprs[ind]
        ind <- vapply(exprs, .is_call_from_replacement_function_usage, 
            NA, USE.NAMES = FALSE)
        replace_exprs <- exprs[ind]
        exprs <- exprs[!ind]
        functions <- vapply(exprs, function(e) as.character(e[[1L]]), 
            "")
        ind <- functions %in% c("<-", "=")
        assignments <- exprs[ind]
        if (any(ind)) {
            exprs <- exprs[!ind]
            functions <- functions[!ind]
        }
        arg_names_in_usage <- unlist(lapply(exprs, function(e) .arg_names_from_call(e[-1L])))
        if (length(replace_exprs)) {
            replace_funs <- paste0(vapply(replace_exprs, function(e) as.character(e[[2L]][[1L]]), 
                ""), "<-")
            functions <- c(functions, replace_funs)
            arg_names_in_usage <- c(arg_names_in_usage, unlist(lapply(replace_exprs, 
                function(e) c(.arg_names_from_call(e[[2L]][-1L]), 
                  .arg_names_from_call(e[[3L]])))))
        }
        functions <- .transform_S3_method_markup(functions)
        functions <- .transform_S4_method_markup(functions)
        arg_names_in_usage_missing_in_arg_list <- if (special) 
            NULL
        else setdiff(arg_names_in_usage, arg_names_in_arg_list)
        arg_names_in_arg_list_missing_in_usage <- setdiff(arg_names_in_arg_list, 
            arg_names_in_usage)
        if (length(arg_names_in_arg_list_missing_in_usage)) {
            usage_text <- db_usage_texts[[nm]]
            bad_args <- character()
            bad <- !grepl("^[[:alnum:]._]+$", arg_names_in_arg_list_missing_in_usage)
            if (any(bad)) {
                bad_args <- arg_names_in_arg_list_missing_in_usage[bad]
                arg_names_in_arg_list_missing_in_usage <- arg_names_in_arg_list_missing_in_usage[!bad]
            }
            bad <- vapply(arg_names_in_arg_list_missing_in_usage, 
                function(x) !grepl(paste0("(^|\\W)", reQuote(x), 
                  "($|\\W)"), gsub("\\\\dots", "...", usage_text)), 
                NA)
            arg_names_in_arg_list_missing_in_usage <- c(bad_args, 
                arg_names_in_arg_list_missing_in_usage[as.logical(bad)])
        }
        functions_not_in_aliases <- if (!any(endsWith(aliases, 
            "-deprecated"))) {
            aliases <- sub("([^,]+),(.+)-method$", "\\\\S4method{\\1}{\\2}", 
                aliases)
            aliases <- gsub("\\%", "%", aliases, fixed = TRUE)
            setdiff(functions, aliases)
        }
        else character()
        if ((length(arg_names_in_usage_missing_in_arg_list)) || 
            anyDuplicated(arg_names_in_arg_list) || (length(arg_names_in_arg_list_missing_in_usage)) || 
            (length(functions_not_in_aliases)) || (length(assignments))) {
            bad_doc_objects[[nm]] <- list(missing = arg_names_in_usage_missing_in_arg_list, 
                duplicated = arg_names_in_arg_list[duplicated(arg_names_in_arg_list)], 
                overdoc = arg_names_in_arg_list_missing_in_usage, 
                unaliased = functions_not_in_aliases, assignments = assignments)
            if (!special) 
                all_special <- FALSE
        }
    }
    structure(bad_doc_objects, class = "checkDocFiles", bad_lines = bad_lines, 
        all_special = all_special)
}
