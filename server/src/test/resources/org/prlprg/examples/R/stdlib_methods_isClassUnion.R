#? stdlib
`isClassUnion` <- function (Class) 
{
    if (is.character(Class)) 
        Class <- getClass(Class, TRUE)
    extends(class(Class), "ClassUnionRepresentation")
}
