#? stdlib
`isGroup` <- function (f, where = topenv(parent.frame()), fdef = getGeneric(f, 
    where = where)) 
{
    is(fdef, "groupGenericFunction")
}
