#? stdlib
`setValidity` <- function (Class, method, where = topenv(parent.frame())) 
{
    if (isClassDef(Class)) {
        ClassDef <- Class
        Class <- ClassDef@className
    }
    else {
        ClassDef <- getClassDef(Class, where)
    }
    method <- .makeValidityMethod(Class, method)
    if (is.null(method) || (is.function(method) && length(formalArgs(method)) == 
        1L)) 
        ClassDef@validity <- method
    else stop("validity method must be NULL or a function of one argument")
    assignClassDef(Class, ClassDef, where = where)
    resetClass(Class, ClassDef, where = where)
}
