#? stdlib
`showClass` <- function (Class, complete = TRUE, propertiesAreCalled = "Slots") 
{
    if (isClassDef(Class)) {
        ClassDef <- Class
        Class <- ClassDef@className
    }
    else if (complete) 
        ClassDef <- getClass(Class)
    else ClassDef <- getClassDef(Class)
    cat(if (isTRUE(ClassDef@virtual)) 
        "Virtual ", "Class ", .dQ(Class), if (nzchar(pkg <- ClassDef@package)) 
        c(" [", if (pkg != ".GlobalEnv") "package" else "in", 
            " \"", pkg, "\"]"), "\n", sep = "")
    x <- ClassDef@slots
    if (length(x)) {
        printPropertiesList(x, propertiesAreCalled)
    }
    else cat("\nNo ", propertiesAreCalled, ", prototype of class \"", 
        .class1(ClassDef@prototype), "\"\n", sep = "")
    ext <- ClassDef@contains
    if (length(ext)) {
        cat("\nExtends: ")
        showExtends(ext)
    }
    ext <- ClassDef@subclasses
    if (length(ext)) {
        cat("\nKnown Subclasses: ")
        showExtends(ext)
    }
}
