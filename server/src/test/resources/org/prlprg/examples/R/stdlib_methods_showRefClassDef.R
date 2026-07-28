#? stdlib
`showRefClassDef` <- function (object, title = "Reference Class") 
{
    cat(title, " \"", object@className, "\":\n", sep = "")
    fields <- object@fieldClasses
    if (length(fields)) {
        printPropertiesList(fields, "Class fields")
        locked <- .getLockedFieldNames(object)
        if (length(locked)) 
            .printNames("Locked Fields", locked, FALSE)
    }
    else cat("\nNo fields defined\n")
    methods <- names(object@refMethods)
    if (length(methods)) 
        .printNames("\nClass Methods: ", methods)
    else cat("\nNo Class Methods\n")
    supers <- object@refSuperClasses
    if (length(supers)) 
        .printNames("Reference Superclasses: ", supers)
}
