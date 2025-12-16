#? stdlib
`.derivedDefaultMethod` <- function (fdef, internal = NULL) 
{
    if (is.function(fdef) && !is.primitive(fdef)) {
        if (!is.null(internal)) {
            value <- new("internalDispatchMethod", internal = internal)
        }
        else {
            value <- new("derivedDefaultMethod")
        }
        value@.Data <- fdef
        value@target <- value@defined <- .newSignature(list(.anyClassName), 
            formalArgs(fdef))
        value
    }
    else fdef
}
