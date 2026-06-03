#? stdlib
`insertSource` <- function (source, package = "", functions = allPlainObjects(), 
    methods = (if (missing(functions)) allMethodTables() else NULL), 
    force = missing(functions) & missing(methods)) 
{
    MPattern <- .TableMetaPattern()
    CPattern <- .ClassMetaPattern()
    allPlainObjects <- function() allObjects[!(grepl(MPattern, 
        allObjects) | grepl(CPattern, allObjects) | ".cacheOnAssign" == 
        allObjects)]
    allMethodTables <- function() allObjects[grepl(MPattern, 
        allObjects)]
    differs <- function(f1, f2) !(identical(body(f1), body(f2)) && 
        identical(args(f1), args(f2)))
    if (is.environment(source) && !nzchar(package)) {
        if (is(source, "sourceEnvironment")) 
            package <- source@packageName
        else if (exists(".packageName", envir = source, inherits = FALSE)) 
            package <- get(".packageName", envir = source)
    }
    if (is(source, "environment")) 
        env <- source
    else env <- evalSource(source, package, FALSE)
    envPackage <- getPackageName(env, FALSE)
    envp <- parent.env(env)
    if (identical(envp, .GlobalEnv) || !nzchar(envPackage)) {
        if (!nzchar(package)) 
            package <- .guessPackageName(env)
        if (identical(package, ".GlobalEnv")) 
            envns <- NULL
        else {
            pname <- paste0("package:", package)
            envp <- tryCatch(as.environment(pname), error = function(cond) NULL)
            if (is.null(envp)) {
                envp <- tryCatch(as.environment(pname), error = function(cond) NULL)
                if (is.null(envp)) 
                  stop(gettextf("cannot find an environment corresponding to package name '%s\"", 
                    package), domain = NA)
            }
            envns <- tryCatch(asNamespace(package), error = function(cond) NULL)
        }
        if (nzchar(package)) 
            assign(".packageName", package, envir = env)
    }
    else {
        if (isNamespace(envp)) 
            envns <- envp
        else envns <- tryCatch(asNamespace(package), error = function(cond) NULL)
    }
    if (nzchar(envPackage) && envPackage != package) 
        warning(gettextf("supplied package, %s, differs from package inferred from source, %s", 
            sQuote(package), sQuote(envPackage)), domain = NA)
    packageSlot(env) <- package
    allObjects <- names(env)
    if (!missing(functions)) {
        notThere <- is.na(match(functions, allObjects))
        if (any(notThere)) {
            warning(gettextf("cannot insert these (not found in source): %s", 
                paste0("\"", functions[notThere], "\"", collapse = ", ")), 
                domain = NA)
        }
    }
    .mnames <- allMethodTables()
    if (length(methods) > 0) {
        notThere <- vapply(methods, function(fname) length(grep(fname, 
            .mnames, fixed = TRUE)) == 0, NA)
        if (any(notThere)) {
            warning(gettextf("cannot insert methods for these functions (methods table not found in source): %s", 
                paste0("\"", methods[notThere], "\"", collapse = ", ")), 
                domain = NA)
            methods <- methods[!notThere]
        }
        methodNames <- vapply(methods, function(fname) .mnames[[grep(fname, 
            .mnames, fixed = TRUE)[[1]]]], "")
    }
    else {
        methodNames <- .mnames
        methods <- sub(.TableMetaPrefix(), "", methodNames)
        methods <- sub(":.*", "", methods)
    }
    notTraceable <- newObjects <- objectsDone <- character()
    for (i in seq_along(functions)) {
        this <- functions[[i]]
        thisWhere <- NULL
        if (is.null(envns) || exists(this, envir = envp, inherits = FALSE)) {
            envwhere <- envp
            thisWhere <- get(this, envir = envp)
        }
        else {
            envwhere <- envns
            if (is.environment(envns) && exists(this, envir = envns, 
                inherits = FALSE)) 
                thisWhere <- get(this, envir = envns)
        }
        thisObj <- get(this, envir = env)
        if (is.function(thisObj) && is.function(thisWhere) && 
            differs(thisObj, thisWhere)) {
            suppressMessages(.TraceWithMethods(this, where = envwhere, 
                edit = env))
            objectsDone <- c(objectsDone, this)
        }
        else if (force) 
            assign(this, thisObj, envir = envwhere)
        else if (!is.function(thisObj)) 
            notTraceable <- c(notTraceable, this)
        else if (is.null(thisWhere)) 
            newObjects <- c(newObjects, this)
    }
    if (length(notTraceable) > 0) 
        message(gettextf("Non-function objects are not currently inserted (not traceable): %s", 
            paste(notTraceable, collapse = ", ")), domain = NA)
    if (length(newObjects) > 0) 
        message(gettextf("New functions are not currently inserted (not untraceable): %s", 
            paste(newObjects, collapse = ", ")), domain = NA)
    if (length(objectsDone) > 0) 
        message(gettextf("Modified functions inserted through trace(): %s", 
            paste(objectsDone, collapse = ", ")), domain = NA)
    for (i in seq_along(methods)) {
        .copyMethods(methods[[i]], methodNames[[i]], env, envp)
    }
    if (!is.environment(source)) {
        lockEnvironment(env, bindings = TRUE)
        invisible(env)
    }
    else invisible(source)
}
