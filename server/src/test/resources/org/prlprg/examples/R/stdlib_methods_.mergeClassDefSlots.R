#? stdlib
`.mergeClassDefSlots` <- function (ClassDef, ...) 
{
    slots <- list(...)
    slotNames <- names(slots)
    for (i in seq_along(slots)) slot(ClassDef, slotNames[[i]]) <- slots[[i]]
    ClassDef
}
