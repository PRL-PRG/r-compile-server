#? stdlib
`tryNew` <- function (Class, where) 
{
    ClassDef <- getClassDef(Class, where)
    if (is.null(ClassDef)) 
        return(NULL)
    else if (isTRUE(ClassDef@virtual)) 
        ClassDef@prototype
    else tryCatch(new(ClassDef), error = function(e) {
        value <- ClassDef@prototype
        class(value) <- ClassDef@className
        value
    })
}
