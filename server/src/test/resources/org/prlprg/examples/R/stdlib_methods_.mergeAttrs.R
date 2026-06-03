#? stdlib
`.mergeAttrs` <- function (value, object, explicit = NULL) 
{
    supplied <- attributes(object)
    if (length(explicit)) 
        supplied[names(explicit)] <- explicit
    valueAttrs <- attributes(value)
    if (length(supplied$names) && length(valueAttrs$names) == 
        0L) {
        if (length(value) != length(object)) 
            length(supplied$names) <- length(value)
    }
    if (length(valueAttrs)) {
        valueAttrs$class <- NULL
        supplied[names(valueAttrs)] <- valueAttrs
    }
    attributes(value) <- supplied
    if (isS4(object)) 
        .asS4(value)
    else value
}
