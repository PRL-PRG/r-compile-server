#? stdlib
`refClassInformation` <- function (Class, contains, fields, refMethods, where) 
{
    if (length(contains) > 0) {
        superClassDefs <- lapply(contains, function(what) {
            if (is(what, "classRepresentation")) 
                what
            else if (is.character(what)) 
                getClass(what, where = where)
            else stop(gettextf("the 'contains' argument should be the names of superclasses:  got an element of class %s", 
                dQuote(class(what))), domain = NA)
        })
        missingDefs <- vapply(superClassDefs, is.null, NA)
        if (any(missingDefs)) 
            stop(gettextf("no definition found for inherited class: %s", 
                paste0("\"", contains[missingDefs], "\"", collapse = ", ")), 
                domain = NA)
        superClasses <- unlist(lapply(superClassDefs, function(def) def@className), 
            FALSE)
        isRefSuperClass <- vapply(superClassDefs, function(def) is(def, 
            "refClassRepresentation"), NA)
    }
    else {
        superClassDefs <- list()
        superClasses <- character()
        isRefSuperClass <- logical()
    }
    if (!any(isRefSuperClass)) {
        superClasses <- c(superClasses, "envRefClass")
        isRefSuperClass <- c(isRefSuperClass, TRUE)
        superClassDefs[["envRefClass"]] <- getClass("envRefClass", 
            where = where)
    }
    refSuperClasses <- superClasses[isRefSuperClass]
    otherRefClasses <- getRefSuperClasses(refSuperClasses, superClassDefs[isRefSuperClass])
    refSuperClasses <- unique(c(refSuperClasses, otherRefClasses))
    fieldNames <- names(fields)
    nf <- length(fields)
    fieldClasses <- character(nf)
    names(fieldClasses) <- fieldNames
    fieldPrototypes <- list()
    for (i in seq_len(nf)) {
        thisName <- fieldNames[[i]]
        thisField <- fields[[i]]
        if (is.character(thisField)) {
            if (length(thisField) != 1) 
                stop(gettextf("a single class name is needed for field %s, got a character vector of length %d", 
                  sQuote(thisName), length(thisField)), domain = NA)
            if (is.null(getClassDef(thisField, where = where))) 
                stop(gettextf("class %s for field %s is not defined", 
                  dQuote(thisField), sQuote(thisName)), domain = NA)
            fieldClasses[[i]] <- thisField
            if (thisField != "ANY") 
                fieldPrototypes <- c(fieldPrototypes, .makeDefaultBinding(thisName, 
                  thisField, where = where))
            else fieldPrototypes[[thisName]] <- new("uninitializedField", 
                field = thisName, className = "ANY")
        }
        else if (is.function(thisField)) {
            fieldClasses[[i]] <- "activeBindingFunction"
            fieldPrototypes[[thisName]] <- .makeActiveBinding(thisField)
        }
        else stop(gettextf("field %s was supplied as an object of class %s; must be a class name or a binding function", 
            sQuote(thisName), dQuote(class(thisField))), domain = NA)
    }
    fc <- fp <- cm <- list()
    for (cl in rev(superClassDefs[isRefSuperClass])) {
        fcl <- cl@fieldClasses
        fpl <- as.list(cl@fieldPrototypes, all.names = TRUE)
        cml <- as.list(cl@refMethods, all.names = TRUE)
        insertFields(fc) <- fcl
        fp[names(fpl)] <- fpl
        cm[names(cml)] <- cml
    }
    insertFields(fc) <- fieldClasses
    fp[names(fieldPrototypes)] <- fieldPrototypes
    cm <- insertClassMethods(cm, Class, refMethods, names(fc), 
        TRUE)
    list(superClasses = superClasses, refSuperClasses = refSuperClasses, 
        fieldClasses = fc, fieldPrototypes = fp, refMethods = cm)
}
