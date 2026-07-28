#? stdlib
`classLabel` <- function (Class) 
{
    if (is.character(Class) && length(Class)) {
        className <- Class[[1L]]
        packageName <- attr(Class, "package")
        if (is.null(packageName)) 
            packageName <- ""
    }
    else {
        if (is(Class, "classRepresentation")) {
            className <- Class@className
            packageName <- Class@package
        }
        else stop(gettextf("invalid call to 'classLabel': expected a name or a class definition, got an object of class %s", 
            classLabel(class(Class))), domain = NA)
    }
    if (.showPackage(className)) {
        packageName <- if (identical(packageName, ".GlobalEnv")) 
            " (from the global environment)"
        else paste0(" (from package \"", packageName, "\")")
        paste0("\"", className, "\"", packageName)
    }
    else paste0("\"", className, "\"")
}
