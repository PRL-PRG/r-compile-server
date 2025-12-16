#? stdlib
`.helpForCall` <- function (expr, envir, doEval = TRUE) 
{
    sigFormat <- function(sigNames, sigClasses) {
        paste(sprintf("%s = \"%s\"", sigNames, sigClasses), collapse = ", ")
    }
    f <- expr[[1L]]
    if (is.call(f) && (f[[1L]] == quote(`::`) || f[[1L]] == quote(`:::`))) {
        package <- f[[2L]]
        where <- paste0("package:", package)
        if (!(where %in% search())) 
            where <- NULL
        f <- f[[3L]]
    }
    else {
        package <- NULL
        where <- topenv(envir)
    }
    if (is.name(f)) 
        f <- as.character(f)
    if (is.null(where) || !.isMethodsDispatchOn() || !methods::isGeneric(f, 
        where = where)) {
        if (!is.character(f) || length(f) != 1L) 
            stop(gettextf("the object of class %s in the function call %s could not be used as a documentation topic", 
                dQuote(class(f)), sQuote(deparse(expr))), domain = NA)
        h <- .tryHelp(f, package = package)
        if (is.null(h)) 
            stop(gettextf("no methods for %s and no documentation for it as a function", 
                sQuote(f)), domain = NA)
    }
    else {
        if (methods::is(f, "genericFunction")) {
            fdef <- f
            f <- fdef@generic
        }
        else fdef <- methods::getGeneric(f, where = where)
        sigClasses <- .signatureFromCall(fdef, expr, envir, doEval)
        sigNames <- names(sigClasses)
        method <- methods::selectMethod(f, sigClasses, optional = TRUE, 
            fdef = fdef)
        if (methods::is(method, "MethodDefinition")) {
            sigClasses <- method@defined
            if (length(sigClasses) < length(sigNames)) 
                sigClasses <- c(sigClasses, rep.int("ANY", length(sigNames) - 
                  length(sigClasses)))
        }
        else warning(gettextf("no method defined for function %s and signature %s", 
            sQuote(f), sQuote(sigFormat(sigNames, sigClasses))), 
            domain = NA)
        topic <- topicName("method", c(f, sigClasses))
        h <- .tryHelp(topic, package = package)
        if (is.null(h)) 
            stop(gettextf("no documentation for function %s and signature %s", 
                sQuote(f), sQuote(sigFormat(sigNames, sigClasses))), 
                domain = NA)
    }
    h
}
