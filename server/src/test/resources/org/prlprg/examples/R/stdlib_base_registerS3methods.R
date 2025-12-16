#? stdlib
`registerS3methods` <- function (info, package, env) 
{
    n <- NROW(info)
    if (n == 0L) 
        return()
    assignWrapped <- function(x, method, home, envir) {
        method <- method
        home <- home
        delayedAssign(x, get(method, envir = home), assign.env = envir)
    }
    overwrite <- matrix(NA_character_, 0, 2)
    .registerS3method <- function(genname, class, method, nm, 
        envir) {
        defenv <- if (!is.na(w <- .knownS3Generics[genname])) 
            asNamespace(w)
        else {
            if (is.null(genfun <- get0(genname, envir = parent.env(envir)))) 
                stop(gettextf("object '%s' not found whilst loading namespace '%s'", 
                  genname, package), call. = FALSE, domain = NA)
            if (.isMethodsDispatchOn() && methods::is(genfun, 
                "genericFunction")) 
                genfun <- genfun@default
            if (typeof(genfun) == "closure") 
                environment(genfun)
            else .BaseNamespaceEnv
        }
        if (is.null(table <- defenv[[".__S3MethodsTable__."]])) {
            table <- new.env(hash = TRUE, parent = baseenv())
            defenv[[".__S3MethodsTable__."]] <- table
        }
        e <- tryCatch(table[[nm]], error = function(e) NULL)
        if (!is.null(e) && !identical(e, get(method, envir = envir))) {
            current <- environmentName(environment(e))
            overwrite <<- rbind(overwrite, c(as.vector(nm), current))
        }
        assignWrapped(nm, method, home = envir, envir = table)
    }
    methname <- paste(info[, 1], info[, 2], sep = ".")
    z <- is.na(info[, 3])
    info[z, 3] <- methname[z]
    if (ncol(info) == 3L) 
        info <- cbind(info, NA_character_)
    Info <- cbind(info[, 1L:3L, drop = FALSE], methname, info[, 
        4L])
    loc <- names(env)
    if (any(notex <- match(info[, 3L], loc, nomatch = 0L) == 
        0L)) {
        found <- vapply(info[notex, 3L], exists, logical(1), 
            envir = parent.env(env))
        notex[notex] <- !found
        if (any(notex)) {
            warning(sprintf(ngettext(sum(notex), "S3 method %s was declared in NAMESPACE but not found", 
                "S3 methods %s were declared in NAMESPACE but not found"), 
                paste(sQuote(info[notex, 3]), collapse = ", ")), 
                call. = FALSE, domain = NA)
            Info <- Info[!notex, , drop = FALSE]
        }
    }
    eager <- is.na(Info[, 5L])
    delayed <- Info[!eager, , drop = FALSE]
    Info <- Info[eager, , drop = FALSE]
    l2 <- localGeneric <- Info[, 1] %in% loc
    if (.isMethodsDispatchOn()) 
        for (i in which(localGeneric)) {
            genfun <- get(Info[i, 1], envir = env)
            if (methods::is(genfun, "genericFunction")) {
                localGeneric[i] <- FALSE
                registerS3method(Info[i, 1], Info[i, 2], Info[i, 
                  3], env)
            }
        }
    if (any(localGeneric)) {
        lin <- Info[localGeneric, , drop = FALSE]
        S3MethodsTable <- env[[".__S3MethodsTable__."]]
        .Internal(importIntoEnv(S3MethodsTable, lin[, 4], env, 
            lin[, 3]))
    }
    fin <- Info[!l2, , drop = FALSE]
    for (i in seq_len(nrow(fin))) .registerS3method(fin[i, 1], 
        fin[i, 2], fin[i, 3], fin[i, 4], env)
    if (package != "MASS" && nrow(overwrite)) {
        .fmt <- function(o) {
            sprintf("  %s %s", format(c("method", o[, 1L])), 
                format(c("from", o[, 2L])))
        }
        overwrite <- overwrite[overwrite[, 2L] != package, , 
            drop = FALSE]
        if (Sys.getenv("_R_LOAD_CHECK_OVERWRITE_S3_METHODS_") %in% 
            c(package, "all")) {
            ind <- overwrite[, 2L] %in% unlist(tools:::.get_standard_package_names(), 
                use.names = FALSE)
            bad <- overwrite[ind, , drop = FALSE]
            if (nr <- nrow(bad)) {
                msg <- ngettext(nr, "Registered S3 method from a standard package overwritten by '%s':", 
                  "Registered S3 methods from standard package(s) overwritten by '%s':", 
                  domain = NA)
                msg <- paste(c(sprintf(msg, package), .fmt(bad)), 
                  collapse = "\n")
                message(msg, domain = NA)
                overwrite <- overwrite[!ind, , drop = FALSE]
            }
        }
        if ((nr <- nrow(overwrite)) && is.na(match(tolower(Sys.getenv("_R_S3_METHOD_REGISTRATION_NOTE_OVERWRITES_")), 
            c("0", "no", "false"))) && (!is.na(match(Sys.getenv("_R_CHECK_PACKAGE_NAME_"), 
            c("", package))))) {
            msg <- ngettext(nr, "Registered S3 method overwritten by '%s':", 
                "Registered S3 methods overwritten by '%s':", 
                domain = NA)
            msg <- paste(c(sprintf(msg, package), .fmt(overwrite)), 
                collapse = "\n")
            packageStartupMessage(msg, domain = NA)
        }
    }
    register_S3_method_delayed <- function(pkg, gen, cls, fun) {
        pkg <- pkg
        gen <- gen
        cls <- cls
        fun <- fun
        if (isNamespaceLoaded(pkg)) {
            registerS3method(gen, cls, fun, envir = asNamespace(pkg))
        }
        setHook(packageEvent(pkg, "onLoad"), function(...) {
            registerS3method(gen, cls, fun, envir = asNamespace(pkg))
        })
    }
    if (nrow(delayed)) {
        for (i in seq_len(nrow(delayed))) {
            gen <- delayed[i, 1L]
            cls <- delayed[i, 2L]
            fun <- get(delayed[i, 3L], envir = env)
            pkg <- delayed[i, 5L]
            register_S3_method_delayed(pkg, gen, cls, fun)
        }
    }
    nsI <- getNamespaceInfo(env, "S3methods")
    if (!is.null(p1 <- ncol(nsI)) && !is.null(p2 <- ncol(info)) && 
        p1 != p2) 
        stop(gettextf(paste("While loading namespace \"%s\": \"%s\" differ in ncol(.), env=%d, newNS=%d.", 
            "Maybe package installed with version of R newer than %s ?", 
            sep = "\n"), package, "S3methods", p1, p2, getRversion()), 
            domain = NA)
    setNamespaceInfo(env, "S3methods", rbind(info, nsI))
}
