#? stdlib
`setMethod` <- function (f, signature = character(), definition, where = topenv(parent.frame()), 
    valueClass = NULL, sealed = FALSE) 
{
    if (is.function(f) && is(f, "genericFunction")) {
        fdef <- f
        f <- fdef@generic
        gwhere <- .genEnv(f)
    }
    else if (is.function(f)) {
        if (is.primitive(f)) {
            f <- .primname(f)
            fdef <- genericForBasic(f)
            gwhere <- .genEnv(f)
        }
        else stop("a function for argument 'f' must be a generic function")
    }
    else {
        where <- as.environment(where)
        gwhere <- .genEnv(f, where)
        f <- switch(f, as.double = "as.numeric", f)
        fdef <- getGeneric(f, where = if (identical(gwhere, baseenv())) 
            where
        else gwhere)
    }
    if (.lockedForMethods(fdef, where)) 
        stop(gettextf("the environment %s is locked; cannot assign methods for function %s", 
            sQuote(getPackageName(where)), sQuote(f)), domain = NA)
    hasMethods <- !is.null(fdef)
    deflt <- getFunction(f, generic = FALSE, mustFind = FALSE, 
        where = where)
    if (identical(gwhere, baseenv())) {
        allWhere <- findFunction(f, where = where)
        generics <- logical(length(allWhere))
        if (length(allWhere)) {
            for (i in seq_along(allWhere)) {
                fi <- get(f, allWhere[[i]])
                geni <- is(fi, "genericFunction")
                generics[[i]] <- geni
                if (!geni && is.null(deflt)) 
                  deflt <- fi
            }
        }
        if (any(generics)) {
            gwhere <- as.environment(allWhere[generics][[1L]])
            if (.lockedForMethods(fdef, gwhere)) {
                if (identical(as.environment(where), gwhere)) 
                  stop(gettextf("the 'where' environment (%s) is a locked namespace; cannot assign methods there", 
                    getPackageName(where)), domain = NA)
                msg <- gettextf("Copying the generic function %s to environment %s, because the previous version was in a sealed namespace (%s)", 
                  sQuote(f), sQuote(getPackageName(where)), sQuote(getPackageName(gwhere)))
                message(strwrap(msg), domain = NA)
                assign(f, fdef, where)
                gwhere <- where
            }
        }
    }
    if (!hasMethods) 
        fdef <- deflt
    if (is.null(fdef)) 
        stop(gettextf("no existing definition for function %s", 
            sQuote(f)), domain = NA)
    if (!hasMethods) {
        setGeneric(f, where = where)
        doMessage <- !isS3Generic(fdef)
        fdef <- getGeneric(f, where = where)
        if (doMessage) {
            thisPackage <- getPackageName(where)
            thisPName <- if (identical(thisPackage, ".GlobalEnv")) 
                "the global environment"
            else paste("package", sQuote(thisPackage))
            if (identical(as.character(fdef@package), thisPackage)) 
                message(gettextf("Creating a generic function from function %s in %s", 
                  sQuote(f), thisPName), domain = NA)
            else message(gettextf("Creating a generic function for %s from package %s in %s", 
                sQuote(f), sQuote(fdef@package), thisPName), 
                domain = NA)
        }
    }
    else if (identical(gwhere, NA)) {
        if (is.null(.BasicFunsList[[f]])) 
            stop(sprintf("apparent internal error: a generic function was found for \"%s\", but no corresponding object was found searching from \"%s\"", 
                f, getPackageName(where)), domain = NA)
        if (!isGeneric(f)) 
            setGeneric(f)
    }
    if (isSealedMethod(f, signature, fdef, where = where)) 
        stop(gettextf("the method for function %s and signature %s is sealed and cannot be re-defined", 
            sQuote(f), .signatureString(fdef, signature)), domain = NA)
    signature <- matchSignature(signature, fdef, where)
    createMethod <- FALSE
    switch(typeof(definition), closure = {
        fnames <- formalArgs(fdef)
        mnames <- formalArgs(definition)
        if (!identical(mnames, fnames)) {
            if (length(fnames) == length(mnames) && length(mnames) == 
                1L) {
                warning(gettextf("For function %s, signature %s: argument in method definition changed from (%s) to (%s)", 
                  sQuote(f), sQuote(signature), mnames, fnames), 
                  domain = NA, call. = FALSE)
                formals(definition) <- formals(fdef)
                ll <- list(as.name(formalArgs(fdef)))
                names(ll) <- mnames
                body(definition) <- substituteDirect(body(definition), 
                  ll)
                mnames <- fnames
            } else {
                fullSig <- conformMethod(signature, mnames, fnames, 
                  f, fdef, definition)
                if (!identical(fullSig, signature)) {
                  formals(definition, envir = environment(definition)) <- formals(fdef)
                  signature <- fullSig
                }
                definition <- rematchDefinition(definition, fdef, 
                  mnames, fnames, signature)
            }
        }
        definition <- matchDefaults(definition, fdef)
        createMethod <- TRUE
    }, builtin = , special = {
        if (!identical(definition, deflt)) stop("primitive functions cannot be methods; they must be enclosed in a regular function")
    }, `NULL` = {
    }, stop(gettextf("invalid method definition: expected a function, got an object of class %s", 
        dQuote(class(definition))), domain = NA))
    fenv <- environment(fdef)
    nSig <- .getGenericSigLength(fdef, fenv, TRUE)
    signature <- .matchSigLength(signature, fdef, fenv, TRUE)
    margs <- (fdef@signature)[seq_along(signature)]
    if (createMethod) {
        definition <- asMethodDefinition(definition, signature, 
            sealed, fdef)
        definition@generic <- fdef@generic
    }
    is.not.base <- !identical(where, baseenv())
    whereMethods <- if (is.not.base && !.noMlists()) 
        insertMethod(getMethodsMetaData(f, where), signature, 
            margs, definition)
    mtable <- getMethodsForDispatch(fdef)
    if (cacheOnAssign(where)) {
        .cacheMethodInTable(fdef, signature, definition, mtable)
        .cacheMethodInTable(fdef, signature, definition)
        if (is.not.base) 
            .addToMetaTable(fdef, signature, definition, where, 
                nSig)
        resetGeneric(f, fdef, mtable, gwhere, deflt)
    }
    assignMethodsMetaData(f, whereMethods, fdef, where)
    invisible(f)
}

