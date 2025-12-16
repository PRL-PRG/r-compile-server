#? stdlib
`finalDefaultMethod` <- function (method) 
{
    repeat {
        if (is.function(method) || is.null(method)) 
            break
        if (is(method, "MethodsList")) {
            .MlistDefunct()
            method <- slot(method, "methods")[["ANY"]]
        }
        else stop(gettextf("default method must be a method definition, a primitive or NULL: got an object of class %s", 
            dQuote(class(method))), domain = NA)
    }
    method
}
