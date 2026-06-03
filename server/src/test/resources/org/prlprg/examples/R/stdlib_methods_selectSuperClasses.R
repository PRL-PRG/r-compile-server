#? stdlib
`selectSuperClasses` <- function (Class, dropVirtual = FALSE, namesOnly = TRUE, directOnly = TRUE, 
    simpleOnly = directOnly, where = topenv(parent.frame())) 
{
    ext <- if (isClassDef(Class)) 
        Class@contains
    else if (isClass(Class, where = where)) 
        getClass(Class, where = where)@contains
    else stop("'Class' must be a valid class definition or class")
    .selectSuperClasses(ext, dropVirtual = dropVirtual, namesOnly = namesOnly, 
        directOnly = directOnly, simpleOnly = simpleOnly)
}

# Examples
setClass("Root")
setClass("Base", contains = "Root", slots = c(length = "integer"))
setClass("A", contains = "Base", slots = c(x = "numeric"))
setClass("B", contains = "Base", slots = c(y = "character"))
setClass("C", contains = c("A", "B"))

extends("C")   #-->  "C"  "A" "B"  "Base" "Root"
selectSuperClasses("C") # "A" "B"
selectSuperClasses("C", directOnly=FALSE) # "A" "B"  "Base"  "Root"
selectSuperClasses("C", dropVirtual=TRUE, directOnly=FALSE)# ditto w/o "Root"

