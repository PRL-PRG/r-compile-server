#? stdlib
`getS3method` <- function (f, class, optional = FALSE, envir = parent.frame()) 
{
    stopifnot(is.character(f), length(f) == 1L)
    stopifnot(is.character(class), length(class) == 1L)
    if (!any(f == getKnownS3generics())) {
        truegf <- findGeneric(f, envir)
        if (nzchar(truegf)) 
            f <- truegf
        else {
            if (optional) 
                return(NULL)
            else stop(gettextf("no function '%s' could be found", 
                f), domain = NA)
        }
    }
    method <- paste(f, class, sep = ".")
    if (!is.null(m <- get0(method, envir = envir, mode = "function"))) {
        pkg <- if (isNamespace(em <- environment(m))) 
            environmentName(em)
        else if (is.primitive(m)) 
            "base"
        if (is.na(match(method, tools::nonS3methods(pkg)))) 
            return(m)
    }
    defenv <- if (!is.na(w <- .knownS3Generics[f])) 
        asNamespace(w)
    else if (f %in% tools:::.get_internal_S3_generics()) 
        .BaseNamespaceEnv
    else {
        genfun <- get(f, mode = "function", envir = envir)
        if (.isMethodsDispatchOn() && methods::is(genfun, "genericFunction")) 
            genfun <- methods::selectMethod(genfun, "ANY")
        .defenv_for_S3_registry(genfun)
    }
    S3Table <- get(".__S3MethodsTable__.", envir = defenv)
    if (!is.null(m <- get0(method, envir = S3Table, inherits = FALSE))) 
        m
    else if (optional) 
        NULL
    else stop(gettextf("S3 method '%s' not found", method), domain = NA)
}

# Examples
require(stats)
exists("predict.ppr") # false
getS3method("predict", "ppr")

