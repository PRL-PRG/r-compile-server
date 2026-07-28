#? stdlib
`possibleExtends` <- function (class1, class2, ClassDef1 = getClassDef(class1), ClassDef2 = getClassDef(class2, 
    where = .classEnv(ClassDef1))) 
{
    if (.identC(class1[[1L]], class2) || .identC(class2, "ANY")) 
        return(TRUE)
    if (is.null(ClassDef1)) 
        return(FALSE)
    ext <- ClassDef1@contains
    ext[[class2]] %||% if (is.null(ClassDef2)) 
        FALSE
    else {
        subs <- ClassDef2@subclasses
        if (!.identC(class(ClassDef2), "classRepresentation") && 
            isClassUnion(ClassDef2)) 
            any(c(class1, names(ext)) %in% names(subs))
        else {
            i <- match(class1, names(subs))
            i <- i[!is.na(i)]
            if (length(i)) 
                subs[[i[1L]]]
            else FALSE
        }
    }
}
