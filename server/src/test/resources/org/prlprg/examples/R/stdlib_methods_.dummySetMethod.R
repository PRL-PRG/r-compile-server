#? stdlib
`.dummySetMethod` <- function (f, signature = character(), definition, where = topenv(parent.frame()), 
    valueClass = NULL, sealed = FALSE) 
{
    if (is.function(f) && is(f, "genericFunction")) 
        f <- fdef@generic
    else if (is.function(f)) {
        if (is.primitive(f)) 
            f <- .primname(f)
        else stop("a function for argument 'f' must be a generic function")
    }
    else f <- switch(f, as.double = "as.numeric", f)
    assign(.dummyMethodName(f, signature), definition, envir = where)
}
