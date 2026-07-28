#? stdlib
`getSlots` <- function (x) 
{
    classDef <- if (isClassDef(x)) 
        x
    else getClass(x)
    props <- classDef@slots
    value <- as.character(props)
    names(value) <- names(props)
    value
}
