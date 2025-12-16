#? stdlib
`testVirtual` <- function (properties, extends, prototype, where) 
{
    if (length(extends)) {
        en <- names(extends)
        if (!is.na(match("VIRTUAL", en))) 
            return(TRUE)
        for (what in en) {
            enDef <- getClassDef(what, package = packageSlot(extends[[what]]))
            if (!is.null(enDef) && isFALSE(enDef@virtual)) 
                return(FALSE)
        }
    }
    (length(properties) == 0L && is.null(prototype))
}
