#? stdlib
`.restoreClass` <- function (def, where) 
{
    cl <- def@className
    message(gettextf("restoring definition of class %s", dQuote(cl)), 
        domain = NA)
    if (isClass(cl, where = where)) 
        removeClass(cl, where = where)
    assignClassDef(cl, def, where = where)
}
