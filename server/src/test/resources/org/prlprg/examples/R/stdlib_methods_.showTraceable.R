#? stdlib
`.showTraceable` <- function (object) 
{
    if (identical(object@source, emptyenv())) {
        cat("Object with tracing code, class \"", class(object), 
            "\"\nOriginal definition: \n", sep = "")
        callGeneric(object@original)
        cat("\n## (to see the tracing code, look at body(object))\n")
    }
    else {
        cat("Object of class \"", class(object), "\", from source\n", 
            sep = "")
        callGeneric(object@.Data)
        cat("\n## (to see original from package, look at object@original)\n")
    }
}
