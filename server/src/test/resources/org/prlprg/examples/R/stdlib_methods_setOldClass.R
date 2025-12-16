#? stdlib
`setOldClass` <- function (Classes, prototype = NULL, where = topenv(parent.frame()), 
    test = FALSE, S4Class) 
{
    simpleCase <- is.null(prototype)
    mainClass <- Classes[[1L]]
    prevDef <- getClassDef(mainClass, where, inherits = FALSE)
    if (!missing(S4Class)) {
        if (test) 
            stop("not allowed to have test==TRUE and an S4Class definition")
        if (!is(S4Class, "classRepresentation")) {
            if (is.character(S4Class)) {
                clName <- S4Class
                S4Class <- getClass(S4Class)
                if (.identC(clName, Classes[[1L]])) 
                  removeClass(clName, where = where)
            }
            else stop(gettextf("argument 'S4Class' must be a class definition: got an object of class %s", 
                dQuote(class(S4Class))), domain = NA)
        }
        if (!is.null(prototype)) {
            S4prototype <- S4Class@prototype
            S4Class@prototype <- .mergeAttrs(prototype, S4prototype)
        }
        Recall(Classes, where = where)
        return(.S4OldClass(Classes[[1L]], if (length(Classes) > 
            1) Classes[[2L]] else "oldClass", S4Class, where, 
            prevDef))
    }
    if (test) 
        return(.setOldIs(Classes, where))
    if (!is.null(prevDef)) {
        on.exit(.restoreClass(prevDef, where))
        removeClass(mainClass, where = where)
    }
    prevClass <- "oldClass"
    S3Class <- character()
    if (is.null(S3table <- where$.S3MethodsClasses)) {
        S3table <- new.env()
        assign(".S3MethodsClasses", S3table, envir = where)
    }
    dataPartClass <- NULL
    for (cl in rev(Classes)) {
        S3Class <- c(cl, S3Class)
        if (isClass(cl, where)) {
            def <- getClass(cl, where)
            if (!extends(def, prevClass)) {
                cl1 <- .validDataPartClass(cl, where, dataPartClass)
                if (is.null(cl1)) 
                  stop(gettextf("inconsistent old-style class information for %s; the class is defined but does not extend %s and is not valid as the data part", 
                    dQuote(cl), dQuote(prevClass)), domain = NA)
                else dataPartClass <- cl1
            }
            else {
                prevP <- def@prototype
                if (missing(prototype)) 
                  prototype <- prevP
                prevS3Class <- attr(prevP, ".S3Class")
                if (length(prevS3Class) > length(S3Class)) 
                  S3Class <- prevS3Class
            }
        }
        else {
            useP <- TRUE
            if (cl != mainClass || simpleCase) {
                setClass(cl, contains = c(prevClass, "VIRTUAL"), 
                  where = where)
            }
            else if (isClass(class(prototype))) 
                setClass(cl, contains = prevClass, prototype = prototype, 
                  where = where)
            else {
                if (.class1(prototype) != mainClass) 
                  stop(gettextf("the S3 class of the prototype, \"%s\", is undefined; only allowed when this is the S3 class being registered (\"%s\")", 
                    .class1(prototype), mainClass), domain = NA)
                setClass(cl, contains = prevClass, where = where)
                useP <- FALSE
            }
            def <- getClassDef(cl, where)
            if (useP) 
                clp <- def@prototype
            else clp <- prototype
            attr(clp, ".S3Class") <- S3Class
            def@prototype <- .notS4(clp)
            assignClassDef(cl, def, where = where)
            assign(cl, def, envir = S3table)
        }
        prevClass <- cl
    }
    if (!is.null(prevDef)) 
        on.exit()
}

# Examples

## All the predefined S3 classes with S4 versions
sort(unlist(.OldClassesList))


require(stats)

## "lm" and "mlm" are predefined; if they were not this would do it:


## Define a new generic function to compute the residual degrees of freedom
setGeneric("dfResidual",
  function(model) stop(gettextf(
    "This function only works for fitted model objects, not class %s",
                                class(model))))

setMethod("dfResidual", "lm", function(model)model$df.residual)

## dfResidual will work on mlm objects as well as lm objects
myData <- data.frame(time = 1:10, y = (1:10)^.5)
myLm <- lm(cbind(y, y^3)  ~ time, myData)


showClass("data.frame")# to see the predefined S4 "oldClass"


## two examples extending S3 class "lm": class "xlm" directly
## and "ylm" indirectly
setClass("xlm", slots = c(eps = "numeric"), contains = "lm")
setClass("ylm", slots = c(header = "character"), contains = "xlm")
ym1 = new("ylm", myLm, header = "Example", eps = 0.)
## for more examples, see ?\link{S3Class}.



stopifnot(identical(dfResidual(myLm), myLm$df.residual))
removeClass("ylm"); removeClass("xlm")
rm(myData, myLm)
removeGeneric("dfResidual")




