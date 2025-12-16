#? stdlib
`setClass` <- function (Class, representation = list(), prototype = NULL, contains = character(), 
    validity = NULL, access = list(), where = topenv(parent.frame()), 
    version = .newExternalptr(), sealed = FALSE, package = getPackageName(where), 
    S3methods = FALSE, slots) 
{
    oldDef <- getClassDef(Class, where)
    if (is(oldDef, "classRepresentation") && oldDef@sealed) 
        stop(gettextf("%s has a sealed class definition and cannot be redefined", 
            dQuote(Class)), domain = NA)
    if (!missing(slots)) {
        if (!missing(representation)) 
            stop("Argument \"representation\" cannot be used if argument \"slots\" is supplied")
        properties <- inferProperties(slots, "slot")
        classDef <- makeClassRepresentation(Class, properties, 
            contains, prototype, package, validity, access, version, 
            sealed, where = where)
    }
    else if (is(representation, "classRepresentation")) {
        classDef <- representation
        if (!(missing(prototype) && missing(contains) && missing(validity) && 
            missing(access) && missing(version) && missing(package))) 
            stop("only arguments 'Class' and 'where' can be supplied when argument 'representation' is a 'classRepresentation' object")
        if (length(classDef@package) == 0L) 
            classDef@package <- package
    }
    else {
        if (is.character(representation) && length(representation) == 
            1L && is.null(names(representation))) 
            representation <- list(representation)
        slots <- nzchar(allNames(representation))
        superClasses <- c(as.character(representation[!slots]), 
            contains)
        properties <- representation[slots]
        classDef <- makeClassRepresentation(Class, properties, 
            superClasses, prototype, package, validity, access, 
            version, sealed, where = where)
    }
    superClasses <- names(classDef@contains)
    classDef <- completeClassDefinition(Class, classDef, where, 
        doExtends = FALSE)
    .uncacheClass(Class, classDef)
    if (length(superClasses) > 0L) {
        sealed <- classDef@sealed
        classDef@sealed <- FALSE
        assignClassDef(Class, classDef, where)
        badContains <- character()
        for (ext in classDef@contains) {
            class2 <- ext@superClass
            if (is(try(setIs(Class, class2, classDef = classDef, 
                where = where)), "try-error")) 
                badContains <- c(badContains, class2)
            else {
                classDef <- getClassDef(Class, where = where)
                if (is.null(classDef)) 
                  stop(sprintf("internal error: definition of class %s not properly assigned", 
                    dQuote(Class)), domain = NA)
            }
        }
        if (length(badContains)) {
            msg <- paste(.dQ(badContains), collapse = ", ")
            if (is(try(removeClass(Class, where)), "try-error")) 
                stop(gettextf("error in contained classes (%s) for class %s and unable to remove definition from %s", 
                  msg, dQuote(Class), sQuote(getPackageName(where))), 
                  domain = NA)
            if (is.null(oldDef)) 
                stop(gettextf("error in contained classes (%s) for class %s; class definition removed from %s", 
                  msg, dQuote(Class), sQuote(getPackageName(where))), 
                  domain = NA)
            else if (is(try(setClass(Class, oldDef, where = where)), 
                "try-error")) 
                stop(gettextf("error in contained classes (%s) for class %s and unable to restore previous definition from %s", 
                  msg, dQuote(Class), sQuote(getPackageName(where))), 
                  domain = NA)
            else stop(gettextf("error in contained classes (%s) for class %s; previous definition restored to %s", 
                msg, dQuote(Class), sQuote(getPackageName(where))), 
                domain = NA)
        }
        if (length(attr(classDef@contains, "conflicts")) > 0) 
            .reportSuperclassConflicts(Class, classDef@contains, 
                where)
        .checkRequiredGenerics(Class, classDef, where)
        if (sealed) {
            classDef@sealed <- TRUE
        }
    }
    if (S3methods) 
        classDef <- .setS3MethodsOn(classDef)
    assignClassDef(Class, classDef, where)
    invisible(classGeneratorFunction(classDef, where))
}

# Examples

 if(isClass("trackMultiCurve")) removeClass("trackMultiCurve")
 if(isClass("trackCurve"))      removeClass("trackCurve")
 if(isClass("track"))           removeClass("track")

## A simple class with two slots
track <- setClass("track", slots = c(x="numeric", y="numeric"))
## an object from the class
t1 <- track(x = 1:10, y = 1:10 + rnorm(10))

## A class extending the previous, adding one more slot
trackCurve <- setClass("trackCurve",
		slots = c(smooth = "numeric"),
		contains = "track")

## an object containing a superclass object
t1s <- trackCurve(t1, smooth = 1:10)

## A class similar to "trackCurve", but with different structure
## allowing matrices for the "y" and "smooth" slots
setClass("trackMultiCurve",
         slots = c(x="numeric", y="matrix", smooth="matrix"),
         prototype = list(x=numeric(), y=matrix(0,0,0),
                          smooth= matrix(0,0,0)))

## A class that extends the built-in data type "numeric"

numWithId <- setClass("numWithId", slots = c(id = "character"),
         contains = "numeric")

numWithId(1:3, id = "An Example")

## inherit from reference object of type "environment"
stampedEnv <- setClass("stampedEnv", contains = "environment",
                       slots = c(update = "POSIXct"))
setMethod("[[<-", c("stampedEnv", "character", "missing"),
   function(x, i, j, ..., value) {
       ev <- as(x, "environment")
       ev[[i]] <- value  #update the object in the environment
       x@update <- Sys.time() # and the update time
       x})


e1 <- stampedEnv(update = Sys.time())

e1[["noise"]] <- rnorm(10)


tMC <- new("trackMultiCurve")
is.matrix(slot(tMC, "y"))
is.matrix(slot(tMC, "smooth"))
setClass("myMatrix", "matrix", prototype = matrix(0,0,0))
nrow(new("myMatrix")) # 0
nrow(new("matrix")) # 1
## simple test of prototype data
xxx <- stats::rnorm(3)
setClass("xNum", slots = c(x = "numeric"), prototype = list(x = xxx))
stopifnot(identical(new("xNum")@x, xxx))

removeClass("xNum")
removeClass("myMatrix")

## The following should not be needed.  But make check removes all files
## between example files, in a crude way that does not cause the class
## information to be reset.  There seems no way to detect this, so we
## have to remove classes ourselves

removeClass("trackMultiCurve")
removeClass("trackCurve")
removeClass("track")


