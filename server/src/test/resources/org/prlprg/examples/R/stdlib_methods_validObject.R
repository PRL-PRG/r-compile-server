#? stdlib
`validObject` <- function (object, test = FALSE, complete = FALSE) 
{
    Class <- class(object)
    classDef <- getClassDef(Class)
    where <- .classEnv(classDef)
    anyStrings <- function(x) if (isTRUE(x)) 
        character()
    else x
    errors <- character()
    slotTypes <- classDef@slots
    slotNames <- names(slotTypes)
    attrNames <- c(".Data", ".S3Class", names(attributes(object)))
    if (anyNA(idx <- match(slotNames, attrNames))) {
        badSlots <- is.na(idx)
        errors <- c(errors, paste("slots in class definition but not in object:", 
            paste0("\"", slotNames[badSlots], "\"", collapse = ", ")))
        slotTypes <- slotTypes[!badSlots]
        slotNames <- slotNames[!badSlots]
    }
    for (i in seq_along(slotTypes)) {
        classi <- slotTypes[[i]]
        classDefi <- getClassDef(classi, where = where)
        if (is.null(classDefi)) {
            errors <- c(errors, paste0("undefined class for slot \"", 
                slotNames[[i]], "\" (\"", classi, "\")"))
            next
        }
        namei <- slotNames[[i]]
        sloti <- try(switch(namei, .S3Class = S3Class(object), 
            slot(object, namei)), silent = TRUE)
        if (inherits(sloti, "try-error")) {
            errors <- c(errors, sloti)
            next
        }
        ok <- possibleExtends(class(sloti), classi, ClassDef2 = classDefi)
        if (isFALSE(ok)) {
            errors <- c(errors, paste0("invalid object for slot \"", 
                slotNames[[i]], "\" in class \"", Class, "\": got class \"", 
                class(sloti)[[1L]], "\", should be or extend class \"", 
                classi, "\""))
            next
        }
        if (!complete) 
            next
        errori <- anyStrings(Recall(sloti, TRUE, TRUE))
        if (length(errori)) {
            errori <- paste0("In slot \"", slotNames[[i]], "\" of class \"", 
                class(sloti), "\": ", errori)
            errors <- c(errors, errori)
        }
    }
    extends <- rev(classDef@contains)
    for (i in seq_along(extends)) {
        exti <- extends[[i]]
        superClass <- exti@superClass
        if (!exti@simple && !is(object, superClass)) 
            next
        superDef <- getClassDef(superClass)
        if (is.null(superDef)) {
            errors <- c(errors, paste0("superclass \"", superClass, 
                "\" not defined in the environment of the object's class"))
            break
        }
        validityMethod <- superDef@validity
        if (is.function(validityMethod)) {
            errors <- c(errors, anyStrings(validityMethod(as(object, 
                superClass))))
            if (length(errors)) 
                break
        }
    }
    validityMethod <- classDef@validity
    if (length(errors) == 0L && is.function(validityMethod)) {
        errors <- c(errors, anyStrings(validityMethod(object)))
    }
    if (length(errors)) {
        if (test) 
            errors
        else {
            msg <- gettextf("invalid class %s object", dQuote(Class))
            if (length(errors) > 1L) 
                stop(paste(paste0(msg, ":"), paste(seq_along(errors), 
                  errors, sep = ": "), collapse = "\n"), domain = NA)
            else stop(msg, ": ", errors, domain = NA)
        }
    }
    else TRUE
}

# Examples
setClass("track",
          slots = c(x="numeric", y = "numeric"))
t1 <- new("track", x=1:10, y=sort(stats::rnorm(10)))
## A valid "track" object has the same number of x, y values
validTrackObject <- function(object) {
    if(length(object@x) == length(object@y)) TRUE
    else paste("Unequal x,y lengths: ", length(object@x), ", ",
               length(object@y), sep="")
}
## assign the function as the validity method for the class
setValidity("track", validTrackObject)
## t1 should be a valid "track" object
validObject(t1)
## Now we do something bad
t2 <- t1
t2@x <- 1:20
## This should generate an error

stopifnot(is(try(validObject(t2)), "try-error"))

setClass("trackCurve", contains = "track",
         slots = c(smooth = "numeric"))

## all superclass validity methods are used when validObject
## is called from initialize() with arguments, so this fails

stopifnot(is(try(new("trackCurve", t2)), "try-error"))

setClass("twoTrack", slots = c(tr1 = "track", tr2 ="track"))

## validity tests are not applied recursively by default,
## so this object is created (invalidly)
tT  <- new("twoTrack", tr2 = t2)

## A stricter test detects the problem

stopifnot(is(try(validObject(tT, complete = TRUE)), "try-error"))

