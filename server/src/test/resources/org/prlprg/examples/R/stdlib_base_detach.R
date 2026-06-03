#? stdlib
`detach` <- function (name, pos = 2L, unload = FALSE, character.only = FALSE, 
    force = FALSE) 
{
    if (!missing(name)) {
        if (!character.only) 
            name <- substitute(name)
        pos <- if (is.numeric(name)) 
            name
        else {
            if (!is.character(name)) 
                name <- deparse1(name)
            match(name, search())
        }
        if (is.na(pos)) 
            stop("invalid 'name' argument")
    }
    packageName <- search()[[pos]]
    if (!startsWith(packageName, "package:")) 
        return(invisible(.Internal(detach(pos))))
    pkgname <- .rmpkg(packageName)
    for (pkg in search()[-1L]) {
        if (startsWith(pkg, "package:") && exists(".Depends", 
            pkg, inherits = FALSE) && pkgname %in% get(".Depends", 
            pkg, inherits = FALSE)) 
            if (force) 
                warning(gettextf("package %s is required by %s, which may no longer work correctly", 
                  sQuote(pkgname), sQuote(.rmpkg(pkg))), call. = FALSE, 
                  domain = NA)
            else stop(gettextf("package %s is required by %s so will not be detached", 
                sQuote(pkgname), sQuote(.rmpkg(pkg))), call. = FALSE, 
                domain = NA)
    }
    env <- as.environment(pos)
    libpath <- attr(env, "path")
    hook <- getHook(packageEvent(pkgname, "detach"))
    for (fun in rev(hook)) try(fun(pkgname, libpath))
    ns <- .getNamespace(pkgname)
    if (!is.null(ns) && exists(".onDetach", mode = "function", 
        where = ns, inherits = FALSE)) {
        .onDetach <- get(".onDetach", mode = "function", pos = ns, 
            inherits = FALSE)
        if (!is.null(libpath)) {
            res <- tryCatch(.onDetach(libpath), error = identity)
            if (inherits(res, "error")) {
                warning(gettextf("%s failed in %s() for '%s', details:\n  call: %s\n  error: %s", 
                  ".onDetach", "detach", pkgname, deparse(conditionCall(res))[1L], 
                  conditionMessage(res)), call. = FALSE, domain = NA)
            }
        }
    }
    else if (exists(".Last.lib", mode = "function", where = pos, 
        inherits = FALSE)) {
        .Last.lib <- get(".Last.lib", mode = "function", pos = pos, 
            inherits = FALSE)
        if (!is.null(libpath)) {
            res <- tryCatch(.Last.lib(libpath), error = identity)
            if (inherits(res, "error")) {
                warning(gettextf("%s failed in %s() for '%s', details:\n  call: %s\n  error: %s", 
                  ".Last.lib", "detach", pkgname, deparse(conditionCall(res))[1L], 
                  conditionMessage(res)), call. = FALSE, domain = NA)
            }
        }
    }
    .Internal(detach(pos))
    if (isNamespaceLoaded(pkgname)) {
        if (unload) {
            tryCatch(unloadNamespace(pkgname), error = function(e) warning(gettextf("%s namespace cannot be unloaded:\n  ", 
                sQuote(pkgname)), conditionMessage(e), call. = FALSE, 
                domain = NA))
        }
    }
    else {
        if (.isMethodsDispatchOn() && methods:::.hasS4MetaData(env)) 
            methods::cacheMetaData(env, FALSE)
        .Internal(lazyLoadDBflush(paste0(libpath, "/R/", pkgname, 
            ".rdb")))
    }
    invisible()
}

# Examples
require(splines) # package
detach(package:splines)
## or also
library(splines)
pkg <- "package:splines"

stopifnot(inherits(tryCatch(detach(pkg), error = function(.).),  "error"))

detach(pkg, character.only = TRUE)

## careful: do not do this unless 'splines' is not already attached.
library(splines)
detach(2) # 'pos' used for 'name'

## an example of the name argument to attach
## and of detaching a database named by a character vector
attach_and_detach <- function(db, pos = 2)
{
   name <- deparse1(substitute(db))
   attach(db, pos = pos, name = name)
   print(search()[pos])
   detach(name, character.only = TRUE)
}
attach_and_detach(women, pos = 3)

