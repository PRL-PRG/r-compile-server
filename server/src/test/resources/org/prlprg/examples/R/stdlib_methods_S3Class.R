#? stdlib
`S3Class` <- function (object) 
{
    value <- attr(object, ".S3Class")
    if (is.null(value)) {
        if (isS4(object)) {
            if (is.na(match(".Data", names(getClass(class(object))@slots)))) 
                stop(gettextf("'S3Class' only defined for extensions of %s or classes with a data part:  not true of class %s", 
                  dQuote("oldClass"), dQuote(class(object))), 
                  domain = NA)
            class(getDataPart(object))
        }
        else class(object)
    }
    else value
}
