#? stdlib
`getRefClass` <- function (Class, where = topenv(parent.frame())) 
{
    if (is(Class, "refClassRepresentation")) {
        classDef <- Class
        Class <- classDef@className
    }
    else if (is.character(Class)) {
        classDef <- getClass(Class, where = where)
        if (!is(classDef, "refClassRepresentation")) 
            stop(gettextf("class %s is defined but is not a reference class", 
                dQuote(Class)), domain = NA)
    }
    else stop(gettextf("class must be a reference class representation or a character string; got an object of class %s", 
        dQuote(class(Class))), domain = NA)
    generator <- new("refGeneratorSlot")
    env <- as.environment(generator)
    env$className <- Class
    env$def <- classDef
    classFun <- classGeneratorFunction(Class, where)
    classFun@package <- classDef@package
    new("refObjectGenerator", classFun, generator = generator)
}
