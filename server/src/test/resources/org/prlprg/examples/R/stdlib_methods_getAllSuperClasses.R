#? stdlib
`getAllSuperClasses` <- function (ClassDef, simpleOnly = TRUE) 
{
    temp <- superClassDepth(ClassDef, simpleOnly = simpleOnly)
    unique(temp$label[sort.list(temp$depth)])
}
