#? stdlib
`.tempClassDef` <- function (...) 
{
    value <- new("classRepresentation")
    slots <- list(...)
    slotNames <- names(slots)
    for (i in seq_along(slotNames)) slot(value, slotNames[[i]], 
        FALSE) <- slots[[i]]
    value
}
