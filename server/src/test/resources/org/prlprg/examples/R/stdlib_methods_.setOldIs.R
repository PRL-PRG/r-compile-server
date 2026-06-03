#? stdlib
`.setOldIs` <- function (Classes, where) 
{
    if (length(Classes) != 2) 
        stop(gettextf("argument 'Classes' must be a vector of two classes; got an argument of length %d", 
            length(Classes)), domain = NA)
    for (cl in Classes) {
        if (isClass(cl, where)) {
            if (!extends(cl, "oldClass")) 
                warning(gettextf("inconsistent old-style class information for %s (maybe mixing old and new classes?)", 
                  dQuote(cl)), domain = NA)
        }
        else setClass(cl, representation("oldClass", "VIRTUAL"), 
            where = where)
    }
    Class1 <- Classes[[1L]]
    for (cl in Classes[-1L]) {
        tfun <- .oldTestFun
        body(tfun, envir = environment(tfun)) <- substitute(inherits(object, 
            CLASS), list(CLASS = cl))
        setIs(Class1, cl, test = tfun, coerce = .oldCoerceFun, 
            replace = .oldReplaceFun, where = where)
    }
    NULL
}