# Examples

## examples for a simple class with two numeric slots.
## (Run example(setMethod) to see the class and function definitions)

  setClass("track", slots = c(x="numeric", y = "numeric"))

  cumdist <- function(x, y) c(0., cumsum(sqrt(diff(x)^2 + diff(y)^2)))
  setClass("trackMultiCurve", slots = c(x="numeric", y="matrix", smooth="matrix"),
          prototype = list(x=numeric(), y=matrix(0,0,0), smooth= matrix(0,0,0)))

require(graphics)


## methods for plotting track objects 
##
## First, with only one object as argument, plot the two slots
##  y must be included in the signature, it would default to "ANY"
setMethod("plot", signature(x="track", y="missing"),
  function(x,  y, ...) plot(x@x, x@y, ...)
)

## plot numeric data on either axis against a track object
## (reducing the track object to the cumulative distance along the track)
## Using a short form for the signature, which matches like formal arguments
setMethod("plot", c("track", "numeric"),
 function(x, y, ...) plot(cumdist(x@x, x@y), y,  xlab = "Distance",...)
)

## and similarly for the other axis
setMethod("plot", c("numeric", "track"),
 function(x, y, ...) plot(x, cumdist(y@x, y@y),  ylab = "Distance",...)
)

t1 <- new("track", x=1:20, y=(1:20)^2)
plot(t1)
plot(qnorm(ppoints(20)), t1)

## Now a class that inherits from "track", with a vector for data at
## the points 
  setClass("trackData", contains = c("numeric", "track"))


tc1 <- new("trackData", t1, rnorm(20))


## a method for plotting the object
## This method has an extra argument, allowed because ... is an
## argument to the generic function.
setMethod("plot", c("trackData", "missing"),
function(x, y, maxRadius = max(par("cin")), ...) {
  plot(x@x, x@y, type = "n", ...)
  symbols(x@x, x@y, circles = abs(x), inches = maxRadius)
  }
)
plot(tc1)

## Without other methods for "trackData", methods for "track"
## will be selected by inheritance

plot(qnorm(ppoints(20)), tc1)

## defining methods for primitive function.
## Although "[" and "length" are not ordinary functions
## methods can be defined for them.
setMethod("[", "track",
  function(x, i, j, ..., drop) {
    x@x <- x@x[i]; x@y <- x@y[i]
    x
  })
plot(t1[1:15])

setMethod("length", "track", function(x)length(x@y))
length(t1)

## Methods for binary operators
## A method for the group generic "Ops" will apply to all operators
## unless a method for a more specific operator has been defined.

## For one trackData argument, go on with just the data part
setMethod("Ops", signature(e1 = "trackData"),
    function(e1, e2) callGeneric(e1@.Data, e2))

setMethod("Ops", signature(e2 = "trackData"),
    function(e1, e2) callGeneric(e1, e2@.Data))

## At this point, the choice of a method for a call with BOTH
## arguments from "trackData" is ambiguous.  We must define a method.

setMethod("Ops", signature(e1 = "trackData", e2 = "trackData"),
    function(e1, e2) callGeneric(e1@.Data, e2@.Data))
## (well, really we should only do this if the "track" part
## of the two arguments matched)

tc1 +1

1/tc1

all(tc1 == tc1)


removeClass("trackData")
removeClass("track")


