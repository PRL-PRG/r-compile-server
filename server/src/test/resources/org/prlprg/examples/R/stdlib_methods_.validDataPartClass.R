#? stdlib
`.validDataPartClass` <- function (cl, where, prevDataPartClass = NULL) 
{
    if (is(cl, "classRepresentation")) {
        ClassDef <- cl
        cl <- ClassDef@className
    }
    else ClassDef <- getClass(cl, TRUE)
    value <- switch(cl, matrix = , array = cl, elNamed(ClassDef@slots, 
        ".Data"))
    if (is.null(value)) {
        if (.identC(cl, "structure")) 
            value <- "vector"
        else if (cl != "VIRTUAL" && (extends(cl, "vector") || 
            !is.na(match(cl, .BasicClasses)))) 
            value <- cl
        else if (extends(cl, "oldClass") && isVirtualClass(cl)) {
        }
        else if (isTRUE(ClassDef@virtual) && length(ClassDef@slots) == 
            0L && length(ClassDef@subclasses)) {
            subclasses <- ClassDef@subclasses
            what <- names(subclasses)
            value <- cl
            for (i in seq_along(what)) {
                ext <- subclasses[[i]]
                if (length(ext@by) == 0L && ext@simple && !ext@dataPart && 
                  is.na(match(what[i], .BasicClasses))) {
                  value <- NULL
                  break
                }
            }
        }
    }
    if (!(is.null(value) || is.null(prevDataPartClass) || extends(prevDataPartClass, 
        value) || isVirtualClass(value, where = where))) {
        warning(gettextf("more than one possible class for the data part: using %s rather than %s", 
            .dQ(prevDataPartClass), .dQ(value)), domain = NA)
        value <- NULL
    }
    value
}
