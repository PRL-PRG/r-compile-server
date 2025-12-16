#? stdlib
`showClassMethod` <- function (object) 
{
    cl <- class(object)
    cat("Class method definition")
    if (!.identC(cl, "refMethodDef")) 
        cat(sprintf(" (class %s)", dQuote(cl)))
    cat(sprintf(" for method %s()\n", object@name))
    if (is(object, "externalRefMethod")) 
        show(object@actual)
    else show(as(object, "function"))
    if (length(object@mayCall)) 
        .printNames("\nMethods used: ", object@mayCall)
}
