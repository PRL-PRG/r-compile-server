#? stdlib
`makeClassRepresentation` <- function (name, slots = list(), superClasses = character(), prototype = NULL, 
    package, validity = NULL, access = list(), version = .newExternalptr(), 
    sealed = FALSE, virtual = NA, where) 
{
    if (any(superClasses %in% .AbnormalTypes)) 
        superClasses <- .addAbnormalDataType(superClasses)
    if (!is.null(prototype) || length(slots) || length(superClasses)) {
        pp <- reconcilePropertiesAndPrototype(name, slots, prototype, 
            superClasses, where)
        slots <- pp$properties
        prototype <- pp$prototype
    }
    contains <- list()
    if (nzchar(package)) 
        packageSlot(name) <- package
    for (what in superClasses) {
        whatClassDef <- if (is(what, "classRepresentation")) 
            what
        else if (is.null(packageSlot(what))) 
            getClass(what, where = where)
        else getClass(what)
        what <- whatClassDef@className
        contains[[what]] <- makeExtends(name, slots = slots, 
            classDef2 = whatClassDef, package = package)
    }
    validity <- .makeValidityMethod(name, validity)
    if (is.na(virtual)) {
        virtual <- testVirtual(slots, contains, prototype, where)
        if (virtual && !is.na(match("VIRTUAL", superClasses))) 
            contains[["VIRTUAL"]] <- NULL
    }
    if (!is.null(prototype) && is.na(match(name, .BasicClasses))) 
        prototype <- .asS4(prototype)
    if (".S3Class" %in% names(slots)) 
        prototype <- .addS3Class(name, prototype, contains, where)
    newClassRepresentation(className = name, slots = slots, contains = contains, 
        prototype = prototype, virtual = virtual, validity = validity, 
        access = access, package = package, versionKey = version, 
        sealed = sealed)
}

# Examples
