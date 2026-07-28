#? stdlib
`refClassMethods` <- function (Class) 
{
    ClassDef <- getClass(Class)
    if (is(ClassDef, "refClassRepresentation")) 
        value <- as.list(ClassDef@refMethods)
    else stop(gettextf("not a reference class: %s", ClassDef@name), 
        domain = NA)
    for (i in seq_along(value)) value[[i]] <- as(value[[i]], 
        "function")
    value
}
