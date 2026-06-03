#? stdlib
`S3Class<-` <- function (object, value) 
{
    if (isS4(object)) {
        current <- attr(object, ".S3Class")
        if (is.null(current)) {
            if (is.na(match(value, .BasicClasses))) 
                stop(gettextf("'S3Class' can only assign to S4 objects that extend \"oldClass\"; not true of class %s", 
                  dQuote(class(object))), domain = NA)
            mode(object) <- value
        }
        else slot(object, ".S3Class") <- value
    }
    else class(object) <- value
    object
}
