#? stdlib
`isVirtualClass` <- function (Class, where = topenv(parent.frame())) 
{
    if (isClassDef(Class)) 
        Class@virtual
    else if (isClass(Class, where = where)) 
        getClass(Class, where = where)@virtual
    else TRUE
}
