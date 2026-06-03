#? stdlib
`.initTraceable` <- function (.Object, def, tracer, exit, at, print, doEdit) 
{
    .Object@source <- emptyenv()
    if (missing(def)) 
        return(.Object)
    oldClass <- class(def)
    oldClassDef <- getClass(oldClass)
    if (!is.null(oldClassDef) && length(oldClassDef@slots) > 
        0) 
        as(.Object, oldClass) <- def
    .Object@original <- def
    if (nargs() > 2) {
        if (!is.null(elNamed(getSlots(getClass(class(def))), 
            ".Data"))) 
            def <- def@.Data
        .Object@.Data <- .makeTracedFunction(def, tracer, exit, 
            at, print, doEdit)
    }
    .Object
}
