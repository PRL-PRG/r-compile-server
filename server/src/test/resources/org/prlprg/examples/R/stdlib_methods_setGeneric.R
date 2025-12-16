#? stdlib
`setGeneric` <- function (name, def = NULL, group = list(), valueClass = character(), 
    where = topenv(parent.frame()), package = NULL, signature = NULL, 
    useAsDefault = NULL, genericFunction = NULL, simpleInheritanceOnly = NULL) 
{
    if (is.character(.isSingleName(name))) 
        stop(gettextf("invalid argument 'name': %s", .isSingleName(name)), 
            domain = NA)
    if (exists(name, "package:base") && inBasicFuns(name)) {
        name <- switch(name, as.double = "as.numeric", name)
        fdef <- getGeneric(name)
        compatibleSignature <- nargs() == 2L && !missing(signature) && 
            identical(signature, fdef@signature)
        if (nargs() <= 1 || compatibleSignature) {
            .cacheGeneric(name, fdef)
            return(name)
        }
        if (!is.function(useAsDefault) && !isFALSE(useAsDefault)) {
            msg <- gettextf("%s dispatches internally;  methods can be defined, but the generic function is implicit, and cannot be changed.", 
                sQuote(name))
            stop(msg, domain = NA)
        }
    }
    simpleCall <- {
        nargs() < 2 || all(missing(def), missing(group), missing(valueClass), 
            missing(package), missing(signature), missing(useAsDefault), 
            missing(genericFunction), missing(simpleInheritanceOnly))
    }
    stdGenericBody <- substitute(standardGeneric(NAME), list(NAME = name))
    fdef <- if (is.null(package)) 
        getFunction(name, mustFind = FALSE, where = where)
    else {
        ev <- .NamespaceOrPackage(package)
        if (simpleCall) 
            implicitGeneric(name, ev)
        else getFunction(name, mustFind = FALSE, where = ev)
    }
    if (simpleCall) {
        if (is(fdef, "genericFunction")) 
            return(.GenericAssign(name, fdef, where))
    }
    if (is.null(fdef)) {
        if (isNamespace(where)) 
            fdef <- .getFromStandardPackages(name)
        else fdef <- getFunction(name, mustFind = FALSE)
    }
    if (is.null(fdef) && is.function(useAsDefault)) 
        fdef <- useAsDefault
    doUncache <- FALSE
    if (is.object(fdef) && is(fdef, "genericFunction")) {
        doUncache <- TRUE
        oldDef <- fdef
        prevDefault <- finalDefaultMethod(fdef@default)
        if (is.null(package)) 
            package <- fdef@package
    }
    else if (is.function(fdef)) {
        prevDefault <- fdef
        if (is.primitive(fdef)) 
            package <- "base"
        if (is.null(package)) 
            package <- getPackageName(environment(fdef))
    }
    else prevDefault <- NULL
    if (is.primitive(fdef)) 
        fdef <- getGeneric(name, where = where)
    else if (is.function(fdef)) 
        body(fdef, envir = as.environment(where)) <- stdGenericBody
    if (!is.null(def)) {
        if (is.primitive(def) || !is.function(def)) 
            stop(gettextf("if the 'def' argument is supplied, it must be a function that calls standardGeneric(\"%s\") or is the default", 
                name), domain = NA)
        nonstandardCase <- .NonstandardGenericTest(body(def), 
            name, stdGenericBody)
        if (is.na(nonstandardCase)) {
            if (is.null(useAsDefault)) {
                useAsDefault <- def
            }
            body(def, envir = as.environment(where)) <- stdGenericBody
            nonstandardCase <- FALSE
        }
        fdef <- def
        if (is.null(genericFunction) && nonstandardCase) 
            genericFunction <- new("nonstandardGenericFunction")
    }
    thisPackage <- getPackageName(where)
    if (is.null(package) || !nzchar(package)) 
        package <- thisPackage
    if (is.null(fdef)) 
        stop(gettextf("must supply a function skeleton for %s, explicitly or via an existing function", 
            sQuote(name)), domain = NA)
    ensureGeneric.fdef <- function(sig = signature) {
        if (!(is.object(fdef) && is(fdef, "genericFunction"))) {
            fdeflt <- if (is.function(useAsDefault)) 
                useAsDefault
            else if (isFALSE(useAsDefault)) 
                NULL
            else if (is.function(prevDefault) && !identical(formalArgs(prevDefault), 
                formalArgs(fdef)) && !is.primitive(prevDefault)) 
                NULL
            else prevDefault
            if (is.function(fdeflt)) 
                fdeflt <- .derivedDefaultMethod(fdeflt)
            fdef <<- makeGeneric(name, fdef, fdeflt, group = group, 
                valueClass = valueClass, package = package, signature = sig, 
                genericFunction = genericFunction, simpleInheritanceOnly = simpleInheritanceOnly)
        }
    }
    if (identical(package, thisPackage)) {
        ensureGeneric.fdef()
    }
    else {
        implicit <- implicitGeneric(name, .NamespaceOrPackage(package))
        if (is.null(implicit)) {
            ensureGeneric.fdef()
        }
        else {
            ensureGeneric.fdef(if (is.null(signature) && is.null(def)) 
                implicit@signature
            else signature)
            cmp <- .identicalGeneric(fdef, implicit, allow.extra.dots = !nzchar(Sys.getenv("R_SETGENERIC_PICKY_DOTS")))
            if (isTRUE(cmp)) {
                fdef <- implicit
            }
            else if (is.function(implicit)) {
                thisPName <- if (identical(thisPackage, ".GlobalEnv")) 
                  "the global environment"
                else paste("package", sQuote(thisPackage))
                if (is.null(def) && is.null(signature)) {
                  message(gettextf("Creating a generic function for %s from %s in %s\n    (from the saved implicit definition)", 
                    sQuote(name), sQuote(package), thisPName), 
                    domain = NA)
                  fdef <- implicit
                }
                else {
                  message(gettextf("Creating a new generic function for %s in %s", 
                    sQuote(name), thisPName), domain = NA)
                  fdef@package <- packageSlot(fdef@generic) <- packageSlot(environment(fdef)$.Generic) <- thisPackage
                }
            }
            else {
                warning(gettextf("no generic version of %s on package %s is allowed;\n   a new generic will be assigned for %s", 
                  sQuote(name), sQuote(package), thisPName), 
                  domain = NA)
                fdef@package <- packageSlot(fdef@generic) <- packageSlot(environment(fdef)$.Generic) <- thisPackage
            }
        }
    }
    if (identical(fdef@signature, "...")) 
        fdef <- .dotsGeneric(fdef)
    if (doUncache) 
        .uncacheGeneric(name, oldDef)
    groups <- fdef@group
    for (group in groups) {
        gdef <- getGeneric(group)
        if (is(gdef, "groupGenericFunction") && is.na(match(fdef@generic, 
            as.character(gdef@groupMembers)))) {
            gwhere <- .genEnv(group, where)
            gdef@groupMembers <- c(gdef@groupMembers, list(fdef@generic))
            assign(group, gdef, gwhere)
        }
    }
    .GenericAssign(name, fdef, where)
}

# Examples

## Specify that this package will define methods for plot()
setGeneric("plot")

## create a new generic function, with a default method
setGeneric("props", function(object) attributes(object))

###   A non-standard generic function.  It insists that the methods
###   return a non-empty character vector (a stronger requirement than
###    valueClass = "character" in the call to setGeneric)

setGeneric("authorNames",
    function(text) {
      value <- standardGeneric("authorNames")
      if(!(is(value, "character") && any(nchar(value)>0)))
        stop("authorNames methods must return non-empty strings")
      value
      })

## the asRObject generic function, from package XR
## Its default method just returns object
## See the reference, Chapter 12 for methods

setGeneric("asRObject", function(object, evaluator) {
        object
})



setMethod("authorNames", "character", function(text)text)

tryIt <- function(expr) tryCatch(expr, error = function(e) e)
stopifnot(identical(authorNames(c("me", "you")), c("me", "you")),
          is(tryIt(authorNames(character())), "error"), # empty value
          is(tryIt(authorNames(NULL)), "error"))        # no default method


removeGeneric("authorNames")
removeGeneric("props")
removeGeneric("asRObject")


