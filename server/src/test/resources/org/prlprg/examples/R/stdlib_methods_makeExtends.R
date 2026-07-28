#? stdlib
`makeExtends` <- function (Class, coerce = NULL, test = NULL, replace = NULL, 
    by = character(), package, slots = getSlots(classDef1), classDef1 = getClass(Class), 
    classDef2) 
{
    dataEquiv <- function(cl1, cl2) {
        .identC(cl1, cl2) || (extends(cl1, cl2) && !any(is.na(match(c(cl1, 
            cl2), .BasicClasses))))
    }
    packageEnv <- .requirePackage(package)
    class1Defined <- missing(slots)
    if (class1Defined) {
        Class <- classDef1@className
        packageSlot(Class) <- packageSlot(classDef1)
    }
    to <- classDef2@className
    packageSlot(to) <- packageSlot(classDef2)
    simple <- is.null(coerce) && is.null(test) && is.null(replace) && 
        (length(by) == 0)
    distance <- 1
    dataPartClass <- elNamed(slots, ".Data")
    dataPart <- FALSE
    if (simple && !is.null(dataPartClass)) {
        if (!(is.null(getClassDef(dataPartClass)) || is.null(getClassDef(to)))) {
            dataPart <- dataEquiv(dataPartClass, to)
        }
    }
    if (is.null(coerce)) {
        coerce <- .simpleExtCoerce
        if (isXS3Class(classDef2)) {
            body(coerce, envir = packageEnv) <- substitute({
                if (strict) methods::S3Part(from, S3Class = S3CLASS) else from
            }, list(S3CLASS = to))
        }
        else if (!isVirtualClass(classDef2)) 
            body(coerce, envir = packageEnv) <- .simpleCoerceExpr(Class, 
                to, names(slots), classDef2)
    }
    else if (is.function(coerce)) {
        if (length(formals(coerce)) == 1) {
            coerce <- .ChangeFormals(coerce, .simpleIsCoerce, 
                "'coerce' argument to setIs ")
            tmp <- .simpleExtCoerce
            body(tmp, envir = environment(coerce)) <- body(coerce)
            coerce <- tmp
        }
        else coerce <- .ChangeFormals(coerce, .simpleExtCoerce, 
            "'coerce' argument to setIs ")
    }
    else stop(gettextf("the 'coerce' argument to 'setIs' should be a function of one argument, got an object of class %s", 
        dQuote(class(coerce))), domain = NA)
    if (is.null(test)) {
        test <- .simpleExtTest
        extClass <- "SClassExtension"
    }
    else {
        test <- .ChangeFormals(test, .simpleExtTest, "'test' argument to setIs ")
        extClass <- "conditionalExtension"
    }
    if (is.null(replace)) {
        if (dataPart) {
            extn <- classDef2@contains[[dataPartClass]]
            if (is(extn, "SClassExtension")) 
                easy <- extn@simple
            else easy <- FALSE
            if (easy) 
                replace <- .dataPartReplace$f1
            else {
                replace <- .dataPartReplace$f2
                bdy <- body(replace)
                body(replace, envir = environment(replace)) <- substituteDirect(bdy, 
                  list(THISCLASS = dataPartClass))
            }
        }
        else if (simple) {
            replace <- .simpleExtReplace
            if (isXS3Class(classDef2)) {
                S3Class <- attr(classDef2@prototype, ".S3Class")
                if (is.null(S3Class)) 
                  S3Class <- to
                body(replace, envir = packageEnv) <- quote({
                  methods::S3Part(from) <- value
                  from
                })
            }
            else if (isVirtualClass(classDef2)) {
                body(replace, envir = packageEnv) <- substitute({
                  if (!is(value, TO)) stop(gettextf("the computation: 'as(object,\"%s\") <- value' is valid when object has class %s only if 'is(value, \"%s\")' is TRUE ('class(value)' was %s)\n", 
                    TO, dQuote(FROM), TO, dQuote(class(value))), 
                    domain = NA)
                  value
                }, list(FROM = Class, TO = to))
            }
            else if (class1Defined && length(slots) == 0) {
                ext <- getAllSuperClasses(classDef1, TRUE)
                toSlots <- classDef2@slots
                sameSlots <- TRUE
                for (eclass in ext) {
                  if (.identC(eclass, to)) 
                    next
                  edef <- getClassDef(eclass, where = packageEnv)
                  if (!is.null(edef) && length(edef@slots) > 
                    0) {
                    sameSlots <- FALSE
                    break
                  }
                }
                if (sameSlots) 
                  body(replace, envir = packageEnv) <- substitute({
                    class(value) <- FROM
                    value
                  }, list(FROM = Class))
                else if (length(toSlots) == 0) 
                  replace <- .ErrorReplace
            }
            else body(replace, envir = packageEnv) <- .simpleReplaceExpr(classDef2)
        }
        else replace <- .ErrorReplace
        if (identical(replace, .ErrorReplace)) 
            warning(gettextf("there is no automatic definition for 'as(object, \"%s\") <- value' when object has class %s and no 'replace' argument was supplied; replacement will be an error", 
                to, dQuote(Class)), domain = NA)
    }
    else if (is.function(replace)) {
        if (length(formals(replace)) == 2) {
            replace <- .ChangeFormals(replace, .dataPartReplace$f2args, 
                "'replace' argument to setIs ")
            tmp <- .ErrorReplace
            body(tmp, envir = environment(replace)) <- body(replace)
            replace <- tmp
        }
        else replace <- .ChangeFormals(replace, .ErrorReplace, 
            "'replace' argument to setIs ")
    }
    else stop(gettextf("the 'replace' argument to setIs() should be a function of 2 or 3 arguments, got an object of class %s", 
        dQuote(class(replace))), domain = NA)
    new(extClass, subClass = Class, superClass = to, package = package, 
        coerce = coerce, test = test, replace = replace, simple = simple, 
        by = by, dataPart = dataPart, distance = distance)
}
