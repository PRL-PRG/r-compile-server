#? stdlib
`checkAtAssignment` <- function (cl, name, valueClass) 
{
    ClassDef <- getClass(cl)
    slotClass <- ClassDef@slots[[name]]
    if (is.null(slotClass)) 
        stop(gettextf("%s is not a slot in class %s", sQuote(name), 
            dQuote(cl)), domain = NA)
    if (.identC(slotClass, valueClass)) 
        return(TRUE)
    ok <- possibleExtends(valueClass, slotClass, ClassDef2 = getClassDef(slotClass, 
        where = .classEnv(ClassDef)))
    if (isFALSE(ok)) 
        stop(gettextf("assignment of an object of class %s is not valid for @%s in an object of class %s; is(value, \"%s\") is not TRUE", 
            dQuote(valueClass), sQuote(name), dQuote(cl), slotClass), 
            domain = NA)
    TRUE
}
