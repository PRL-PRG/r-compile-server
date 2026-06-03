#? stdlib
`refObjectClass` <- function (object) 
{
    Class <- class(object)
    classDef <- getClassDef(Class)
    if (is(classDef, "refClassRepresentation")) 
        classDef
    else stop(gettextf("%s is not a reference class", dQuote(Class)), 
        domain = NA)
}
