#? stdlib
`getRefSuperClasses` <- function (classes, classDefs) 
{
    supers <- character()
    for (i in seq_along(classes)) {
        clDef <- classDefs[[i]]
        supers <- c(supers, clDef@refSuperClasses)
    }
    unique(supers)
}
