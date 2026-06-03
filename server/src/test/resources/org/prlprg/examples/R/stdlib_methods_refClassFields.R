#? stdlib
`refClassFields` <- function (Class) 
{
    ClassDef <- getClass(Class)
    if (is(ClassDef, "refClassRepresentation")) 
        ClassDef@fieldClasses
    else stop(gettextf("not a reference class: %s", ClassDef@name), 
        domain = NA)
}
