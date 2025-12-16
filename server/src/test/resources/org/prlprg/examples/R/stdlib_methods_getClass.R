#? stdlib
`getClass` <- function (Class, .Force = FALSE, where = .classEnv(Class, topenv(parent.frame()), 
    FALSE)) 
{
    value <- getClassDef(Class, where)
    if (is.null(value)) {
        if (!.Force) 
            stop(gettextf("%s is not a defined class", dQuote(Class)), 
                domain = NA)
        else value <- makeClassRepresentation(Class, package = "base", 
            virtual = TRUE, where = where)
    }
    value
}

# Examples
getClass("numeric") ## a built in class

cld <- getClass("thisIsAnUndefinedClass", .Force = TRUE)
cld ## a NULL prototype
## If you are really curious:
utils::str(cld)
## Whereas these generate errors:
try(getClass("thisIsAnUndefinedClass"))
try(getClassDef("thisIsAnUndefinedClass"))

