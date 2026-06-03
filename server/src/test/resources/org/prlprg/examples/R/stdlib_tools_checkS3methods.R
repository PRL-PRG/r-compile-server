#? stdlib
`checkS3methods` <- function (package, dir, lib.loc = NULL) 
{
    S3_methods_info <- matrix(character(), 0L, 4L)
    exports <- character()
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
        if (!is_base) {
            S3_methods_info <- getNamespaceInfo(code_env, "S3methods")
            exports <- getNamespaceExports(code_env)
        }
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
        code_env <- new.env(hash = TRUE, parent = .BaseNamespaceEnv)
        dfile <- file.path(dir, "DESCRIPTION")
        meta <- if (file_test("-f", dfile)) 
            .read_description(dfile)
        else character()
        .source_assignments_in_code_dir(code_dir, code_env, meta)
        sys_data_file <- file.path(code_dir, "sysdata.rda")
        if (file_test("-f", sys_data_file)) 
            load(sys_data_file, code_env)
        objects_in_code <- sort(names(code_env))
        if (file.exists(file.path(dir, "NAMESPACE")) && !inherits(tryCatch(nsInfo <- parseNamespaceFile(basename(dir), 
            dirname(dir)), error = identity), "error")) {
            exports <- intersect(objects_in_code, nsInfo$exports)
            for (p in nsInfo$exportPatterns) exports <- c(exports, 
                grep(p, objects_in_code, value = TRUE))
            exports <- unique(exports)
            S3_methods_info <- .get_namespace_S3_methods_db(nsInfo)
        }
    }
    funs_in_env <- function(env, nms = NULL) {
        if (is.null(nms)) 
            nms <- names(env)
        Filter(function(f) is.function(env[[f]]), nms)
    }
    gens_in_env <- function(env, nms = NULL) {
        if (is.null(nms)) 
            nms <- names(env)
        Filter(function(f) .is_S3_generic(f, env), nms)
    }
    S3_group_generics_env <- .make_S3_group_generic_env()
    S3_primitive_generics_env <- .make_S3_primitive_generic_env()
    nfg <- function(gname, env) {
        gcode <- get0(gname, envir = env, mode = "function")
        if (gname %in% names(S3_group_generics_env)) {
            if (is.null(gcode) || identical(gcode, get0(gname, 
                .BaseNamespaceEnv))) 
                gcode <- S3_group_generics_env[[gname]]
        }
        else if (is.primitive(gcode)) 
            gcode <- S3_primitive_generics_env[[gname]]
        if (!is.null(gcode)) 
            names(formals(gcode))
        else NULL
    }
    nff <- function(f) names(formals(f))
    one <- function(e) {
        gname <- e[[1L]]
        gargs <- nfg(gname, code_env)
        mname <- sprintf("%s.%s", e[[1L]], e[[2L]])
        mcode <- if (is.character(v <- e[[3L]])) 
            get0(v, envir = code_env)
        else v
        margs <- if (!is.null(mcode)) 
            nff(mcode)
        else NULL
        list(gname, gargs, mname, margs)
    }
    gen_dot_cls_matches <- function(g, nms) {
        if (length(g) != 1L) 
            return(character())
        else nms[startsWith(nms, paste0(g, "."))]
    }
    methods_not_registered_with_exported_generic <- g.c <- character()
    functions_in_code <- funs_in_env(code_env)
    generics_in_base <- unique(c(gens_in_env(.BaseNamespaceEnv), 
        names(S3_group_generics_env), names(S3_primitive_generics_env), 
        .get_internal_S3_generics()))
    if (is_base) {
        generics <- generics_in_code <- generics_in_base
    }
    else {
        generics_in_code <- gens_in_env(code_env)
        generics <- c(generics_in_code, if (!missing(package)) setdiff(gens_in_env(parent.env(code_env)), 
            functions_in_code), setdiff(generics_in_base, c(functions_in_code, 
            funs_in_env(parent.env(code_env)))))
    }
    nsm <- nonS3methods(basename(dir))
    gnm <- lapply(generics, function(g) {
        methods <- gen_dot_cls_matches(g, functions_in_code)
        if ((n <- length(methods)) > 0L) {
            gargs <- nfg(g, code_env)
            entries <- lapply(methods, function(m) {
                list(g, gargs, m, nff(code_env[[m]]))
            })
            names(entries) <- methods
            entries
        }
        else NULL
    })
    gnm <- do.call(c, gnm)
    gnm <- gnm[setdiff(names(gnm), nsm)]
    if (!is_base) {
        g.c <- sprintf("%s.%s", S3_methods_info[, 1L], S3_methods_info[, 
            2L])
        ind <- (vapply(gnm, `[[`, "", 1L) %in% intersect(generics_in_code, 
            exports))
        methods_not_registered_with_exported_generic <- setdiff(names(gnm)[ind], 
            c(g.c, nsm))
        S3_methods_info <- S3_methods_info[!(g.c %in% names(gnm)), 
            , drop = FALSE]
        S3_methods_info <- S3_methods_info[is.na(as.character(S3_methods_info[, 
            4L])), , drop = FALSE]
        if (NROW(S3_methods_info)) {
            add <- apply(S3_methods_info, 1L, one, simplify = FALSE)
            names(add) <- vapply(add, `[[`, "", 3L)
            gnm <- c(gnm, add)
        }
    }
    check_args <- function(gName, gArgs, mName, mArgs) {
        if (is.null(gArgs) || is.null(mArgs)) 
            return()
        if (gName == "round" && length(mArgs) >= 1 && mArgs[[1]] == 
            "x") 
            return()
        if (gName == "plot") 
            gArgs <- gArgs[-2L]
        ogArgs <- gArgs
        omArgs <- mArgs
        if (endsWith(mName, ".formula")) {
            if (gArgs[1L] != "...") 
                gArgs <- gArgs[-1L]
            if (mArgs[1L] != "...") 
                mArgs <- mArgs[-1L]
        }
        dotsPos <- which(gArgs == "...")
        ipos <- if (length(dotsPos)) 
            seq_len(dotsPos[1L] - 1L)
        else seq_along(gArgs)
        dotsPos <- which(mArgs == "...")
        if (length(dotsPos)) 
            ipos <- ipos[seq_len(dotsPos[1L] - 1L)]
        posMatchOK <- identical(gArgs[ipos], mArgs[ipos])
        argMatchOK <- all(gArgs %in% mArgs) || length(dotsPos) > 
            0L
        margMatchOK <- all(mArgs %in% c("...", gArgs)) || "..." %in% 
            ogArgs
        if (posMatchOK && argMatchOK && margMatchOK) 
            NULL
        else if (gName %in% c("+", "-", "*", "/", "^", "%%", 
            "%/%", "&", "|", "!", "==", "!=", "<", "<=", ">=", 
            ">") && (length(ogArgs) == length(omArgs))) 
            NULL
        else {
            l <- list(ogArgs, omArgs)
            names(l) <- c(gName, mName)
            l
        }
    }
    bad_methods <- Filter(length, lapply(gnm, function(e) do.call(check_args, 
        e)))
    if (length(bad_methods) && !is_base) {
        gen <- vapply(bad_methods, function(e) names(e)[1L], 
            "")
        i1 <- !(names(bad_methods) %in% g.c)
        if (any(i3 <- i1 & (gen %in% generics_in_base))) {
            p3 <- which(i3)
            gennames <- intersect(gen, generics_in_base)
            predicate <- function(e) {
                (is.call(e) && ((is.name(x <- e[[1L]]) && (as.character(x) %in% 
                  gennames)) || (is.call(x <- e[[1L]]) && is.name(x[[1L]]) && 
                  (as.character(x[[1L]]) == "::") && (as.character(x[[2L]]) == 
                  "base") && (as.character(x[[3L]]) %in% gennames))))
            }
            calls <- lapply(code_env, .find_calls, predicate, 
                recursive = TRUE)
            used <- (gen[p3] %in% unique(.call_names(unlist(calls))))
            if (!all(used)) {
                keep <- -p3[!used]
                bad_methods <- bad_methods[keep]
                gen <- gen[keep]
                i1 <- i1[keep]
            }
        }
        i2 <- !(gen %in% generics)
        if (any(i2) && .isMethodsDispatchOn()) {
            p2 <- which(i2)
            i2[p2] <- !vapply(gen[p2], function(g) {
                gcode <- get0(g, code_env)
                if (is.null(gcode)) 
                  FALSE
                else methods::is(gcode, "genericFunction")
            }, NA)
        }
        if (any(i1) || any(i2)) {
            i3 <- (gen %in% generics_in_code)
            bad_methods_not_registered_with_generic_in_code <- bad_methods[i1 & 
                i3]
            bad_methods_not_registered_with_generic_not_in_code <- bad_methods[i1 & 
                !i3]
            bad_methods_registered_for_non_generic <- bad_methods[i2]
            bad_methods <- bad_methods[!i1 & !i2]
            if (length(bad_methods_not_registered_with_generic_in_code)) 
                attr(bad_methods, "bad_methods_not_registered_with_generic_in_code") <- bad_methods_not_registered_with_generic_in_code
            if (length(bad_methods_not_registered_with_generic_not_in_code)) 
                attr(bad_methods, "bad_methods_not_registered_with_generic_not_in_code") <- bad_methods_not_registered_with_generic_not_in_code
            if (length(bad_methods_registered_for_non_generic)) 
                attr(bad_methods, "bad_methods_registered_for_non_generic") <- bad_methods_registered_for_non_generic
        }
    }
    if (length(methods_not_registered_with_exported_generic)) 
        attr(bad_methods, "methods_not_registered_with_exported_generic") <- methods_not_registered_with_exported_generic
    class(bad_methods) <- "checkS3methods"
    bad_methods
}
