#? stdlib
`isClass` <- function (Class, formal = TRUE, where = topenv(parent.frame())) 
!is.null(getClassDef(Class, where))
