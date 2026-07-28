#? stdlib
`reconcilePropertiesAndPrototype` <- function (name, properties, prototype, superClasses, where) 
{
    StandardPrototype <- defaultPrototype()
    slots <- validSlotNames(allNames(properties))
    dataPartClass <- elNamed(properties, ".Data")
    dataPartValue <- FALSE
    if (!is.null(dataPartClass) && is.null(.validDataPartClass(dataPartClass, 
        where))) 
        stop(gettextf("in defining class %s, the supplied data part class, %s is not valid (must be a basic class or a virtual class combining basic classes)", 
            dQuote(name), dQuote(dataPartClass)), domain = NA)
    prototypeClass <- getClass(class(prototype), where = where)
    if ((!is.null(dataPartClass) || length(superClasses))) {
        for (cl in superClasses) {
            clDef <- getClassDef(cl, where = where)
            if (is.null(clDef)) 
                stop(gettextf("no definition was found for superclass %s in the specification of class %s", 
                  dQuote(cl), dQuote(name)), domain = NA)
            thisDataPart <- .validDataPartClass(clDef, where, 
                dataPartClass)
            if (!is.null(thisDataPart)) {
                dataPartClass <- thisDataPart
                if (!is.null(clDef@prototype)) {
                  protoClass <- class(clDef@prototype)[1L]
                  newObject <- if (protoClass %in% .AbnormalTypes) {
                    indirect <- .indirectAbnormalClasses[protoClass]
                    getClassDef(indirect)@prototype
                  }
                  else clDef@prototype
                  dataPartValue <- TRUE
                }
            }
        }
        if (length(dataPartClass)) {
            if (is.na(match(".Data", slots))) {
                properties <- c(list(.Data = dataPartClass), 
                  properties)
                slots <- names(properties)
            }
            else if (!extends(elNamed(properties, ".Data"), dataPartClass)) 
                stop(gettextf("conflicting definition of data part: .Data = %s, superclass implies %s", 
                  dQuote(elNamed(properties, ".Data")), dQuote(dataPartClass)), 
                  domain = NA)
            if (is.null(prototype)) {
                if (dataPartValue) 
                  prototype <- newObject
                else if (isVirtualClass(dataPartClass, where = where)) 
                  prototype <- newBasic("logical")
                else prototype <- new(dataPartClass)
                prototypeClass <- getClass(class(prototype), 
                  where = where)
            }
            else {
                if (extends(prototypeClass, "classPrototypeDef")) {
                  hasDataPart <- isTRUE(prototype@dataPart)
                  if (!hasDataPart) {
                    if (!dataPartValue) 
                      newObject <- new(dataPartClass)
                    pobject <- prototype@object
                    anames <- names(attributes(pobject))
                    attributes(newObject)[anames] <- attributes(pobject)
                    prototype@object <- newObject
                  }
                  else if (!extends(getClass(class(prototype@object), 
                    where = where), dataPartClass)) 
                    stop(gettextf("a prototype object was supplied with object slot of class %s, but the class definition requires an object that is class %s", 
                      dQuote(class(prototype@object)), dQuote(dataPartClass)), 
                      domain = NA)
                }
                else if (!extends(prototypeClass, dataPartClass)) 
                  stop(gettextf("a prototype was supplied of class %s, but the class definition requires an object that is class %s", 
                    dQuote(class(prototype)), dQuote(dataPartClass)), 
                    domain = NA)
            }
        }
        if (is.null(prototype)) {
            prototype <- StandardPrototype
        }
    }
    allProps <- properties
    for (cl in superClasses) {
        clDef <- getClassDef(cl, where)
        if (is(clDef, "classRepresentation")) {
            theseProperties <- getSlots(clDef)
            theseSlots <- names(theseProperties)
            theseSlots <- theseSlots[theseSlots != ".Data"]
            dups <- !is.na(match(theseSlots, names(allProps)))
            for (dup in theseSlots[dups]) if (!extends(elNamed(allProps, 
                dup), elNamed(theseProperties, dup))) 
                stop(gettextf("Definition of slot %s, in class %s, as %s conflicts with definition, inherited from class %s, as %s", 
                  sQuote(dup), dQuote(name), dQuote(elNamed(allProps, 
                    dup)), dQuote(cl), dQuote(elNamed(theseProperties, 
                    dup))), domain = NA)
            theseSlots <- theseSlots[!dups]
            if (length(theseSlots)) 
                allProps[theseSlots] <- theseProperties[theseSlots]
        }
        else stop(gettextf("class %s extends an undefined class (%s)", 
            dQuote(name), dQuote(cl)), domain = NA)
    }
    undefinedPrototypeSlots <- setdiff(names(prototype), names(allProps))
    if (length(undefinedPrototypeSlots) > 0L) {
        stop(gettextf("The prototype for class %s has undefined slot(s): %s", 
            dQuote(name), paste0("'", undefinedPrototypeSlots, 
                "'", collapse = ", ")))
    }
    if (is.null(dataPartClass)) {
        if (extends(prototypeClass, "classPrototypeDef")) {
        }
        else {
            if (is.list(prototype)) 
                prototype <- do.call("prototype", prototype)
            if (is.null(prototype)) 
                prototype <- StandardPrototype
        }
    }
    else {
        dataPartDef <- getClass(dataPartClass)
        checkDataPart <- !isXS3Class(dataPartDef)
        if (checkDataPart) 
            checkDataPart <- ((is.na(match(dataPartClass, .BasicClasses)) && 
                !isVirtualClass(dataPartDef)) || length(dataPartDef@slots))
        if (checkDataPart) 
            stop(gettextf("%s is not eligible to be the data part of another class (must be a basic class or a virtual class with no slots)", 
                dQuote(dataPartClass)), domain = NA)
        if (extends(prototypeClass, "classPrototypeDef")) {
        }
        else if (extends(prototypeClass, dataPartClass)) {
            if (extends(prototypeClass, "list") && length(names(prototype))) 
                warning("prototype is a list with named elements (could be ambiguous):  better to use function prototype() to avoid trouble.")
        }
        else if (is.list(prototype)) 
            prototype <- do.call("prototype", prototype)
    }
    if (extends(prototypeClass, "classPrototypeDef")) {
        pnames <- prototype@slots
        prototype <- prototype@object
        if (length(superClasses) == 0L && anyNA(match(pnames, 
            slots))) 
            stop(sprintf(ngettext(sum(is.na(match(pnames, slots))), 
                "named elements of prototype do not correspond to slot name: %s", 
                "named elements of prototype do not correspond to slot names: %s"), 
                paste(.dQ(pnames[is.na(match(pnames, slots))]), 
                  collapse = ", ")), domain = NA)
    }
    else pnames <- allNames(attributes(prototype))
    what <- seq_along(properties)
    props <- properties[what]
    what <- slots[what]
    nm <- names(attributes(prototype))
    for (i in seq_along(what)) {
        propName <- el(what, i)
        if (!identical(propName, ".Data") && !propName %in% nm) 
            slot(prototype, propName, FALSE) <- tryNew(el(props, 
                i), where)
    }
    list(properties = properties, prototype = prototype)
}
