#? stdlib
`.packageForGeneric` <- function (object) 
{
    if (is.list(object)) 
        lapply(object, .packageForGeneric)
    else if (is(object, "genericFunction")) 
        object@package
    else "base"
}
