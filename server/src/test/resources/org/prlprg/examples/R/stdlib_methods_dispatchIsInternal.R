#? stdlib
`dispatchIsInternal` <- function (fdef) 
{
    is.primitive(fdef@default) || is(fdef@default, "internalDispatchMethod")
}
