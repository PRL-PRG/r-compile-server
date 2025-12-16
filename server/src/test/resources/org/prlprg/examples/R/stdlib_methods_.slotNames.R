#? stdlib
`.slotNames` <- function (x) 
{
    classDef <- getClassDef(if (!isS4(x) && is.character(x) && 
        length(x) == 1L) 
        x
    else class(x))
    if (is.null(classDef)) 
        character()
    else names(classDef@slots)
}
