#? stdlib
`isSealedClass` <- function (Class, where = topenv(parent.frame())) 
{
    if (is.character(Class)) 
        Class <- getClass(Class, TRUE, where)
    if (!is(Class, "classRepresentation")) 
        FALSE
    else Class@sealed
}
