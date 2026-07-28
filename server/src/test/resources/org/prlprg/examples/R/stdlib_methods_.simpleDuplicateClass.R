#? stdlib
`.simpleDuplicateClass` <- function (def, prev) 
{
    supers <- names(def@contains)
    prevSupers <- names(prev@contains)
    if (length(supers) != length(prevSupers) || anyNA(match(supers, 
        prevSupers))) 
        return(FALSE)
    verbose <- getOption("verbose")
    S3 <- "oldClass" %in% supers
    if (S3) {
        return(TRUE)
    }
    dupsExist <- .duplicateClassesExist()
    if (dupsExist) {
        dups <- match(supers, multipleClasses(), 0) > 0
        if (any(dups)) {
            if (verbose) 
                message(gettextf("Note: some superclasses of class %s in package %s have duplicate definitions.  This definition is not being treated as equivalent to that from package %s", 
                  dQuote(def@className), sQuote(def@package), 
                  sQuote(prev@package)), domain = NA)
            return(FALSE)
        }
    }
    slots <- names(def@slots)
    prevSlots <- names(prev@slots)
    if (length(slots) != length(prevSlots) || anyNA(match(slots, 
        prevSlots))) 
        return(FALSE)
    for (what in slots) {
        slotClasses <- def@slots
        prevClasses <- prev@slots
        clWhat <- slotClasses[[what]]
        prevWhat <- prevClasses[[what]]
        if (!identical(as.character(clWhat), as.character(prevWhat)) || 
            (dupsExist && !identical(as.character(packageSlot(clWhat)), 
                as.character(packageSlot(prevWhat))))) 
            return(FALSE)
    }
    if (verbose) 
        message(gettextf("Note: the specification for class %s in package %s seems equivalent to one from package %s: not turning on duplicate class definitions for this class.", 
            dQuote(def@className), sQuote(def@package), sQuote(prev@package)), 
            domain = NA)
    TRUE
}
