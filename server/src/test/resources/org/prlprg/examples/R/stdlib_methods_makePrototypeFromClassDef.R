#? stdlib
`makePrototypeFromClassDef` <- function (slots, ClassDef, extends, where) 
{
    className <- ClassDef@className
    snames <- names(slots)
    supers <- names(extends)
    dataPartClass <- elNamed(slots, ".Data")
    prototype <- ClassDef@prototype
    dataPartDone <- is.null(dataPartClass) || is(prototype, dataPartClass)
    if (!.identC(class(prototype), className) && .isPrototype(prototype)) {
        pnames <- prototype@slots
        prototype <- prototype@object
    }
    else pnames <- names(attributes(prototype))
    if (length(slots) == 0L && !is.null(prototype)) 
        return(prototype)
    for (i in seq_along(extends)) {
        what <- el(supers, i)
        exti <- extends[[i]]
        if (isFALSE(exti@simple)) 
            next
        if (identical(what, "VIRTUAL")) {
        }
        else if (isClass(what, where = packageSlot(exti))) {
            cli <- getClassDef(what, package = packageSlot(exti))
            slotsi <- names(cli@slots)
            pri <- cli@prototype
            if (is.null(prototype)) {
                prototype <- pri
                pnames <- names(attributes(prototype))
            }
            else if (length(slots)) {
                for (slotName in slotsi) {
                  if (identical(slotName, ".Data")) {
                    if (!dataPartDone) {
                      prototype <- setDataPart(prototype, getDataPart(pri), 
                        FALSE)
                      dataPartDone <- TRUE
                    }
                  }
                  else if (is.na(match(slotName, pnames))) {
                    slot(prototype, slotName, check = FALSE) <- attr(pri, 
                      slotName)
                    pnames <- c(pnames, slotName)
                  }
                }
            }
            else if (!dataPartDone && extends(cli, dataPartClass)) {
                prototype <- setDataPart(prototype, pri, FALSE)
                dataPartDone <- TRUE
            }
        }
    }
    if (length(slots) == 0L) 
        return(prototype)
    if (is.null(prototype)) 
        prototype <- defaultPrototype()
    pnames <- names(attributes(prototype))
    pslots <- if (.identC(class(prototype), className)) 
        names(attributes(unclass(prototype)))
    else if (isClass(class(prototype))) 
        names(getSlots(getClass(class(prototype))))
    if (!is.na(match(".Data", snames))) {
        dataPartClass <- elNamed(slots, ".Data")
        if (!(isVirtualClass(dataPartClass))) {
            if (isClass(class(prototype), where = where)) {
                prototypeClass <- getClass(class(prototype), 
                  where = where)
                OK <- extends(prototypeClass, dataPartClass)
            }
            else OK <- FALSE
            if (isFALSE(OK)) 
                stop(gettextf("in constructing the prototype for class %s: prototype has class %s, but the data part specifies class %s", 
                  dQuote(className), dQuote(.class1(prototype)), 
                  dQuote(dataPartClass)), domain = NA)
        }
        iData <- -match(".Data", snames)
        snames <- snames[iData]
        slots <- slots[iData]
    }
    for (j in seq_along(snames)) {
        name <- el(snames, j)
        i <- match(name, pnames)
        if (is.na(i)) {
            slot(prototype, name, check = FALSE) <- tryNew(el(slots, 
                j), where)
        }
    }
    extra <- pnames[is.na(match(pnames, snames)) & !is.na(match(pnames, 
        pslots))]
    if (length(extra) && is.na(match("oldClass", supers))) 
        warning(gettextf("in constructing the prototype for class %s, slots in prototype and not in class: %s", 
            dQuote(className), paste(extra, collapse = ", ")), 
            domain = NA)
    slotDefs <- ClassDef@slots
    slotNames <- names(slotDefs)
    pnames <- names(attributes(prototype))
    pnames <- pnames[!is.na(match(pnames, slotNames))]
    check <- rep.int(FALSE, length(pnames))
    for (what in pnames) {
        pwhat <- slot(prototype, what)
        slotClass <- getClassDef(slotDefs[[what]], where)
        if (is.null(slotClass) || !extends(class(pwhat), slotClass)) {
            if (is.null(pwhat)) {
            }
            else if (is(slotClass, "classRepresentation") && 
                slotClass@virtual) {
            }
            else check[match(what, pnames)] <- TRUE
        }
    }
    if (any(check)) 
        stop(gettextf("in making the prototype for class %s elements of the prototype failed to match the corresponding slot class: %s", 
            dQuote(className), paste(pnames[check], "(class", 
                .dQ(slotDefs[match(pnames[check], slotNames)]), 
                ")", collapse = ", ")), domain = NA)
    prototype
}
