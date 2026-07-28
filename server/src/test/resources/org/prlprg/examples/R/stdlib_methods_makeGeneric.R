#? stdlib
`makeGeneric` <- function (f, fdef, fdefault = fdef, group = list(), valueClass = character(), 
    package = getPackageName(environment(fdef)), signature = NULL, 
    genericFunction = NULL, simpleInheritanceOnly = NULL) 
{
    checkTrace <- function(fun, what, f) {
        if (is(fun, "traceable")) {
            warning(gettextf("the function being used as %s in making a generic function for %s is currently traced; the function used will have tracing removed", 
                what, sQuote(f)), domain = NA)
            .untracedFunction(fun)
        }
        else fun
    }
    if (missing(fdef)) {
        if (missing(fdefault)) 
            stop(gettextf("must supply either a generic function or a function as default for %s", 
                sQuote(f)), domain = NA)
        else if (isBaseFun(fdefault)) {
            fun <- genericForBasic(f)
            if (is.function(fun)) {
                return(fun)
            }
        }
        fdef <- fdefault
        body(fdef) <- substitute(standardGeneric(NAME), list(NAME = f))
        environment(fdef) <- .NamespaceOrPackage(package)
    }
    ev <- new.env()
    parent.env(ev) <- environment(fdef)
    environment(fdef) <- ev
    packageSlot(f) <- package
    assign(".Generic", f, envir = ev)
    fdef <- checkTrace(fdef)
    if (length(valueClass)) 
        fdef <- .ValidateValueClass(fdef, f, valueClass)
    group <- .asGroupArgument(group)
    if (is.null(genericFunction)) 
        value <- new("standardGeneric")
    else if (is(genericFunction, "genericFunction")) 
        value <- genericFunction
    else stop(gettextf("the %s argument must be NULL or a generic function object; got an object of class %s", 
        sQuote("genericFunction"), dQuote(class(genericFunction))), 
        domain = NA)
    value@.Data <- fdef
    value@generic <- f
    value@group <- group
    value@valueClass <- valueClass
    value@package <- package
    args <- formalArgs(fdef)
    if (is.null(signature)) 
        signature <- args
    else if (any(not.s.in.a <- is.na(match(signature, args)))) 
        stop(sprintf(ngettext(sum(not.s.in.a), "non-argument found in the signature: %s", 
            "non-arguments found in the signature: %s"), paste(signature[not.s.in.a], 
            collapse = ", ")), domain = NA)
    dots <- match("...", signature)
    if (!is.na(dots)) {
        if (length(signature) > 1L) 
            signature <- signature[-dots]
    }
    if (length(signature) == 0L) 
        stop("no suitable arguments to dispatch methods in this function")
    attr(signature, "simpleOnly") <- simpleInheritanceOnly
    value@signature <- signature
    if (is.null(fdefault)) {
    }
    else {
        fdefault <- checkTrace(fdefault)
        if (!identical(formalArgs(fdefault), formalArgs(fdef)) && 
            !is.primitive(fdefault)) 
            stop(sprintf(ngettext(length(fdef), "the formal argument of the generic function for %s (%s) differs from that of the non-generic to be used as the default (%s)", 
                "the formal arguments of the generic function for %s (%s) differ from those of the non-generic to be used as the default (%s)"), 
                f, paste(formalArgs(fdef), collapse = ", "), 
                paste(formalArgs(fdefault), collapse = ", ")), 
                domain = NA)
        fdefault <- asMethodDefinition(fdefault, fdef = value)
        if (is(fdefault, "MethodDefinition")) 
            fdefault@generic <- value@generic
    }
    value@default <- fdefault
    assign(".Methods", fdefault, envir = ev)
    .setupMethodsTables(value, TRUE)
    value@skeleton <- generic.skeleton(f, fdef, fdefault)
    value
}
