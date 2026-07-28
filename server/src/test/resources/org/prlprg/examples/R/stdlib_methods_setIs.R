#? stdlib
`setIs` <- function (class1, class2, test = NULL, coerce = NULL, replace = NULL, 
    by = character(), where = topenv(parent.frame()), classDef = getClass(class1, 
        TRUE, where = where), extensionObject = NULL, doComplete = TRUE) 
{
    where <- as.environment(where)
    classDef2 <- getClassDef(class2, where)
    if (is.null(classDef2)) 
        stop(gettextf("class %s has no visible definition from package or environment %s", 
            dQuote(class2), sQuote(getPackageName(where))), domain = NA)
    m1 <- classMetaName(class1)
    local1 <- exists(m1, where, inherits = FALSE) && !(classDef@sealed || 
        bindingIsLocked(m1, where))
    if (!local1) {
        m2 <- classMetaName(class2)
        local2 <- exists(m2, where, inherits = FALSE) && !(classDef2@sealed || 
            bindingIsLocked(m2, where))
        if (!local2) 
            stop(gettextf("cannot create a 'setIs' relation when neither of the classes (%s and %s) is local and modifiable in this package", 
                dQuote(class1), dQuote(class2)), domain = NA)
    }
    if (classDef@sealed && !isClassUnion(classDef2)) 
        stop(gettextf("class %s is sealed; new superclasses can not be defined, except by 'setClassUnion'", 
            dQuote(class1)), domain = NA)
    prevIs <- !identical(possibleExtends(class1, class2, classDef, 
        classDef2), FALSE)
    obj <- extensionObject %||% makeExtends(class1, coerce, test, 
        replace, by, classDef1 = classDef, classDef2 = classDef2, 
        package = getPackageName(where))
    ok <- .validExtends(class1, class2, classDef, classDef2, 
        obj@simple)
    if (!isTRUE(ok)) 
        stop(ok)
    where2 <- .findOrCopyClass(class2, classDef2, where, "subclass")
    classDef2@subclasses[[class1]] <- obj
    if (doComplete) 
        classDef2@subclasses <- completeSubclasses(classDef2, 
            class1, obj, where)
    if (classDef2@virtual && is.na(match(class2, .specialVirtual))) {
        if (extends(classDef, "NULL")) 
            classDef2@prototype <- NULL
        else if (is.null(classDef2@prototype) && is.na(match("NULL", 
            names(classDef2@subclasses)))) {
            classDef2@prototype <- if (classDef@virtual) 
                classDef@prototype
            else .Call(C_new_object, classDef)
        }
    }
    assignClassDef(class2, classDef2, where2, TRUE)
    .removePreviousCoerce(class1, class2, where, prevIs)
    where1 <- .findOrCopyClass(class1, classDef, where, "superClass")
    .newDirectSuperclass(classDef@contains, class2, names(classDef2@contains)) <- obj
    onlyRecacheSubclasses <- (is(classDef, "ClassUnionRepresentation") || 
        is(classDef2, "ClassUnionRepresentation")) && !identical(packageSlot(classDef), 
        packageSlot(classDef2))
    if (doComplete) {
        classDef@contains <- completeExtends(classDef, class2, 
            obj, where = where)
        if (!onlyRecacheSubclasses) 
            .checkSubclasses(class1, classDef, class2, classDef2, 
                where)
    }
    assignClassDef(class1, classDef, where1, TRUE, doSubclasses = onlyRecacheSubclasses)
    invisible(classDef)
}

# Examples

## A simple class with two slots
setClass("track",
         slots = c(x="numeric", y="numeric"))
## A class extending the previous, adding one more slot

## Two examples of setIs() with coerce= and replace= arguments
## The first one works fairly well, because neither class has many
## inherited methods do be disturbed by the new inheritance

## The second example does NOT work well, because the new superclass,
## "factor", causes methods to be inherited that should not be.

## First example:
## a class definition (see \link{setClass} for class "track")
setClass("trackCurve", contains = "track",
         slots = c( smooth = "numeric"))
## A class similar to "trackCurve", but with different structure
## allowing matrices for the "y" and "smooth" slots
setClass("trackMultiCurve",
         slots = c(x="numeric", y="matrix", smooth="matrix"),
         prototype = structure(list(), x=numeric(), y=matrix(0,0,0),

                               smooth= matrix(0,0,0)))
## Automatically convert an object from class "trackCurve" into
## "trackMultiCurve", by making the y, smooth slots into 1-column matrices
setIs("trackCurve",
      "trackMultiCurve",
      coerce = function(obj) {
        new("trackMultiCurve",
            x = obj@x,
            y = as.matrix(obj@y),
            smooth = as.matrix(obj@smooth))
      },
      replace = function(obj, value) {
        obj@y <- as.matrix(value@y)
        obj@x <- value@x
        obj@smooth <- as.matrix(value@smooth)
        obj})



removeClass("trackMultiCurve")
removeClass("trackCurve")
removeClass("track")


## Second Example:
## A class that adds a slot to "character"
setClass("stringsDated", contains = "character",
         slots = c(stamp="POSIXt"))

## Convert automatically to a factor by explicit coerce
setIs("stringsDated", "factor",
      coerce = function(from) factor(from@.Data),
      replace= function(from, value) {
                  from@.Data <- as.character(value); from })

set.seed(750)

ll <- sample(letters, 10, replace = TRUE)
ld <- new("stringsDated", ll, stamp = Sys.time())

levels(as(ld, "factor"))
levels(ld) # will be NULL--see comment in section on inheritance above.

## In contrast, a class that simply extends "factor"
## has no such ambiguities
setClass("factorDated", contains = "factor",
         slots = c(stamp="POSIXt"))
fd <- new("factorDated", factor(ll), stamp = Sys.time())
identical(levels(fd), levels(as(fd, "factor")))

