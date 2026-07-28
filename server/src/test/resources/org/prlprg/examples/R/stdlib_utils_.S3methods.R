#? stdlib
`.S3methods` <- function (generic.function, class, envir = parent.frame(), all.names = FALSE, 
    dropPath = FALSE, useEnv = FALSE) 
{
    rbindSome <- function(df, nms, msg) {
        nms <- unique(nms)
        n2 <- length(nms)
        dnew <- data.frame(visible = rep.int(FALSE, n2), from = rep.int(msg, 
            n2), row.names = nms)
        n <- nrow(df)
        if (n == 0L) 
            return(dnew)
        keep <- !duplicated(c(rownames(df), rownames(dnew)))
        rbind(df[keep[1L:n], ], dnew[keep[(n + 1L):(n + n2)], 
            ])
    }
    S3MethodsStopList <- tools::nonS3methods(NULL)
    knownGenerics <- getKnownS3generics()
    methods.called <- identical(sys.call(-1)[[1]], as.symbol("methods"))
    if (useEnv) {
        attach(envir, pos = 2L, warn.conflicts = FALSE)
        if (methods.called) 
            message("some methods may be unavailable outside of their namespace")
        on.exit(detach(2L))
    }
    sp <- search()
    if (dropPath) 
        sp <- sp[c(if (useEnv) 1:2 else 1L, length(sp))]
    an <- lapply(sp, ls, all.names = all.names)
    lens <- lengths(an)
    an <- unlist(an, use.names = FALSE)
    names(an) <- rep.int(sp, lens)
    an <- an[!duplicated(an)]
    info <- data.frame(visible = rep.int(TRUE, length(an)), from = .rmpkg(names(an)), 
        row.names = an)
    if (!missing(generic.function)) {
        if (!is.character(generic.function)) 
            generic.function <- deparse1(substitute(generic.function))
        if (!exists(generic.function, mode = "function", envir = envir) && 
            !any(generic.function == c("Math", "Ops", "Complex", 
                "Summary", "matrixOps"))) 
            stop(gettextf("no function '%s' is visible", generic.function), 
                domain = NA)
        warn.not.generic <- FALSE
        if (!any(generic.function == knownGenerics)) {
            truegf <- findGeneric(generic.function, envir, warnS4only = !methods.called)
            if (truegf == "") 
                warn.not.generic <- TRUE
            else if (truegf != generic.function) {
                warning(gettextf("generic function '%s' dispatches methods for generic '%s'", 
                  generic.function, truegf), domain = NA)
                generic.function <- truegf
            }
        }
        info <- info[startsWith(row.names(info), paste0(generic.function, 
            ".")), ]
        info <- info[!row.names(info) %in% S3MethodsStopList, 
            ]
        if (nrow(info)) {
            keep <- vapply(row.names(info), exists, logical(1), 
                mode = "function")
            info <- info[keep, ]
        }
        if (warn.not.generic && nrow(info)) 
            warning(gettextf("function '%s' appears not to be S3 generic; found functions that look like S3 methods", 
                generic.function), domain = NA)
        defenv <- if (!is.na(w <- .knownS3Generics[generic.function])) 
            asNamespace(w)
        else {
            genfun <- get(generic.function, mode = "function", 
                envir = envir)
            if (.isMethodsDispatchOn() && methods::is(genfun, 
                "genericFunction")) 
                genfun <- methods::finalDefaultMethod(genfun@default)
            .defenv_for_S3_registry(genfun)
        }
        S3reg <- names(get(".__S3MethodsTable__.", envir = defenv))
        S3reg <- S3reg[startsWith(S3reg, paste0(generic.function, 
            "."))]
        if (length(S3reg)) 
            info <- rbindSome(info, S3reg, msg = paste("registered S3method for", 
                generic.function))
        if (generic.function == "all") 
            info <- info[-grep("^all\\.equal", row.names(info)), 
                ]
    }
    else if (!missing(class)) {
        if (!is.character(class)) 
            class <- deparse1(substitute(class))
        if (length(class) > 1L) {
            warning("'class' is of length > 1; only the first element will be used")
            class <- class[1L]
        }
        name <- paste0(".", class, "$")
        name <- gsub("([.[])", "\\\\\\1", name)
        info <- info[grep(name, row.names(info)), ]
        info <- info[!row.names(info) %in% S3MethodsStopList, 
            ]
        if (nrow(info)) {
            possible.generics <- gsub(name, "", row.names(info))
            keep <- vapply(possible.generics, function(nm) {
                if (nm %in% knownGenerics) 
                  return(TRUE)
                where <- find(nm, mode = "function")
                if (length(where)) 
                  any(vapply(where, function(w) nzchar(findGeneric(nm, 
                    envir = as.environment(w))), NA))
                else FALSE
            }, logical(1))
            info <- info[keep, ]
        }
        S3reg <- unlist(lapply(loadedNamespaces(), function(i) ls(getNamespace(i)[[".__S3MethodsTable__."]], 
            pattern = name, all.names = all.names)))
        if (length(S3reg)) 
            S3reg <- S3reg[vapply(gsub(name, "", S3reg), exists, 
                NA)]
        if (length(S3reg)) 
            info <- rbindSome(info, S3reg, msg = "registered S3method")
    }
    else stop("must supply 'generic.function' or 'class'")
    info$generic <- if (!missing(generic.function)) 
        rep.int(generic.function, nrow(info))
    else sub(paste0("\\.", class, "$"), "", row.names(info))
    info$isS4 <- rep.int(FALSE, nrow(info))
    info <- info[sort.list(row.names(info)), , drop = FALSE]
    res <- row.names(info)
    class(res) <- "MethodsFunction"
    attr(res, "info") <- info
    attr(res, "byclass") <- missing(generic.function)
    res
}
