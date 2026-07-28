#? stdlib
`.valueClassTest` <- function (object, classes, fname) 
{
    if (length(classes)) {
        for (Cl in classes) if (is(object, Cl)) 
            return(object)
        stop(gettextf("invalid value from generic function %s, class %s, expected %s", 
            sQuote(fname), dQuote(class(object)), paste(dQuote(classes), 
                collapse = " or ")), domain = NA)
    }
    object
}
