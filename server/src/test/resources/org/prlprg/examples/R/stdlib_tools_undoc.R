#? stdlib
`undoc` <- function (package, dir, lib.loc = NULL) 
{
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dirdir <- dirname(dir <- find.package(package, lib.loc))
        is_base <- package == "base"
        all_doc_topics <- Rd_aliases(package, lib.loc = dirdir)
        if (!is_base) 
            .load_package_quietly(package, dirdir)
        code_env <- .package_env(package)
        code_objs <- ls(envir = code_env, all.names = TRUE)
        pkgname <- package
    }
    else {
        if (missing(dir)) 
            stop("you must specify 'package' or 'dir'")
        pkgname <- basename(dir)
        dirdir <- dirname(dir)
        if (!dir.exists(dir)) 
            stop(gettextf("directory '%s' does not exist", dir), 
                domain = NA)
        else dir <- file_path_as_absolute(dir)
        is_base <- pkgname == "base"
        all_doc_topics <- Rd_aliases(dir = dir)
        code_env <- new.env(hash = TRUE)
        code_dir <- file.path(dir, "R")
        if (dir.exists(code_dir)) {
            dfile <- file.path(dir, "DESCRIPTION")
            meta <- if (file_test("-f", dfile)) 
                .read_description(dfile)
            else character()
            .source_assignments_in_code_dir(code_dir, code_env, 
                meta)
            sys_data_file <- file.path(code_dir, "sysdata.rda")
            if (file_test("-f", sys_data_file)) 
                load(sys_data_file, code_env)
        }
        code_objs <- ls(envir = code_env, all.names = TRUE)
        if (file.exists(file.path(dir, "NAMESPACE")) && !inherits(tryCatch(nsInfo <- parseNamespaceFile(pkgname, 
            dirdir), error = identity), "error")) {
            OK <- intersect(code_objs, nsInfo$exports)
            for (p in nsInfo$exportPatterns) OK <- c(OK, grep(p, 
                code_objs, value = TRUE))
            code_objs <- unique(OK)
        }
    }
    data_dir <- file.path(dir, "data")
    data_objs <- if (dir.exists(data_dir)) 
        unlist(.try_quietly(list_data_in_pkg(dir = dir)), use.names = FALSE)
    else character()
    if (!missing(package) && !length(code_objs) && !length(data_objs) && 
        getOption("verbose")) 
        message("neither code nor data objects found")
    if (!is_base) {
        if (!config_val_to_logical(Sys.getenv("_R_CHECK_UNDOC_USE_ALL_NAMES_", 
            "FALSE"))) 
            code_objs <- grep("^[^.].*", code_objs, value = TRUE)
        else {
            code_objs <- code_objs %w/o% c(".Depends")
            code_objs <- code_objs[!(startsWith(code_objs, ".__C__") | 
                startsWith(code_objs, ".__T__"))]
        }
        if (.isMethodsDispatchOn()) {
            is <- methods::is
            code_objs <- Filter(function(f) {
                fdef <- code_env[[f]]
                if (suppressMessages(is(fdef, "genericFunction"))) 
                  fdef@package == pkgname
                else TRUE
            }, code_objs)
        }
        code_objs <- setdiff(code_objs, c("Arith", "Compare", 
            "Complex", "Logic", "Math", "Math2", "Ops", "Summary", 
            "matrixOps"))
    }
    undoc_things <- list(`code objects` = unique(setdiff(code_objs, 
        all_doc_topics)), `data sets` = unique(setdiff(data_objs, 
        all_doc_topics)))
    if (.isMethodsDispatchOn()) {
        S4_classes <- methods::getClasses(code_env)
        S4_classes <- S4_classes[vapply(S4_classes, utils:::topicName, 
            " ", type = "class", USE.NAMES = FALSE) %notin% all_doc_topics]
        undoc_things <- c(undoc_things, list(`S4 classes` = unique(S4_classes)))
    }
    if (.isMethodsDispatchOn()) {
        .make_S4_method_siglist <- function(g) {
            mlist <- .get_S4_methods_list(g, code_env)
            sigs <- .make_siglist(mlist)
            if (length(sigs)) 
                paste0(g, ",", sigs)
            else character()
        }
        S4_methods <- lapply(.get_S4_generics(code_env), .make_S4_method_siglist)
        S4_methods <- as.character(unlist(S4_methods, use.names = FALSE))
        S4_methods <- S4_methods[vapply(S4_methods, utils:::topicName, 
            " ", type = "method", USE.NAMES = FALSE) %notin% 
            all_doc_topics]
        undoc_things <- c(undoc_things, list(`S4 methods` = unique(sub("([^,]*),(.*)", 
            "generic '\\1' and siglist '\\2'", S4_methods))))
    }
    if (is_base) {
        ff <- as.list(baseenv(), all.names = TRUE)
        prims <- names(ff)[vapply(ff, is.primitive, NA)]
        prototypes <- sort(c(names(.ArgsEnv), names(.GenericArgsEnv)))
        extras <- setdiff(prototypes, prims)
        if (length(extras)) 
            undoc_things <- c(undoc_things, list(prim_extra = extras))
        miss <- setdiff(prims, c(langElts, prototypes))
        if (length(miss)) 
            undoc_things <- c(undoc_things, list(primitives = miss))
    }
    class(undoc_things) <- "undoc"
    undoc_things
}

# Examples
undoc("tools")                  # Undocumented objects in 'tools'

