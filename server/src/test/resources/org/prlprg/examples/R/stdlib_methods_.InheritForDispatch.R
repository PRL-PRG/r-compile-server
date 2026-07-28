#? stdlib
`.InheritForDispatch` <- function (classes, fdef, mtable) 
{
    methods <- .findInheritedMethods(classes, fdef, mtable)
    if (length(methods) == 1L) 
        return(methods[[1L]])
    else if (length(methods) == 0L) {
        cnames <- paste0(fdef@signature[seq_along(classes)], 
            " = \"", vapply(classes, as.character, ""), "\"", 
            collapse = ", ")
        stop(gettextf("unable to find an inherited method for function %s for signature %s", 
            sQuote(fdef@generic), sQuote(cnames)), call. = FALSE, 
            domain = NA)
    }
    else stop("Internal error in finding inherited methods; didn't return a unique method", 
        domain = NA)
}
