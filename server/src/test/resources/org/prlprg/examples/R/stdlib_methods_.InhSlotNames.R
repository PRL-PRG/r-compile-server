#? stdlib
`.InhSlotNames` <- function (Class) 
{
    ClassDef <- getClass(Class)
    value <- names(ClassDef@slots)
    if (length(value) == 0 && (Class %in% .BasicClasses || extends(ClassDef, 
        "vector"))) 
        value <- ".Data"
    value
}
