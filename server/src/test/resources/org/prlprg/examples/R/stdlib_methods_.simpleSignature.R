#? stdlib
`.simpleSignature` <- function (classes, names, packages) 
{
    object <- new("signature")
    object@.Data <- classes
    object@names <- names
    object@package <- packages
    object
}
